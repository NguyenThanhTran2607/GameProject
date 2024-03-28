#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int star = n;
	while(star > 0){
		for(int i = 0; i < n - star; i++) cout << " ";
		for(int i = 0; i < star; i++) cout << "*";
		cout << endl;
		star--;
	}
	return 0;
}
