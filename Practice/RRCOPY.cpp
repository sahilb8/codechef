#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    vector<int> v;
    vector<int>::iterator it;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        it = std::unique(v.begin(), v.end());
        v.resize(std::distance(v.begin(), it));
        cout<<v.size()<<"\n";
    }
    return 0;
}
