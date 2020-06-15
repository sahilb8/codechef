#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,n,a,c,d;
    cin>>t;
    while(t--)
    {
        c=0;
        int coins[16]={0};
        cin>>n;
        while(n--)
        {
            cin>>a;
            coins[a]++;
            if(a==10)
            {
                if(coins[5]==0)
                    c++;
                else
                    coins[5]--;
            }
            else if(a==15)
            {
                if(coins[10]==0 && coins[5]<2)
                    c++;
                else if(coins[10]>0)
                    coins[10]--;
                else
                    coins[5]-=2;
            }
        }
        if(c==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;

}

