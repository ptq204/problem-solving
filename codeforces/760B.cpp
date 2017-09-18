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

// simple problem but i thought too much at the beginning

int main()
{
	int n,m,j,k,ans=1,d=1;
	cin>>n>>m>>k;
	/*j=(int)((m + (n-k)*(n-k+1)/2 + (k-1)*k/2)/n);
	cout<<j<<endl;*/
	m-=n;
	while(m>0)
    {
        if(ans<k)d++;
        if(ans<=n-k)d++;
        ans++;
        m-=d;
    }
    cout<<ans<<endl;
    return 0;
}
