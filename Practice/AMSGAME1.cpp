#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,a[1000],i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        ans=__gcd(a[0],a[1]);
        for(i=2;i<n;i++)
        {
            ans=__gcd(ans,a[i]);
        }
        cout<<ans<<"\n";
    }

	return 0;
}

