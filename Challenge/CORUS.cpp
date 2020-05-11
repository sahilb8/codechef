#include<bits/stdc++.h>
#include<string>
using namespace std;

void copya(long long *a, long long *b, int b_size) {
     if(b_size == 0) return;
     *a = *b;
     copya(++a, ++b, b_size-1);
}

int main()
{
    long long t,n,q,i,c,p,sec[26];
    string s;
    cin>>t;
    while(t--)
    {
        long long alpha[26]={0};
        cin>>n>>q;
        cin>>s;
        for(i=0;i<n;i++)
            alpha[int(s[i]-'a')]++;

        while(q--)
        {
            p=0;
            copya(sec,alpha,26);
            cin>>c;
            for(i=0;i<26;i++)
                sec[i]-=c;

            for(i=0;i<26;i++)
                if(sec[i]>0)
                    p+=sec[i];

            cout<<p<<"\n";
        }
    }

return 0;
}

