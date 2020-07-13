#include <bits/stdc++.h>
using namespace std;

int main ()
{

    long long t,n,s[1000000],i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];
        sum=0;
        for(i=0;i<n-1;i++)
        {
            sum+=abs(s[i]-s[i+1])-1;
        }
        cout<<sum<<"\n";
    }
return 0;

}

