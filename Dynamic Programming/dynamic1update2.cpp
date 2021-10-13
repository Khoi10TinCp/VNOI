#include<bits/stdc++.h>
using namespace std;
int f[400];
int fibo(int n){
	f[1] = 1; f[0] = 1;
	for(int i = 2; i <=n;i++){
		f[i] =f[i-1] + f[i-2];
	}
	return f[n];
}
int main(){
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}
