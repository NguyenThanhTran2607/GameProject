#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int line = 1;
	int star = 1 + (n - 1) * 2;
	while(line <= n){
		for(int i = 1; i < line; i++) cout << " ";
		for(int i = 1; i <= star; i++) cout << "*";
		cout << endl;
		star -= 2;
		line++;
	}
	return 0;
}
