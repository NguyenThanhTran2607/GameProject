#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x, y;
};
int main(){
	Point P;
	cout << &P.x << " " << &P.y << endl;
	cout << &P;
	return 0;
}
//0x6ffe10 0x6ffe14
//0x6ffe10

