//Bai 5
// = N
#include <iostream>
#include <string>
using namespace std;
int main(){
	int N = 5;
	char str[5];
	cin >> str; // abcde
	
	cout << "_" << str << "_" << endl; //abcde
	return 0;
}

// < N
#include <iostream>
#include <string>
using namespace std;
int main(){
	int N = 5;
	char str[5];
	cin >> str; // abc
	
	cout << "_" << str << "_" << endl; //abc
	return 0;
}

// > N
#include <iostream>
#include <string>
using namespace std;
int main(){
	int N = 5;
	char str[5];
	cin >> str; // abcdef
	
	cout << "_" << str << "_" << endl; //abcdef
	return 0;
}
