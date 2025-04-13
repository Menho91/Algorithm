#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};

int solution(vector<vector<int> > maps)
{
    int rows = maps.size();
    int cols = maps[0].size();
    
    vector<vector<int>> distance(rows, vector<int>(cols, -1));
    
    if(maps[rows - 1][cols - 1] == 0)
    {
        return -1;
    }
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    distance[0][0] = 1;
    
    while(!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        if(row == rows - 1 && col == cols - 1)
        {
            return distance[row][col];
        }
        
        for(int i = 0; i < 4; i++)
        {
            int newrow = row + dx[i];
            int newcol = col + dy[i];
            
            if(maps[newrow][newcol] == 1 && newrow >= 0 && newcol >= 0 && newrow < rows && newcol < cols && distance[newrow][newcol] == -1)
            {
                q.push({row + dx[i], col + dy[i]});
                
                distance[newrow][newcol] = distance[row][col] + 1;
            }
        }
    }
    
    return -1;
}