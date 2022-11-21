#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
string doc[10010];
string a;
int n,i;
int main(){
	system("cd .\\yu && mkdir yu");
	system("cd .\\yu && yu.exe");
	system("del .\\out\\max_and_min.txt");
	system("fsutil file createnew .\\out\\max_and_min.txt 0");
	for(i=1;i<=231;i++){
		char zhiling[1000];
		sprintf(zhiling,"copy .\\yu\\yu\\%d.txt .\\",i);
		system(zhiling);
		sprintf(zhiling,"ren %d.txt plan.in",i);
		system(zhiling);
		system("cd .\\plana && plana.exe");
		sprintf(zhiling,"cd plana && ren plana.out %d.in && move %d.in ..\\out\\",i,i);
		system(zhiling);
		system("del plan.in");
	} 
	system("cd .\\out\\ && max_and_min.exe");
	for(i=1;i<=231;i++){
		char zhiling[1000];
		sprintf(zhiling,"copy .\\yu\\yu\\%d.txt .\\",i);
		system(zhiling);
		sprintf(zhiling,"ren %d.txt plan.in",i);
		system(zhiling);
		system("cd .\\planb && planb.exe");
		sprintf(zhiling,"cd planb && ren planb.out %d.in && move %d.in ..\\out\\",i,i);
		system(zhiling);
		system("del plan.in");
	}
	system("cd .\\out\\ && max_and_min.exe");
	system("cd .\\planc && yu.exe");
	for(i=1;i<=231;i++){
		char zhiling[1000];
		sprintf(zhiling,"copy .\\planc\\yu\\%d.txt .\\",i);
		system(zhiling);
		sprintf(zhiling,"ren %d.txt planc.in",i);
		system(zhiling);
		system("cd .\\planc && planc.exe");
		sprintf(zhiling,"cd .\\planc && ren planc.out %d.in && move %d.in ..\\out\\",i,i);
		system(zhiling);
		system("del planc.in");
	}
	system("cd .\\out\\ && max_and_min.exe");
	system("cd .\\planc && del /F /S /Q yu");
	system("cd .\\yu && del /F /S /Q yu && del /F /S /Q random.out");
	return 0;
}
