#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char current = s[0];
    int cur_num = 0;
    int diff_num = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(cur_num == 0)
        {
            current = s[i];
            cur_num++;
            continue;
        }
        
        if(s[i] == current)
        {
            cur_num++;
        }
        else
        {
            diff_num++;
        }
        
        if(cur_num == diff_num)
        {
            cur_num = 0;
            diff_num = 0;
            answer++;
        }
    }
    
    if(cur_num > 0)
    {
        answer++;
    }
    
    return answer;
}