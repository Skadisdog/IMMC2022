#include <bits/stdc++.h>
using namespace std;
int n;
double xy,x2,xsum,ysum,a;
int main(){
	freopen("..\\plan.in","r",stdin);
	freopen("plana.out","w",stdout);
	double x,y;
	xy=x2=xsum=ysum=0;
	n=0;
	while(cin>>x>>y){
		n++;
		xy+=x*y;
		x2+=x*x;
		xsum+=x;
		ysum+=y;
	}
	cout<<(xy-xsum*ysum/n)/(x2-xsum*xsum/n);
}
