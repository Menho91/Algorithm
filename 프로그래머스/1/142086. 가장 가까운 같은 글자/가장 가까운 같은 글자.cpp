#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    answer.push_back(-1);
    for(int i = 1; i < s.length(); i++)
    {
        int index = -1;
        for(int j = 0; j < i; j++)
        {
            if(s[j] == s[i])
            {
                index = i - j;
            }
        }
        answer.push_back(index);
    }
    return answer;
}