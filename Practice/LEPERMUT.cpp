#include<iostream>
using namespace std;

int main()
{
    int t,n,arr[100],i,j,local,global;
    cin>>t;
    while(t--)
    {
        global=0;
        local=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                    global++;
            }
            if(arr[i]>arr[i+1])
                local++;
        }

        if(global==local)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
