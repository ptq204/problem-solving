#include <iostream>
using namespace std;

int main()
{
    int a[101],b[101],c[101],n,p,q,i,j;
    cin >> n;
    cin >> p;
    for(i=1;i<=n;i++)
        c[i]=0;
    for(i=1;i<=p;i++)
    {
        cin>>a[i];
        c[a[i]]=1;
    }
    cin >> q;
    for(i=1;i<=q;i++)
    {
        cin>>b[i];
        c[b[i]] = 1;
    }
    for(i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
             cout << "Oh, my keyboard!" << endl;
             return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
