#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,n,i,mindiff;
    vector<int> v;
    vector<int>::iterator it,pt;
    cin>>t;
    while(t--)
    {
        v.clear();
        mindiff=1000000000;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(it=v.begin();it!=v.end()-1;it++)
        {
            for(pt=it+1;pt!=v.end();pt++)
            {
                a=abs(*it-*pt);
                if(a<mindiff)
                    mindiff=a;
            }
        }
        cout<<mindiff<<"\n";
    }
    return 0;
}
