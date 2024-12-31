#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int numSum = 0;
    int originalNum = x;
    while(x > 0)
    {
        numSum += x % 10;
        x /= 10;
    }
    answer = (originalNum % numSum == 0) ? true : false;
    return answer;
}