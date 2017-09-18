#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct var{
    int a,b,h;
};

stack<int> s;

bool cmp(var x, var y)
{
    if(x.b==y.b)return x.a>y.a;
    return x.b>y.b;
}

int main()
{
    var arr[100000];
    bool check[100000]={false};
    int n,i,j,k,d;
    long long int t=0,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b>>arr[i].h;
    sort(arr,arr+n,cmp);
    for(i=0;i<n;i++)
    {
        while(!s.empty() && arr[s.top()].a>=arr[i].b)
        {
            t-=arr[s.top()].h;
            s.pop();
        }
        s.push(i);
        t+=arr[i].h;
        ans=max(ans,t);
    }
    cout<<ans<<endl;
    return 0;
}
