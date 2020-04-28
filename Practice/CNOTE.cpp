#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,k,n,needPages,pages,cost,p;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k>>n;
        needPages=x-y;
        p=0;
        while(n--)
        {
            cin>>pages>>cost;
            if(pages>=needPages && cost<=k)
                p++;
        }
        if(p==0)
            cout<<"UnluckyChef\n";
        else
            cout<<"LuckyChef\n";

    }
    return 0;
}
