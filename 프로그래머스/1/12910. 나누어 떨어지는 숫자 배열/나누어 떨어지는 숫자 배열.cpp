#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int num : arr)
    {
        if(num % divisor == 0)
        {
            answer.push_back(num);
        }
    }
    if(answer.size() == 0)
    {
        answer.push_back(-1);
        return answer;
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}