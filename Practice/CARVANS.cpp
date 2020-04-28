#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[10000],i,c;
    cin>>t;
    while(t--)
    {
        c=1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];

        if(n==1)
            c=1;
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                    c++;
                else
                {
                    arr[i+1]=arr[i];
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
