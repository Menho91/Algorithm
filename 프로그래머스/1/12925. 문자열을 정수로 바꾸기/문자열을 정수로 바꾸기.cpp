#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    // for(int i = 0; i < s.length(); i++)
    // {
    //     if(s.back() == '+') {
    //         continue;
    //     }
    //     else if(s.back() == '-') {
    //         answer *= -1;
    //     }
    //     else {
    //         answer += s.back() * pow(10, i);
    //     }
    //     s.pop_back();
    // }
    answer = stoi(s);
    return answer;
}