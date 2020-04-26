#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,a,c,max_ele;
    long int sum;
    int long M = pow(10,9)+7;
    vector<int> v;
    cin>>t;
    while(t--)
    {
        sum=0;
        v.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        c=0;
        while(v.size())
        {
            max_ele=v.back();
            a=max_ele-(c++);
            if(a>0)
                sum+=a;
            else
                break;
            v.erase(v.end()-1);
        }

    cout<<sum%M<<"\n";
    }

    return 0;
}
