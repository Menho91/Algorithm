#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<int> score(4, 0);
    vector<string> personality = {"RT", "CF", "JM", "AN"};
    
    for(int i = 0; i < choices.size(); i++)
    {
        if(survey[i] == "RT" || survey[i] == "TR")
        {
            if(survey[i] == "RT")
            {
                score[0] += choices[i] - 4;
            }
            else
            {
                score[0] += 4 - choices[i];
            }
        }
        else if(survey[i] == "CF" || survey[i] == "FC")
        {
            if(survey[i] == "CF")
            {
                score[1] += choices[i] - 4;
            }
            else
            {
                score[1] += 4 - choices[i];
            }
        }
        else if(survey[i] == "JM" || survey[i] == "MJ")
        {
            if(survey[i] == "JM")
            {
                score[2] += choices[i] - 4;
            }
            else
            {
                score[2] += 4 - choices[i];
            }
        }
        else
        {
            if(survey[i] == "AN")
            {
                score[3] += choices[i] - 4;
            }
            else
            {
                score[3] += 4 - choices[i];
            }
        }
    }
    
    int order = 0;
    for(int num : score)
    {
        if(num <= 0)
        {
            answer.append(1, personality[order][0]);
        }
        else
        {
            answer.append(1, personality[order][1]);
        }
        order++;
    }
    return answer;
}