#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sound = {"aya", "ye", "woo", "ma"};
    
    for(string babb : babbling)
    {
        string buffer = "";
        string last_word = "";
        
        while(!babb.empty())
        {
            buffer += string(1, babb[0]);
            babb = babb.substr(1, babb.length() - 1);
            
            if(buffer.length() == 2)
            {
                auto it = find(sound.begin(), sound.end(), buffer);
                if(it != sound.end())
                {
                    if(*it == last_word)
                    {
                        break;
                    }
                    else
                    {
                        last_word = *it;
                        buffer.clear();
                    }
                }
            }
            else if(buffer.length() == 3)
            {
                auto it = find(sound.begin(), sound.end(), buffer);
                if(it != sound.end())
                {
                    if(*it == last_word)
                    {
                        break;
                    }
                    else
                    {
                        last_word = *it;
                        buffer.clear();
                    }
                }
            }
            else if(buffer.length() > 3)
            {
                break;
            }
        }
        
        if(buffer.empty())
        {
            answer++;
        }
        buffer.clear();
    }
    
    return answer;
}