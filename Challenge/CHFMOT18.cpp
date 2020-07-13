#include <bits/stdc++.h>
using namespace std;

int main ()
{

    long long t,n,s,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>s>>n;
        if(s==1)
            cout<<"1\n";
        else if(s<=n && s%2==0)
            cout<<"1\n";
        else if(s<=n && s%2!=0)
            cout<<"2\n";
        else
        {
            sum+=s/n;
            s=s%n;
            if(s!=0 && s%2!=0 && s!=1)
            {
                sum++;
            }
            if(s!=0)
                sum++;
            cout<<sum<<"\n";
        }
    }

return 0;

}

