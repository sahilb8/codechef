#include<iostream>
using namespace std;

int main()
{
    int t,l,r,n,c,i;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {

            n=i%10;
            if(n==2||n==3||n==9)
                c++;
        }
        cout<<c<<"\n";
    }

    return 0;
}
