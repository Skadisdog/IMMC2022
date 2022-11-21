#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
	int i,j;
	int len=0;
	system("del /F /S /Q yu");
	for(i=1;i<=22;i++){
		for(j=i+1;j<=22;j++){
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
