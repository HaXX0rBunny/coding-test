#include <vector>
#include <string>

using namespace std;

vector<string> solution(vector<vector<int>> line) {
    vector<vector<long long>> points;
    long long min_x = 1e18, max_x = -1e18;
    long long min_y = 1e18, max_y = -1e18;


    int n = line.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long A1 = line[i][0], B1 = line[i][1], C1 = line[i][2];
            long long A2 = line[j][0], B2 = line[j][1], C2 = line[j][2];
            long long denominator = A1 * B2 - A2 * B1;
            if (denominator == 0) continue; 

            long long x_numerator = B1 * C2 - B2 * C1;
            long long y_numerator = A2 * C1 - A1 * C2;
            if (x_numerator % denominator != 0 || y_numerator % denominator != 0) continue;

            long long x = x_numerator / denominator;
            long long y = y_numerator / denominator;

            points.push_back({x, y});
            if (x < min_x) min_x = x;
            if (x > max_x) max_x = x;
            if (y < min_y) min_y = y;
            if (y > max_y) max_y = y;
        }
    }

    
    int width = max_x - min_x + 1;
    int height = max_y - min_y + 1;
    vector<string> grid(height, string(width, '.'));

   
    for (const auto& point : points) {
        int x = point[0] - min_x;
        int y = max_y - point[1];
        grid[y][x] = '*';
    }

    return grid;
}