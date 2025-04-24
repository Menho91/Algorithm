#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    sort(X.begin(), X.end(), greater<int>());
    sort(Y.begin(), Y.end(), greater<int>());
    
    int i = 0, j = 0;
    while(i < X.length() && j < Y.length())
    {
        if(X[i] == Y[j])
        {
            answer += X[i];
            i++;
            j++;
        }
        if(X[i] > Y[j])
        {
            i++;
        }
        if(X[i] < Y[j])
        {
            j++;
        }
    }
    
    if(answer == "")
    {
        return "-1";
    }
    
    for(char c : answer)
    {
        if(c != '0')
        {
            return answer;
        }
    }
    return "0";
}