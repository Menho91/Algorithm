#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(pow(static_cast<int>(sqrt(n)), 2) == n)
        return pow(static_cast<int>(sqrt(n))+1, 2);
    answer = -1;
    return answer;
}