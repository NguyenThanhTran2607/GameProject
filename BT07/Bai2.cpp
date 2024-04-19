#include <bits/stdc++.h>
using namespace std;
void f(int * arr){
	cout << sizeof(arr) << endl;
}
int main(){
	int a[] = {1,2,3,4,5};
	cout << sizeof(a) << endl; // 20
	f(a); // 8
	return 0;
}
