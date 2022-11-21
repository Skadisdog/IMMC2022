#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int number;
int main(){
	freopen("..\\number","r",stdin);
	cin>>number;
	fclose(stdin);
	cin.clear();
	int i,j;
	int len=0;
	system("del /F /S /Q yu");
	for(i=1;i<=number;i++){
		for(j=i+1;j<=number;j++){
			len++;
			char zhiling[1000];
			sprintf(zhiling,"%d.txt",len);
			freopen(zhiling,"w",stdout);
			cout<<i<<" "<<j;
			fclose(stdout);
			cout.clear();
			sprintf(zhiling,"move %d.txt .\\yu",len);
			system(zhiling);
		}
	}
}
