#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int space = n - 1;
	int star = 1;
	while(space >= 0){
		for(int i = 0; i < space; i++) cout << " ";
		for(int i = 0; i < star; i++) cout << "*";
		star += 2;
		cout << endl;
		space--;
	}
	return 0;
}
