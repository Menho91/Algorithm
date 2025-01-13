#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for(char c : s)
    {
        if(index % 2 == 0 && c != ' ')
        {
            answer += toupper(c);
            index++;
        }
        else if(index % 2 == 1 && c != ' ')
        {
            answer += tolower(c);
            index++;
        }
        else
        {
            index = 0;
            answer += c;
        }
    }
    return answer;
}