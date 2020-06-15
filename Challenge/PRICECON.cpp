#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,n,i,a,k;
    long sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>a;
            if(a>k)
                sum+=(a-k);
        }
        cout<<sum<<"\n";
    }
    return 0;

}

