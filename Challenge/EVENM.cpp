#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=1;
        int m[n][n];
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<n;j++)
                {
                    m[i][j]=a;
                    a++;
                }
            }
            else
            {
                for(j=n-1;j>=0;j--)
                {
                    m[i][j]=a;
                    a++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<m[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;

}

