#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> burger;
    for(int ingred : ingredient)
    {
        burger.push_back(ingred);
        if(burger[burger.size() - 1] == 1 && burger[burger.size() - 2] == 3 && burger[burger.size() - 3] == 2 && burger[burger.size() - 4] == 1)
        {
            answer++;
            for(int i = 0; i < 4; i++)
            {
                burger.pop_back();
            }
        }
    }
    return answer;
}