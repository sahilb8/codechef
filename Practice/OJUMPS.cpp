#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,n;
    cin>>a;
    n=a%6;
    if(n==0)
        cout<<"yes";
    else if(n-1==0)
        cout<<"yes";
    else if(n-3==0)
        cout<<"yes";
    else
        cout<<"no";
return 0;
}

