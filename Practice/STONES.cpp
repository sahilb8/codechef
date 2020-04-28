#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,c,i,j;
    string S,J;
    cin>>t;
    while(t--)
    {
	//jewels S and stones is J.
        cin>>S;
        cin>>J;
        c=0;
        int a[123]={0};

        for(i=0;S[i]!='\0';i++)
        {
            if(a[int(S[i])]==0)
            {
                for(j=0;J[j]!='\0';j++)
                {
                    if(S[i]==J[j])
                    {
                        c++;
                        a[int(S[i])]++;
                    }
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
