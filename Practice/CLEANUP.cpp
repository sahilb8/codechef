#include<iostream>
using namespace std;

int main()
{
    int t,n,m,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int arr[n]={0};

        while(m--)
        {
            cin>>a;
            arr[a-1]=1;
        }

        a=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(a%2==0)
                    cout<<i+1<<" ";
                a++;
            }

        }
        cout<<"\n";
        a=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(a%2==1)
                    cout<<i+1<<" ";
                a++;
            }

        }
        cout<<"\n";
    }

return 0;
}
