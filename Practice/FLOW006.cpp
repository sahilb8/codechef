#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a;
    int n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n!=0)
        {
         a=n%10;
         sum=sum+a;
         n=n/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
