#include <string>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s,x,t;
    int i,j,k,n,d;
    int check[200] = { 0 };
    getline(cin,x);
    for(i=0;i<x.length();i++)
        check[(int)x[i]]=1;
    getline(cin,t);
    cin>>n;
    cin.ignore();
    for(k=0;k<n;k++)
    {
        getline(cin,s);
        d=1;
        int len = s.length()-t.length();
        j=0;
        if(len < -1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<t.length();i++)
        {
            if(t[i]!='*' && t[i]!='?' && t[i]!=s[j])
            {
                 d=0;
                 break;
            }
            else if(t[i]=='?')
            {
                if(!check[(int)s[j]])
                {
                     d=0;
                     break;
                }
                else j++;
            }
            else if(t[i]=='*')
            {
                if(len==-1)
                    continue;
                else if(i==t.length()-1)
                {
                    while(j<s.length())
                    {
                        if(check[(int)s[j]]==1)
                        {
                            d=0;
                            break;
                        }
                        j++;
                    }
                }
                else
                {
                    len+=j;
                    while(j<=len)
                    {
                        if(check[(int)s[j]]==1)
                        {
                            d=0;
                            break;
                        }
                        j++;
                    }
                }
            }
            else j++;
        }
        if(j<s.length())d=0;
        if(d==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
