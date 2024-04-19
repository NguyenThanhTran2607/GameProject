#include <bits/stdc++.h>
using namespace std;
int main(){
	 int* p = new int; // cap phat dong cho bo nho den p
	 int* p2 = p;      // gan con tro p cho p2, dieu nay dan den p2 va p tro den cung mot ba nho
	 *p = 10;          // gan gia tri 10 cho vung bo nho p tro toi
	 delete p;         // giai phong vung bo nho ma p tro toi, bay gio p tro toi vung bo nho khong hop le
	*p2 = 100;         // gan gia tri 100 cho vung bo nho ma p2 tro toi, nhung vung nay da duoc giai phong truoc do 
	 cout << *p2;      // truy cap den vung bo nho khong hop le	
	 delete p2;        // giai phong vung bo nho da duoc giai phong truoc do dan den loi
	return 0;
}
//loi double deletion 
