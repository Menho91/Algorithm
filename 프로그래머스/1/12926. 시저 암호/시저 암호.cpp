#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c : s)
    {
        if(c == ' ')
        {
            answer += " ";
        }
        else if(c >= 'a' && c <= 'z')
        {
            if(c + n > 'z')
            {
                answer += c + n - 26;
            }
            else
            {
                answer += c + n;
            }
        }
        else
        {
            if(c + n > 'Z')
            {
                answer += c + n - 26;
            }
            else
            {
                answer += c + n;
            }
        }
    }
    return answer;
}