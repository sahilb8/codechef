#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    long c;
    string s;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>s;
        i=0;
        while(i<s.length()-1)
        {
            if(s[i]=='x' && s[i+1]=='y')
            {
                c++;
                i+=2;
            }
            else if(s[i]=='y' && s[i+1]=='x')
            {
                c++;
                i+=2;
            }
            else
                i++;
        }
        cout<<c<<"\n";
    }
    return 0;

}

