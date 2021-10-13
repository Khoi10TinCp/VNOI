#include<bits/stdc++.h>
using namespace std;
int f[400];
int fibo(int n){
	if (n==1 || n ==2){
         return 1;
	}
	if (f[n] !=0)
		return f[n];
	f[n] = fibo(n-1) + fibo(n-2);
	return f[n];
}
int main(){
   int n;
   cin >> n;
   cout << fibo(n);
   return 0;
}
