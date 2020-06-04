#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,arr[10000],i;
    vector<int> sum,num;
    vector<int>::iterator it,pt;
    int c;
    cin>>t;
    while(t--)
    {
        num.clear();
        sum.clear();
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        i=0;
        while(i<n-1)
        {
            c=1;
            num.push_back(arr[i]);
            while(arr[i]==arr[i+1])
            {
                i++;
                c++;
            }
            sum.push_back(c);
            i++;
        }
        if(arr[n-1]==arr[n-2])
            NULL;
        else
        {
            num.push_back(arr[n-1]);
            sum.push_back(1);
        }
        sort(num.begin(),num.end());
        sort(sum.begin(),sum.end());
        c=0;
        it=num.begin();
        while(it!=num.end()-1)
        {
            if(*it==*(it+1))
            {
                cout<<"NO\n";
                goto hello;
            }
            it++;
        }
        it=sum.begin();
        while(it!=sum.end()-1)
        {
            if(*it==*(it+1))
            {
                cout<<"NO\n";
                goto hello;
            }
            it++;
        }
        cout<<"YES\n";
hello:
    NULL;
    }
return 0;
}
