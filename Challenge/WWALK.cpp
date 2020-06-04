#include<bits/stdc++.h>
using namespace std;

long long a[1000000],b[1000000];
int main()
{
    long long i,sum,da,db;
    long long t,n;
    cin>>t;
    while(t--)
    {
        sum=0;
        da=0;
        db=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(i=0;i<n;i++)
        {
            da+=a[i];
            db+=b[i];
            if(a[i]==b[i] && da==db)
                sum+=a[i];
        }
        cout<<sum<<"\n";
    }
return 0;
}
