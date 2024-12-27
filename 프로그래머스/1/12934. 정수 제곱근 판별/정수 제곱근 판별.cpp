#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    for(int i = sqrt(n) - 1; i < sqrt(n) + 1; i++)
    {
        if(pow(i, 2) == n)
            return pow(i+1, 2);
    }
    answer = -1;
    return answer;
}