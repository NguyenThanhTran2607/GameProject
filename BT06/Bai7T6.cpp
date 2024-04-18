#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int space = n;
	int star = 1;
	while(n > 0){
		for(int i = 0; i < space; i++) cout << " ";
		for(int i = 0; i < star; i++) cout << "*";
		cout << endl;
		space--;
		star += 2;
		n--;
	}
	return 0;
}
