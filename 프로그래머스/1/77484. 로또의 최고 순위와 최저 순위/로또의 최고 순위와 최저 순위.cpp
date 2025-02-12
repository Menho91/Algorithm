#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zero_count = 0;
    for(int num : lottos)
    {
        if(num == 0)
        {
            zero_count++;
            continue;
        }
        if(find(win_nums.begin(), win_nums.end(), num) != win_nums.end())
        {
            count++;
        }
    }
    if(count + zero_count < 2)
    {
        answer.push_back(6);
    }
    else
    {
        answer.push_back(7 - count - zero_count);
    }
    if(count < 2)
    {
        answer.push_back(6);
    }
    else
    {
        answer.push_back(7 - count);
    }
    return answer;
}