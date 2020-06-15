#include<bits/stdc++.h>
using namespace std;


int main()
{

    unsigned long long ts,t,c,p,pos,zeroCount;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>ts;
        if(ts%2!=0)
        {
            c=ts/2;
        }
        else
        {
            zeroCount=0;
            std::string binary = std::bitset<256>(ts).to_string();
            pos=binary.length()-1;
            while(binary[pos]=='0')
            {
                zeroCount++;
                pos--;
            }
            p=pow(2,zeroCount+1);
            c=ts/p;
        }
        cout<<c<<"\n";
    }
    return 0;

}

