#include <bits/stdc++.h>
using namespace std;
int random(int N){
	return rand() % N;
}
int main(){
	int n;
	cin >> n;
	cout << random(n);
	return 0;
}
