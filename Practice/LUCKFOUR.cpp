#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,t,c;
    cin>>t;
    while(t--)
    {
    c=0;
    cin>>n;
    while(n)
    {
        a=n%10;
        n=n/10;
        if(a==4)
            c++;
    }
    cout<<c<<"\n";
    }

    return 0;
}
