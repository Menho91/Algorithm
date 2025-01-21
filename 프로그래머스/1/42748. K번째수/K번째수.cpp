#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int manipul(vector<int> array, vector<int> command)
{
    vector<int> answer;
    for(int i = command[0] - 1; i < command[1]; i++)
    {
        answer.push_back(array[i]);
    }
    sort(answer.begin(), answer.end());
    return answer[command[2] - 1];
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> command : commands)
    {
        answer.push_back(manipul(array, command));
    }
    return answer;
}