#include <bits/stdc++.h>
using namespace std;
int* test(){
	int a = 1;
	int *p = &a;
	return p;
}
int main(){
	int *ptr = test(); // lay gia tri con tro tro toi bien dia phuong 
	cout << *ptr << endl; // in ra gia tri bien dia phuong
	delete ptr; // giai phong bo nho duoc cap phat dong
	
	cout << *ptr << endl; // in ra gia tri bien dia phuong sau khi giai phong bo nho
	return 0;	
}
