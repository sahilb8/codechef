#include<bits/stdc++.h>
using namespace std;

int arr[20];
bool t[21][20001];

bool subsetSum(int n,int m)
{
    int i,j;
    for(i=0;i<21;i++)
    {
        for(j=0;j<20001;j++)
        {
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    }
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<m+1;j++)
        {
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }
return t[n][m];
}

int main()
{
    int t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>arr[i];

        if(subsetSum(n,m)==true)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
return 0;
}

