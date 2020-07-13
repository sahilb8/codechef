#include <bits/stdc++.h>
using namespace std;

int main ()
{

    long long t,n,a,b,suma,sumb,chef,morty,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        chef=0;
        morty=0;
        while(n--)
        {
            cin>>a>>b;
            suma=0;
            sumb=0;
            while(a)
            {
                z=a%10;
                suma+=z;
                a=a/10;
            }
            while(b)
            {
                z=b%10;
                sumb+=z;
                b=b/10;
            }
            if(suma>sumb)
                chef++;
            else if(sumb>suma)
                morty++;
            else
            {
                chef++;
                morty++;
            }
        }
        if(chef>morty)
            cout<<"0 "<<chef<<"\n";
        else if(morty>chef)
            cout<<"1 "<<morty<<"\n";
        else
            cout<<"2 "<<morty<<"\n";
    }
return 0;
}

