# include <bits/stdc++.h>
# include <windows.h>
# include <stdio.h>
# include <stdlib.h>
using namespace std;
string a[10000];
int n,i,j,k,len;
int main(){
	freopen("data.in","r",stdin);
	for(n=1;getline(cin,a[n]);n++);
	fclose(stdin);
	cin.clear();
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			freopen("random.out","w",stdout);
			len++;
			for(k=1;k<n;k++)
				if(k!=i&&k!=j)
					cout<<a[k]<<endl;
			fclose(stdout);
			cout.clear();
			char zhiling[1000];
			system("copy random.out .\\yu");
			sprintf(zhiling,"cd .\\yu && ren random.out %d.txt",len);
			system(zhiling);
		}
	}
	freopen("..\\number","w",stdout);
	cout<<n-1;
	fclose(stdout);
	cout.clear();
	return 0;
}
