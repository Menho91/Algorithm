#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] == '+') {
            continue;
        }
        else if(s[i] == '-') {
            answer *= -1;
        }
        else {
            answer += (s[i] - '0') * pow(10, s.length() - i - 1);
        }
    }
    return answer;
}