#include <bits/stdc++.h>
using namespace std;
double a[100][100];
double tim[100];
int i,j;
int number;
int main(){
	freopen("..\\number","r",stdin);
	cin>>number;
	fclose(stdin);
	cin.clear();
	freopen("map","r",stdin);
	for(i=0;i<=number;i++)
		for(j=0;j<=number;j++)
			cin>>a[i][j];
	fclose(stdin);
	cin.clear();
	freopen("..\\yu\\data.in","r",stdin);
	int e;
	for(i=1;i<=number;i++)
		cin>>tim[i]>>e;
	fclose(stdin);
	cin.clear();
	freopen("..\\planc.in","r",stdin);
	int x,y,i,j;
	double sum=0,len=0;
	cin>>x>>y;
	for(i=1;i<=number;i++){
		for(j=i+1;j<=number;j++){
			if(a[i][j]!=0 && i!=x && j!=x && i!=y && j!=y){
				sum+=a[i][j]/(tim[j]-tim[i])*((tim[j]-tim[i])/tim[number]);
				len+=((tim[j]-tim[i])/tim[number]);
			}
		}
	}
	freopen("planc.out","w",stdout);
	cout<<sum/len;
}
