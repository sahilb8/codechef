#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,n,a[8],i,j,minv,maxv,c,k;
    cin>>t;
    while(t--)
    {
        minv=99;
        maxv=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];

        if(n==1)
            cout<<"1 1\n";
        else if(n==2)
        {
            if(abs(a[0]-a[1])>2)
                cout<<"1 1\n";
            else
                cout<<"2 2\n";
        }
        else
        {
            for(i=0;i<n;i++)
            {
                j=i;
                c=1;
                k=i;
                while(abs(a[j]-a[j+1])<=2 && j<n-1)
                {
                    c++;
                    j++;
                }
                while(abs(a[k]-a[k-1])<=2 && k>0)
                {
                    c++;
                    k--;
                }
                if(c==n+1)
                    cout<<n<<" "<<n<<"\n";
                else
                {
                if(c<minv)
                    minv=c;
                if(c>maxv)
                    maxv=c;
                }

            }
            cout<<minv<<" "<<maxv<<"\n";
        }

    }

return 0;
}

