using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long temp = 0;
    for (int i=1;i<=count ;i++ )
    {
        temp+=(i *price);
    }
    if (temp > money)
        answer = temp-money;
    else
        answer= 0;
    return answer;
}