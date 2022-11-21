#include <bits/stdc++.h>
using namespace std;
double a,maxn=0,minn=1e9;
int i;
int main(){
	freopen("max_and_min.txt","a+",stdout);
	for(i=1;i<=231;i++){
		char zhiling[1000];
		sprintf(zhiling,"%d.in",i);
		freopen(zhiling,"r",stdin);
		cin>>a;
		maxn=max(a,maxn);
		minn=min(a,minn);
		fclose(stdin);
		cin.clear(); 
		sprintf(zhiling,"del %d.in",i);
		system(zhiling);
	}
	cout<<"Max:"<<maxn<<",Min:"<<minn<<endl;
}
