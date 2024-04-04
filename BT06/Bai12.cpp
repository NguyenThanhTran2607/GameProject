#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
	if(n <= 1) return 1;
	return n * factorial(n - 1);
}
int ToHop(int k, int n){
	return factorial(n)/(factorial(k) * factorial(n - k));
}
int kiemTra(int k , int n){
	if(1 <= n && n <= 20 && 0 <= k && k <= n) return 1;
	else return 0;
}
void nhapKN(int K[], int N[]){
	int i = 0;
	while(cin >> K[i] >> N[i]){
		if(K[i] == -1 && N[i] == -1) break;
		if(kiemTra(K[i], N[i]) == 1){
			cout << ToHop(K[i], N[i]) << endl;
		}
		i++;
	}
}
int main(){
	int K[1000], N[1000];
	nhapKN(K,N);
	return 0;
}
