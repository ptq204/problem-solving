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

int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}

int main()
{
    int a[100001],i,j,n,k;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    k=a[0];
    for(i=1;i<n;i++)
    {
        k=gcd(k,a[i]);
    }
    if(k>1)
    {
        cout<<"YES"<<endl;
        cout<<0<<endl;
    }
    else
    {
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2 && a[i+1]%2)
                j++,i++;
            else if(a[i]%2 && a[i+1]%2==0)
            {
                if(i!=n-1)
                    i++;
                j+=2;
            }
        }
        cout<<"YES"<<endl;
        cout<<j<<endl;
    }
    return 0;
}
