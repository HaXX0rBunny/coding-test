#include <string>
#include <vector>
#include <cmath>
using namespace std;

pair<int, int> getCoord(int num)
{
    if(num == 0)
        return {1,3};
    return {(num-1)%3, (num-1)/3};
    
}
int getDist(pair<int, int> pos1, pair<int, int> pos2 )
{
    return abs(pos1.first - pos2.first)+abs(pos1.second - pos2.second);
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    pair<int, int> Coords ,leftCoord={0,3}, rightCoord;
    int left=10;
    int right=12;
    int distL, distR;
    for(int num : numbers)
    {
        if(num==4||num==1|| num==7)
        {    
            answer += 'L';
            left =num;
        }
        else if (num == 3 ||num == 6 || num == 9)
        {
            answer += 'R';
            right =num;
        }
        else
        {
            Coords = getCoord(num);
            leftCoord = getCoord(left);
            rightCoord = getCoord(right);
            
            distL=getDist(leftCoord, Coords);
            distR=getDist(rightCoord, Coords);
            if(distL == distR)
            {
                if(hand == "left")
                {
                    answer += 'L';
                    left = num;
                }
                else
                {
                    answer += 'R';
                    right = num;
                }
            }
            else if(distL < distR)
            {
                
                answer += 'L';
                left = num;
            }
            else
            {
                answer += 'R';
                right = num;
            }
        }
    }
    return answer;
}