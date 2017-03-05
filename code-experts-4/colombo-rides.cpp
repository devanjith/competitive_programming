#include <iostream>
#include <string.h>
using namespace std;

#define MAX 10000
#define HIGH (1<<30)

int n,e,
    u,v,w,
    source, target,
    grid[MAX][MAX],
    dist[MAX];
bool visited[MAX];

int shortest(){
    memset(dist, 127, sizeof(dist));
    memset(visited, false, sizeof(visited));
    int cur = source, max_dist;
    dist[cur] = 0;
    while(cur != target){
        visited[cur] = true;
        max_dist = HIGH;
        for(int i=0;i<n;i++){
            if(!visited[i] &&
                grid[cur][i] &&
                dist[i] > dist[cur]+grid[cur][i]){
                dist[i] = dist[cur]+grid[cur][i];
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i] &&
                dist[i] < max_dist){
                max_dist = dist[i];
                cur = i;
            }
        }
    }
    return dist[target];
}

int main(){
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> u >> v >> w;
        grid[u][v] = w;
    }
    cin >> source >> target;
    cout << shortest() << endl;
    return 0;
}
