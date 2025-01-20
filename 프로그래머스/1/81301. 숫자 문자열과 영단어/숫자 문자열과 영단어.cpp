#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    int tenpow = 0;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            answer += (s[i] - '0') * pow(10, tenpow++);
        }
        else
        {
            if(s[i] == 'r')
            {
                answer += 4 * pow(10, tenpow++);
                i -= 3;
            }
            else if(s[i] == 'x')
            {
                answer += 6 * pow(10, tenpow++);
                i -= 2;
            }
            else if(s[i] == 'n')
            {
                answer += 7 * pow(10, tenpow++);
                i -= 4;
            }
            else if(s[i] == 't')
            {
                answer += 8 * pow(10, tenpow++);
                i -= 4;
            }
            else if(s[i] == 'o')
            {
                i--;
                if(s[i] == 'r')
                {
                    tenpow++;
                    i -= 2;
                }
                else
                {
                    answer += 2 * pow(10, tenpow++);
                    i -= 1;
                }
            }
            else
            {
                i--;
                if(s[i] == 'e')
                {
                    answer += 3 * pow(10, tenpow++);
                    i -= 3;
                }
                else if(s[i] == 'v')
                {
                    answer += 5 * pow(10, tenpow++);
                    i -= 2;
                }
                else
                {
                    i--;
                    if(s[i] == 'o')
                    {
                        answer += 1 * pow(10, tenpow++);
                    }
                    else
                    {
                        answer += 9 * pow(10, tenpow++);
                        i -= 1;
                    }
                }
            }
        }
    }
    return answer;
}