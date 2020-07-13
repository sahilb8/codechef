#include <bits/stdc++.h>
using namespace std;

int main ()
{

    long long t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        sum=n+n;
        sum+=(n*(n-1))/2;
        cout<<sum<<"\n";
    }

return 0;

}

