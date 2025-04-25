#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    if(lost.empty())
    {
        return n;
    }
    sort(lost.begin(), lost.end());
    
    for(auto iter = lost.begin(); iter != lost.end(); iter++)
    {
        auto it = find(reserve.begin(), reserve.end(), *iter);
        if(it != reserve.end())
        {
            *iter = -1;
            reserve.erase(it);
        }
    }
    
    int lost_num = 0;
    for(int num : lost)
    {
        if(num != -1)
        {
            lost_num++;
        }
    }
    
    for(int num : lost)
    {
        if(num == -1)
        {
            continue;
        }
        
        auto it = find(reserve.begin(), reserve.end(), num - 1);
        if(it != reserve.end())
        {
            lost_num--;
            reserve.erase(it);
            continue;
        }
        
        it = find(reserve.begin(), reserve.end(), num + 1);
        if(it != reserve.end())
        {
            lost_num--;
            reserve.erase(it);
        }
    }
    
    answer = n - lost_num;
    return answer;
}