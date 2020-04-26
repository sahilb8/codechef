#include<iostream>
using namespace std;

int main()
{
    int t,n,i,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=5;(n/i)>=1;i=i*5)
        {
            c+=n/i;
        }
        cout<<c<<"\n";
        c=0;
    }
    return 0;
}
