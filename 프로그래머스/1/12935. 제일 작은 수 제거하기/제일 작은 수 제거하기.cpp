#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = arr[0];
    if(arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    for(int i = 1; i < arr.size(); i++)
    {
        if(n > arr[i])
        {
            n = arr[i];
        }
    }
    for(int num : arr)
    {
        if(num > n)
        {
            answer.push_back(num);
        }
    }
    return answer;
}