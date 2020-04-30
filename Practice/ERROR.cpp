#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,i,n;
    string s;
    string p="010",r="101";
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        for(i=0;i<n-2;i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0' && s[i+2]=='1')
                {
                    cout<<"Good\n";
                    goto election;
                }
            }
            else
            {
                if(s[i+1]=='1' && s[i+2]=='0')
                {
                    cout<<"Good\n";
                    goto election;
                }
            }
        }
        cout<<"Bad\n";
    election:
        NULL;
    }
    return 0;
}
