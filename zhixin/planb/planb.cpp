#include <bits/stdc++.h>
using namespace std;
int n;
queue<double> q;
double sum,quan;
struct Dian{
	double len;
	double time;
}dian[23];
int main(){
	freopen("..\\plan.in","r",stdin);
	freopen("planb.out","w",stdout);
	int i,j;
	for(n=1;cin>>dian[n].time>>dian[n].len;n++);
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			sum+=((dian[j].len-dian[i].len)/(dian[j].time-dian[i].time))*((dian[j].time-dian[i].time)/dian[n-1].time);
			quan+=(dian[j].time-dian[i].time)/dian[n-1].time;
		}
	}
	cout<<sum/quan;
}
