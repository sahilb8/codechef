#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,a,mine;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mine=n-1;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                a=abs(i-(n/i));
                a<mine?mine=a:NULL;
            }
        }
        cout<<mine<<"\n";
    }
return 0;
}

