#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
double a[100][100];
int number;
int i,j,k;
int main(){
	freopen("..\\number","r",stdin);
	cin>>number;
	fclose(stdin);
	cin.clear();
	for(i=0;i<=number;i++)
		for(j=0;j<=number;j++)
			if(i!=j)
				a[i][j]=1e10;
	freopen("map.in","r",stdin);
	int x,y,len;
	while(cin>>x>>y>>len)
		a[x][y]=len;
	fclose(stdin);
	cin.clear();
	for(k=0;k<=number;k++)
		for(i=0;i<=number;i++)
			for(j=0;j<=number;j++)
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	freopen("map","w",stdout);
	for(i=0;i<=number;i++){
		for(j=0;j<=number;j++){
			if(a[i][j]!=1e10)
				cout<<a[i][j]<<" ";
			else
				cout<<"0 ";	
		}
		cout<<endl;
	}
	fclose(stdout);
	cout.clear();
	return 0;
}
