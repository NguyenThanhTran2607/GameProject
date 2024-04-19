#include <bits/stdc++.h>
using namespace std;
int main(){
	char* a = new char[10];// cap phat mot mang dong chua 10 ky tu va gan con tro a tro toi mang do 
	char* c = a + 3;//gan con tro c tro toi phan tu thu 3 trong mang duoc cap phat dong
	for (int i = 0; i < 9; i++) a[i] = 'a'; // gan gia tri a cho cac phan tu trong mang tru ki tu cuoi cung
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl; // in ra man hinh chuoi ki tu ma con tro a tro toi
	cerr <<"c: " << "-" << c << "-" << endl; // in ra man hinh chuoi ki tu ma con tro c tro toi
	delete c; // loi la giai phong bo nho ma con tro c tro toi
	cerr << "a after deleting c:" << "-" << a << "-" << endl; // in ra man hinh chuoi ki tu ma a tro toi sau khi giai phong bo nho bang con tro c
	
}
