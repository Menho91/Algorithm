#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    if(n < a)
    {
        return answer;
    }
    answer += (n / a) * b;
    answer += solution(a, b, ((n / a) * b) + (n % a));
    return answer;
}