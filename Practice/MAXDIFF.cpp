#include<iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long i,n,k,t,arr[101],father,son,sum;
    cin>>t;
    while(t--)
    {
        father=0;
        son=0;
        sum=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }


        sort(arr,arr+n);
        for(i=0;i<k;i++)
            son+=arr[i];

        for(i=n-1;i>n-1-k;i--)
            father+=arr[i];

        cout<<max(abs(sum-(2*father)),abs(sum-(2*son)))<<"\n";

    }
    return 0;
}
