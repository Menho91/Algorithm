#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 0; i < nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                int number = nums[i] + nums[j] + nums[k];
                bool isprime = true;
                for(int m = 2; m*m <= number; m++)
                {
                    if(number % m == 0)
                    {
                        isprime = false;
                        break;
                    }
                }
                if(isprime)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}