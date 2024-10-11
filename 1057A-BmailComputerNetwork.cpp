//code by Vivek Reddy
#include <bits/stdc++.h>
using namespace std;
const int maxn = (int)2e5+5;
vector < int > graph[maxn];
int n;
bool visited[maxn];
vector < int > store;
void dfs(int u)
{
    visited[u]=1;
    store.push_back(u);
    for(int i=0 ; i<graph[u].size() ; i++){
        if(!visited[i]){
            dfs(graph[u][i]);
        }
    }
}
int main()
{
    cin>>n;

    for(int i=2 ; i<=n ; i++)
    {
        int x;
        cin>>x;
        graph[i].push_back(x);
    }

    dfs(n);

    for(int i=store.size()-1 ; i>=0 ; i--)
        cout<<store[i]<<" ";

    return 0;
}
