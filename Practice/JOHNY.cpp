#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,a,k,val;
    vector<int> v;
    vector<int>::iterator it;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        cin>>k;
        it=v.begin()+k-1;
        val=*it;
        sort(v.begin(),v.end());
        it=find(v.begin(),v.end(),val);
        cout<<it-v.begin()+1<<"\n";
    }
    return 0;
}
