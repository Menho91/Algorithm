#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> nums;
    nums.push_back(1);
    for(int i = 2; i <= number; i++)
    {
        int count = 0;
        for(int k = 1; k*k <= i; k++)
        {
            if(i % k == 0 && k*k != i)
            {
                count += 2;
            }
            else if(k*k == i)
            {
                count++;
            }
        }
        if(count > limit)
        {
            nums.push_back(power);
        }
        else
        {
            nums.push_back(count);
        }
    }
    answer = accumulate(nums.begin(), nums.end(), 0);
    return answer;
}