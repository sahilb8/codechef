#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    vector<int> z;
    vector<int>::iterator it;
    int a,i,n1,n2,n3,c;
    cin>>n1>>n2>>n3;
    for(i=0;i<(n1+n2+n3);i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(it=v.begin();it!=v.end();it++)
    {
        c=1;
        while(*it==*(it+1))
        {
            c++;
            it++;
        }
            
        if(c>1)
            z.push_back(*it);
    }
    cout<<z.size()<<"\n";

    for(it=z.begin();it!=z.end();it++)
        cout<<*it<<"\n";


return 0;
}

