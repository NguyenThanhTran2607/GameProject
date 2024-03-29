#include <iostream>
using namespace std;

int main(){
	int dd = -99;
	int x;
	do{
		cin >> x;
		if(x != dd) cout << x << " ";
		dd = x;
	}while(x > 0);
	return 0;
	
}
