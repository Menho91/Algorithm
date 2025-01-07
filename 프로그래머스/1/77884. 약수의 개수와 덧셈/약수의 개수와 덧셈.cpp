#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPow(int num)
{
    for(int i = sqrt(num) - 1; i < sqrt(num) + 1; i++)
    {
        if(pow(i, 2) == num)
        {
            return true;
        }
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