#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string left = "";
    string right = "";
    if(s.size() <= 1)
    {
        return s;
    }
    char pivot = s[s.size() / 2];
    for(char c : s)
    {
        if (c > pivot)
        {
            left.push_back(c);
        }
        else if (c < pivot)
        {
            right.push_back(c);
        }
        else
        {
            answer.push_back(c);
        }
    }
    return solution(left) + answer + solution(right);
}