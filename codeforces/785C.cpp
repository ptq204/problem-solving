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

// feeling happy because of fastest solution :D

int main()
{
    long long n,m,i;
    cin>>n>>m;
    if(n<m) cout<<n<<endl;
    else{
        i=sqrt(2*(n-m));
        if(i*(i+1)/2+m>=n)i+=m;
        else i+=m+1;
        cout<<i<<endl;
    }
    return 0;
}
