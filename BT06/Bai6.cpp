#include <bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
	if(a == 0) return b;
	if(b == 0) return a;
	return UCLN(b, a % b);
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b);
	return 0;
}
