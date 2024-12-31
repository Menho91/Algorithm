#include <string>
#include <vector>

using namespace std;

long long Sum(int num1, int num2)
{
    long long answer = 0;
    for(int i = num1; i <= num2; i++)
    {
        answer += i;
    }
    return answer;
}

long long solution(int a, int b) {
    long long answer = 0;
    if(a <= b)
        answer = Sum(a, b);
    else
        answer = Sum(b, a);
    return answer;
}