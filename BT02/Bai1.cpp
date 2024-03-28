#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n >= 2;
}
int main(){
	int n;
	cin >> n;
	if(is_prime(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
