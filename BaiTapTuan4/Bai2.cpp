//Bai2
//Cau a
//Khai bao trong ham
#include <iostream>
using namespace std;
int main(){
	char x[4];
	for(int i = 0; i < 4; i++) cout << i << " "; //
	cout << endl;
	cout << x; //
	return 0;
}
//Khai bao ngoai ham
#include <iostream>
using namespace std;
char x[4];
int main(){
	for(int i = 0; i < 4; i++) cout << i << " "; //
	cout << endl;
	cout << x;//
	return 0;
}

//Cau b
//Khai bao trong ham voi N < 4
#include <iostream>
using namespace std;
int main(){
	int N = 3;
	char a[N] = "abcd";
	for(int i = 0; i < 4; i++) cout << a[i]; // abc
	cout << endl;
	cout << a; //abc
	return 0;
}
//Khai bao ngoai ham voi N < 4
#include <iostream>
using namespace std;
int N = 3;
char a[N] = "abcd";
int main(){
	for(int i = 0; i < 4; i++) cout << a[i]; 
	cout << endl;
	cout << a; 
	//'a' was not declared in this scope
	return 0;
}
//Khai bao trong ham voi N = 4
#include <iostream>
using namespace std;
int main(){
	int N = 4;
	char a[N] = "abcd";
	for(int i = 0; i < N; i++) cout << a[i]; // abcd
	cout << endl;
	cout << a; //abcd
	return 0;
}
//Khai bao ngoai ham voi N = 4
#include <iostream>
using namespace std;
int N = 4;
char a[N] = "abcd";
int main(){
	for(int i = 0; i < N; i++) cout << a[i];
	cout << endl;
	cout << a;
	//'a' was not declared in this scope
	return 0;
}

//Cau c
//Khai bao trong ham
#include <iostream>
using namespace std;
int main(){
	char a[] = "abcd";
	for(int i = 0; i < sizeof(a); i++) cout << a[i]; // abcd
	cout << endl;
	cout << a << endl; // abcd
	cout << sizeof(a); // 5
	
	return 0;
}
//Khai bao ngoai ham
#include <iostream>
using namespace std;
char a[] = "abcd";
int main(){
	for(int i = 0; i < sizeof(a); i++) cout << a[i]; // abcd
	cout << endl;
	cout << a << endl; // abcd
	cout << sizeof(a); // 5
	
	return 0;
}

