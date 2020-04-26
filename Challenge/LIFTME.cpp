#include <iostream>

using namespace std;

int main()
{
        long long t,n,q,f,d,sum,s;
        cin>>t;
        while(t--)
        {
            sum=0;
            s=0;
            cin>>n>>q;
            cin>>f>>d;
            sum=f+abs(d-f);
            q--;
            s=d;
            while(q--)
            {
                cin>>f;
                cin>>d;
                sum+=abs(f-s)+abs(d-f);
                s=d;
            }
            cout<<sum<<"\n";
        }

    return 0;
}
