#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int idx1 = 0;
    int idx2 = 0;
    int idx3 = 0;
    while(true)
    {
        if(cards1[idx1] == goal[idx3])
        {
            idx1++;
            idx3++;
            continue;
        }
        if(cards2[idx2] == goal[idx3])
        {
            idx2++;
            idx3++;
            continue;
        }
        if(idx3 == goal.size())
        {
            answer = "Yes";
            break;
        }
        answer = "No";
        break;
    }
    return answer;
}