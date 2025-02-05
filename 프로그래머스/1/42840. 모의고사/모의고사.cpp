#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> supo = {
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 2, 4, 2, 5},
        {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
    };
    map<int, int> supo_answer;
    for(int i = 0; i < answers.size(); i++)
    {
        for(int j = 0; j < supo.size(); j++)
        {
            if(answers[i] == supo[j][i % supo[j].size()])
            {
              supo_answer[j + 1]++;
            }
        }
    }
    
    int max_answer = -1;
    for(auto num : supo_answer)
    {
        if(num.second > max_answer)
        {
            max_answer = num.second;
        }
    }
    for(auto num : supo_answer)
    {
        if(num.second == max_answer)
        {
            answer.push_back(num.first);
        }
    }
    return answer;
}