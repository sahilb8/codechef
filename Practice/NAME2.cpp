#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,c,k;
    string m,w;
    cin>>t;
    while(t--)
    {
        cin>>m;
        cin>>w;
        j=0;
        c=0;
        for(i=0;i<w.length();i++)
        {
            if(w[i]==m[j])
            {
                j++;
                c++;
            }
        }
        j=0;
        k=0;
        for(i=0;i<m.length();i++)
        {
            if(m[i]==w[j])
            {
                j++;
                k++;
            }
        }
        if(c==m.length()||k==w.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
return 0;
}

