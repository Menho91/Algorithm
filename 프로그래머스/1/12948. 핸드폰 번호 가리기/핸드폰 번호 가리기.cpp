#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(auto it = phone_number.begin(); it != phone_number.end() - 4; it++)
    {
        answer += "*";
    }
    answer += phone_number.substr(phone_number.size() - 4, 4);
    return answer;
}