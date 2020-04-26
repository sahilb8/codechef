#include <iostream>

using namespace std;

int main()
{
    int t,n,sum,a;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        a=n%10;
        sum+=a;
        while(n>=10)
            n=n/10;
        sum+=n;

        cout<<sum<<"\n";
    }
    return 0;
}
