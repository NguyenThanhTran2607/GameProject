#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x;
	int y;
};
void print_value(Point P){
	cout << &P.x << " " << &P.y << endl;
}
void print_reference(Point &P){
	cout << &P.x << " " << &P.y << endl;
}
int main(){
	Point P = {6, 8};
	cout << &P.x << " " << &P.y << endl;
	print_value(P);
	print_reference(P);
	return 0;
}
//0x6ffe10 0x6ffe14
//0x6ffdf0 0x6ffdf4
//0x6ffe10 0x6ffe14
