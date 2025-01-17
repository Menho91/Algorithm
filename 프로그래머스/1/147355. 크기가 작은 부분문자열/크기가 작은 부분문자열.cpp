#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int sizep = p.size();
    int sizet = t.size();
    long num = stol(p);
    for(int i = 0; i < sizet - sizep + 1; i++)
    {
        if(stol(t.substr(i, sizep)) <= num)
        {
            answer++;
        }
    }
    return answer;
}