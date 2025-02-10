#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    while(section.size())
    {
        int startnum = section[section.size() - 1];
        answer++;
        for(auto it = section.rbegin(); it != section.rend(); it++)
        {
            if(*it > startnum - m)
            {
                section.pop_back();
            }
            else
            {
                break;
            }
        }
    }
    
    return answer;
}