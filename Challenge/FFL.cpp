#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,s,r,budget,i,min_d,min_f;
    int price[101],type[101];
    cin>>t;
    while(t--)
    {
      cin>>n>>s;
      budget=100-s;
      min_d=999;
      min_f=999;
      for(i=0;i<n;i++)
            cin>>price[i];

    for(i=0;i<n;i++)
        cin>>type[i];

    for(i=0;i<n;i++)
    {
        if(type[i]==1)
        {
            if(price[i]<min_d)
                min_d=price[i];
        }
        if(type[i]==0)
        {
            if(price[i]<min_f)
                min_f=price[i];
        }
    }
    if(min_d+min_f<=budget)
        cout<<"yes\n";
    else
        cout<<"no\n";

    }

return 0;
}
