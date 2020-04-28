#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    long long c,t,n,i;
    
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                c++;
        }
        if(c==n)
            cout<<n*(n+1)/2<<"\n";
        else
        {
            cout<<c*(c+1)/2<<"\n";
        }

    }
    return 0;
}
