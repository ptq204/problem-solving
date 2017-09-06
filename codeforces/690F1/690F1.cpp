#include <iostream>
#include <vector>
using namespace std;

vector<int> g[10000];
int t=0;

void dfs(int i, vector<int> check, int d)
{
    check[i]=1;
    if(d==2)
    {
        t++;
        return;
    }
    for(int j : g[i])
        if(!check[j])
            dfs(j,check,d+1);
}

int main()
{
    int n,i,j,k,a,b;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        vector<int> check(n+1);
        check.resize(n+1,0);
        dfs(i,check,0);
    }
    cout << t/2 << endl;
    return 0;
}
