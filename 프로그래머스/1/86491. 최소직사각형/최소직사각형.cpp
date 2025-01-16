#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    for(vector<int> nums : sizes)
    {
        if(max1 < (nums[0] > nums[1] ? nums[0] : nums[1]))
        {
            max1 = nums[0] > nums[1] ? nums[0] : nums[1];
        }
        if(max2 < (nums[0] > nums[1] ? nums[1] : nums[0]))
        {
            max2 = nums[0] > nums[1] ? nums[1] : nums[0];
        }
    }
    answer = max1 * max2;
    return answer;
}