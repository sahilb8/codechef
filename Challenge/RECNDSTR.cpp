#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s,l,r,z;
    char a;
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        z=s;

        a=z[n-1];
        for(i=n-1;i>0;i--)
            z[i]=z[i-1];
        z[0]=a;


        a=s[0];
        for(i=0;i<n-1;i++)
            s[i]=s[i+1];
        s[n-1]=a;


        if(z==s)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
