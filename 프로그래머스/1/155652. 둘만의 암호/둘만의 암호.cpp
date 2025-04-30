#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(char c : s)
    {
        for(int i = 0; i < index; i++)
        {
            c = (((c + 1) - 'a') % 26) + 'a';
            if(find(skip.begin(), skip.end(), c) != skip.end())
            {
                i--;
                continue;
            }
        }
        
        answer.append(1, c);
    }
    
    return answer;
}