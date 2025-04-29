#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> key_count('Z' - 'A' + 1, -1);
    for(char c = 'A'; c <= 'Z'; c++)
    {
        int count_min = 101;
        for(string key : keymap)
        {
            for(int i = 0; i < key.length(); i++)
            {
                if(c == key[i])
                {
                    count_min = min(count_min, i + 1);
                }
            }
        }
        
        if(count_min < 101)
        {
            key_count[c - 'A'] = count_min;
        }
    }
    
    for(string target : targets)
    {
        int count = 0;
        for(char c : target)
        {
            if(key_count[c - 'A'] == -1)
            {
                count = -1;
                break;
            }
            count += key_count[c - 'A'];
        }
        answer.push_back(count);
    }
    return answer;
}