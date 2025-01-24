#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> day = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> dayname = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int tempday = 0;
    for(int i = 0; i < a - 1; i++)
    {
        tempday += day[i];
    }
    tempday += b;
    answer = dayname[tempday % 7];
    return answer;
}