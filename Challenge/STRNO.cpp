#include <bits/stdc++.h>
using namespace std;

bool DoesAExist(int x, int k)
{
    int f;
    if (k == 1) return 1 < x;

    for (f = 2; f*f <= x; ++f)
        while (x % f == 0)
        {
            x /= f;
            if (--k <= 1) return 1 < x;
        }

    return 0;
}
int main()
{
    int t,x,k,n;
    vector<int> v;
    vector<int>::iterator it;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(DoesAExist(x,k))
            cout<<"1\n";
        else
            cout<<"0\n";
    }
    return 0;
}
