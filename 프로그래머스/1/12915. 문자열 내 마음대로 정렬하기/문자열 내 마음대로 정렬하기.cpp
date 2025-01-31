#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> QuickSort(vector<string> strings, int n)
{
    if(strings.size() == 0)
    {
        return strings;
    }
    if(strings.size() == 1)
    {
        return strings;
    }
    vector<string> left;
    vector<string> right;
    vector<string> answer;
    char pivot = strings[strings.size() / 2][n];
    for(string s : strings)
    {
        if(s[n] < pivot)
        {
            left.push_back(s);
        }
        else if(s[n] > pivot)
        {
            right.push_back(s);
        }
        else
        {
            answer.push_back(s);
        }
    }
    sort(answer.begin(), answer.end());
    left = QuickSort(left, n);
    right = QuickSort(right, n);
    for(string s : answer)
    {
        left.push_back(s);
    }
    for(string s : right)
    {
        left.push_back(s);
    }
    return left;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    answer = QuickSort(strings, n);
    return answer;
}