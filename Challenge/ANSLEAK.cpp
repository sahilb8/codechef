#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,i,j,k,maxc,currc,val;
    int ans[10]={0};
    cin>>t;
    while(t--)
    {

        cin>>n>>m>>k;
        int v[n][k];
        for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++){
            cin>>v[i][j];
        }
    }

    for(int i=0; i<n; i++){
	        sort(v[i], v[i]+k);
	        maxc=1;
	        val=v[i][0];
	        for(j=1;j<k;j++) {
                currc=1;
                if (v[i][j]==v[i][j-1])
                    currc++;
                else {
                    if (currc>maxc) {
                        maxc=currc;
                        val=v[i][j-1];
                    }
                }
            }
            if (currc>maxc){
                maxc=currc;
                val=v[i][k-1];
            }
            cout <<val<< " ";
	    }
	    cout<<endl;
    }

return 0;
}
