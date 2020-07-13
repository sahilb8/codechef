#include <bits/stdc++.h>
using namespace std;

int main ()
{

    int t,n,i,a[100000];
    string yes="YES",no="NO";
    vector<int> v1,v2;
    vector<int>::iterator it,pt;
    unordered_map<int,int> c;
    cin>>t;
    while(t)
    {
        c.clear();
//        int c[200001]={0};
        v1.clear();
        v2.clear();
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
        {
            c[a[i]]++;

            if(c[a[i]]==1)
                v1.push_back(a[i]);
            else if(c[a[i]]==2)
                v2.push_back(a[i]);
            else
            {
                cout<<no<<"\n";
                goto hello;
            }
        }


    sort(v2.begin(), v2.end(), greater<int>());
    sort(v1.begin(), v1.end());

    it=v1.end()-1;

    pt=v2.begin();
        if(v2.size() && *it==*pt)
        {
            cout<<no<<"\n";
            goto hello;
        }
        cout<<yes<<"\n";

        for (auto pt : v1)
            cout<<pt<<" ";

        for (auto pt : v2)
            cout<<pt<<" ";
        cout<<"\n";

    hello:
        t--;
    }

return 0;

}

