#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,diff,z;
    vector<int> v;
    cin>>a>>b;
    diff=a-b;
    z=diff;
    while(z)
    {
        v.push_back(z%10);
        z=z/10;
    }

    while(v.size()>1)
    {
        cout<<v.back();
        v.pop_back();
    }
    if(v.back()==9)
        cout<<"8";
    else
        cout<<v.back()+1;

    return 0;

}
