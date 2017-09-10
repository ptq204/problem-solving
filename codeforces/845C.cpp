#include <iostream>
#include <algorithm>

using namespace std;

// Polycarp cant watch all show when one show has end time overlaps start time of two or more others show.
// we sort both start and end time, go through the earliest end time first.

int main()
{
    int n,i,j=0;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n-2;i++)
    {
        if(b[i]>=a[i+2])     // means b[i] also >= a[i+1], thus overlaps two start time
        {
            cout<<"NO"<<endl;j=1;
            break;
        }
    }
    if(j==0)cout<<"YES"<<endl;
    delete[]a;
    delete[]b;
    return 0;
}
