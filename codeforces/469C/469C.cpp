#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    if(n<4)cout <<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        if(n%2==0)
        {
            cout <<"1 * 2 = 2"<<endl;
            cout <<"3 * 4 = 12"<<endl;
            cout <<"12 * 2 = 24"<<endl;
            for(i=6;i<=n;i+=2)
            {
                cout <<i<<" - "<<i-1<<" = "<<1<<endl;
                cout << "24 * 1 = 24" << endl;
            }
        }
        else
        {
            cout<<"5 * 4 = 20"<<endl;
            cout<<"20 + 3 = 23"<<endl;
            cout<<"2 - 1 = 1"<<endl;
            cout<<"23 + 1 = 24"<<endl;
            for(i=7;i<=n;i+=2)
            {
                cout<<i<<" - "<<i-1<<" = "<<1<<endl;
                cout<<"24 * 1 = 24"<<endl;
            }
        }
    }
    return 0;
}
