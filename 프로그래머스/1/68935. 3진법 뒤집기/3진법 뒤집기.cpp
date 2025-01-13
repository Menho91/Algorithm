#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    while(n > 0)
    {
        arr.push_back(n % 3);
        n /= 3;
    }
    for(int m = arr.size() - 1; m >= 0; m--)
    {
        answer += arr[m] * pow(3, arr.size() - m - 1);
    }
    return answer;
}