#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    vector<int> z;
    vector<int>::iterator it,pt;
    int t,n,c,a,i,l;
    cin>>t;
    while(t--)
    {
        v.clear();
        z.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        c=0;
        for(it=v.begin();it!=v.end();it++)
        {
            if(*it==1)
                z.push_back(c);
            c++;
        }
        c=0;
    for(pt=z.begin();pt!=z.end();pt++)
            if(*pt==1)
                l++;
    if(l==1)
    {
        cout<<"YES\n";
        return 0;
    }
    for(it=z.begin();it!=z.end()-1;it++)
    {
        c=0;
        c=*(it+1)-*it;
        if(c<=5)
        {
            cout<<"NO\n";
            break;
        }

    }
    if(c==0)
        cout<<"YES\n";
    else if(c>5)
        cout<<"YES\n";
    }
    return 0;
}
