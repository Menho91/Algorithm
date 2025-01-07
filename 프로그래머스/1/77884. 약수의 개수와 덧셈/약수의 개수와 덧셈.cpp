#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPow(int num)
{
    if(pow(static_cast<int>(sqrt(num)), 2) == num)
    {
        return true;
    }
    return false;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++)
    {
        if(isPow(i))
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }
    return answer;
}