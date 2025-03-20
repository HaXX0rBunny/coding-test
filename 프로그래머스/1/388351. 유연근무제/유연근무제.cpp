#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    int weekdays = 0;

    for (int day = startday; day < startday + 7; day++) {

        if (day % 7 >= 1 && day % 7 <= 5) {
            weekdays++;
        }
    }
    
    for (int i = 0; i < schedules.size(); i++) {
        bool isEligible = true;
        
       
          // 출근 희망 시각 + 10분 계산
        int hour = schedules[i] / 100;
        int minute = schedules[i] % 100;
        
        minute += 10;
        
        if (minute >= 60) {
            hour += 1;
            minute -= 60;
        }
        
        int targetTime = hour * 100 + minute;
        for (int j = 0; j < 7; j++) {
        int day = (startday + j - 1) % 7 + 1;
            
            // 주말이 아닌 경우
        if (day >= 1 && day <= 5) {
            if (timelogs[i][j] > targetTime) {
                isEligible = false;
                break;
            }
        }
    }
        
        if (isEligible) {
            answer++;
        }
    }
    
    return answer;
}