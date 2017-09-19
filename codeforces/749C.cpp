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

// interesting problem

using namespace std;

int main()
{
    int n,i,d=0,r=0;
    string s;
    cin>>n;cin.ignore();
    getline(cin,s);
    for(i=0;i<2*n;i++)
    {
        if(s[i]=='D')
        {
            d++,r--;
            if(d>0)
                s+='D';
        }
        else
        {
            r++,d--;
            if(r>0)
                s+='R';
        }

    }
    cout<<s[s.length()-1]<<endl;
	return 0;
}
