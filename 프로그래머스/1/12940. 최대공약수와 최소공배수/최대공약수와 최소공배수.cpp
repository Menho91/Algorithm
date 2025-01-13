#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = n;
    int lcm = m;
    while(n % gcd != 0 || m % gcd != 0)
    {
        gcd--;
    }
    answer.push_back(gcd);
    while(lcm % n != 0 || lcm % m != 0)
    {
        lcm++;
    }
    answer.push_back(lcm);
    return answer;
}