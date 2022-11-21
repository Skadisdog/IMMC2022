#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
string doc[10010];
string a;
int n,i;
int number;
int main(){
	system("del /F /S /Q answer.txt");
	freopen("number","r",stdin);
	cin>>number;
	fclose(stdin);
	cin.clear();
	number=number*(number-1)/2;
	system("cd .\\yu && mkdir yu");
	system("cd .\\yu && yu.exe");
	system("del .\\out\\max_and_min.txt");
	system("fsutil file createnew .\\out\\max_and_min.txt 0");
	for(i=1;i<=number;i++){
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
	for(i=1;i<=number;i++){
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
	for(i=1;i<=number;i++){
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
	system("cd .\\out && copy max_and_min.txt ..\\");
	system("ren max_and_min.txt answer.txt");
	return 0;
}
