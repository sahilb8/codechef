#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v;
    vector<long long>::iterator it;
    long long sum=0;
    long long n,a,z;

    cin>>n;
    z=n;
    while(z--)
    {
        cin>>a;
        v.push_back(a);
    }
    for(it=v.begin();it!=v.end();it++)
        sum+=*it;

    if(sum==(n*(n+1)/2))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
