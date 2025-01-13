#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = n;
    int lcd = m;
    while(n % gcd != 0 || m % gcd != 0)
    {
        gcd--;
    }
    answer.push_back(gcd);
    while(lcd % n != 0 || lcd % m != 0)
    {
        lcd++;
    }
    answer.push_back(lcd);
    return answer;
}