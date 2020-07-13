#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,k,i,j;
    char chess[8][8];
    cin>>t;
    while(t--)
    {
        cin>>k;
        k--;
        for(i=0;i<8;i++)
            for(j=0;j<8;j++)
                chess[i][j]='.';

        chess[0][0]='O';
        for(i=1;i<8;i++)
            if(k)
            {
                k--;
            }
            else
                chess[0][i]='X';
        if(k==0)
        {
        for(i=0;i<8;i++)
            chess[1][i]='X';
        }
        else
        {
            for(i=1;i<8;i++)
            {
                for(j=0;j<8;j++)
                {
                    if(k)
                    {
                       k--;
                    }
                    else
                        chess[i][j]='X';
                }
            }
        }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            cout<<chess[i][j];
        cout<<"\n";
    }

    }
return 0;
}

