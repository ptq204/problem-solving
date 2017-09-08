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

// sort time of sub task in increasing order because the points depends only on the number of solved subtasks
// the range is small so we can apply brute force and pick the maximum case

int main()
{
    int n,k,m,i,j,t=0,ans,d,b,maxx=0;
    int a[50];
    cin>>n>>k>>m;
    for(i=0;i<k;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    sort(a,a+k);
    for(i=0;i<=n;i++)
    {
        d=m-i*t;
        if(d<0)break;
        else
        {
            ans=0;
            if(i!=0)
                ans=(k+1)*i;
            for(j=0;j<k;j++)
            {
                if(d<a[j])break;
                b=0;
                while(b<n-i&&d>=a[j])
                {
                    d-=a[j];
                    ans++;
                    b++;
                }
            }
            maxx=max(ans,maxx);
        }
    }
    cout<<maxx<<endl;
    return 0;
}
