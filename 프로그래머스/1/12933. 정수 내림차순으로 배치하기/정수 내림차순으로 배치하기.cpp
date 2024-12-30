#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v1, v2;
    
    while(n > 0)
    {
        v1.push_back(n % 10);
        n /= 10;
    }
    
    for(int i=0; i<v1.size(); i++)
    {
        for(int j = i; j<v1.size(); j++)
        {
            int temp = 0;
            if(v1[i] > v1[j])
            {
                temp = v1[i];
                v1[i] = v1[j];
                v1[j] = temp;
            }
        }
        v2.push_back(v1[i]);
    }
    
    for(int i=v2.size() - 1; i >= 0; i--)
    {
        answer += v2[i] * pow(10, i);
    }
    return answer;
}