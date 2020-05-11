#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    string m;
    char s[26],a;
    cin>>t;
    for(i=0;i<26;i++)
        cin>>s[i];

    while(t--)
    {
        cin>>m;
        for(i=0;m[i]!='\0';i++)
        {
            if(m[i]=='_')
                cout<<" ";
            else if(m[i]>='A' && m[i]<='Z')
                cout<<char(toupper(s[tolower(m[i])-'a']));
            else if(m[i]>='a' && m[i]<='z')
                cout<<(s[(m[i])-'a']);
            else
                cout<<m[i];
        }
        cout<<"\n";
    }
return 0;

}

