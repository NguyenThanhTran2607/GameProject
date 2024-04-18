#include <bits/stdc++.h>
using namespace std;
struct Data{
	int a[5];
	char c[20];
};
int main(){
	Data Dt;
	for(int i = 0; i < 5; i++) Dt.a[i] = i;
	
	strcpy(Dt.c, "Tran Thanh Nguyen");
	
	Data copyDt = Dt;
	copyDt.a[0] = 100;
	
	cout << "Dt array: ";
	for(int i = 0; i < 5; i++){
		cout << Dt.a[i] << " ";
	}
	cout << endl;
	
	cout << "CopyDt array: ";
	for(int i = 0; i < 5; i++){
		cout << copyDt.a[i] << " ";
	}
	cout << endl;
	
	cout << "Dt c: " << Dt.c << endl;
	cout << "CopyDt c: " << copyDt.c << endl;
	
	return 0;
}
//sao chep nong doi voi truong du lieu la mot mang, co nghia la hai bien struct se co con tro tro toi cung mot vung trong bo nho
//doi voi truong du lieu la mot mang ki tu(chuoi), se sao chep toan bo chuoi, khong phai con tro den chuoi  
