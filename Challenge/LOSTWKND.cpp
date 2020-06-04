#include<bits/stdc++.h>
using namespace std;

int arr[5];

int main()
{
    int t,p,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        for(i=0;i<5;i++)
            cin>>arr[i];
        cin>>p;
        for(i=0;i<5;i++)
        {
            arr[i]=arr[i]*p;
            sum+=arr[i];
        }
        if(sum<=120)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
return 0;
}
