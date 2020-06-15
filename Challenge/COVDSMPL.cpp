#include <bits/stdc++.h>
using namespace std;


int main() {
	int t,a,x;
	cin>>t;
	while(t--){
	    long long n,p,i,j;
	    cin>>n>>p;
        x=0;
	    vector<vector<int>> mat(61,vector<int>(61,0));
	    long long row1=1,row2=n,col1=1,col2=n;
	    for(i=row1;i<=row2;i++){
	        for(j=col1;j<=col2;j++){
	            cout<<"1"<<" "<<i<<" "<<j<<" "<<i<<" "<<j<<"\n";
	            cout.flush();
	            cin>>a;
        	    if(a==-1)
        	    {
        	        exit;
        	    }
	            mat[i][j]=a;
	        }
	    }
	    cout<<"2"<<endl;
        for(i=1;i<=n;i++)
        {
	        for(j=1;j<=n;j++)
	        {
	            cout<<mat[i][j]<<" ";
	            cout.flush();

	        }
	        cout<<endl;

	    }
	    cin>>x;
	    if(x==-1)
	    {
	        exit;
	    }
	    else if(x==1) continue;
	}
	return 0;
}
