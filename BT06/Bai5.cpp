#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n >= 2;
}

void print_prime(int n){
	for(int i = 0; i <= n; i++){
		if(isprime(i)){
			cout << i << " ";
		}
	}
}
int main(){
	int n;
	cin >> n;
	print_prime(n);
	return 0;
}
