//Bai 1

//Cau a
//Khai bao mang trong ham main
#include <iostream>
using namespace std;
int main(){
	int a[3];
	for(int i = 0; i < 3; i++) cout << a[i] << " ";//0 0 1
	return 0;
}
//Khai bao mang ngoai ham main
#include <iostream>
using namespace std;
int a[3];
int main(){
	for(int i = 0; i < 3; i++) cout << a[i] << " ";//0 0 0
	return 0;
}

//Cau b
//Khai bao ngoai ham main
#include <iostream>
using namespace std;
int N = 3;
int a[N] = {1,2,3,4};
int main(){
	for(int i = 0; i < N; i++) cout << a[i] << " "; //'a' was not declared in this scope
	return 0;
}
//Khai bao trong ham main
#include <iostream>
using namespace std;
int main(){
	int N = 3;
	int a[N] = {1,2,3,4};
	for(int i = 0; i < N; i++) cout << a[i] << " ";
	//terminate called after throwing an instance of 'std::bad_array_length'
 	// what():  std::bad_array_length
	return 0;
}

//Cau c
// Ngoai ham main
#include <iostream>
using namespace std;
int a[] = {1,2,3,4};
int main(){
	for(int i = 0; i < 4; i++) cout << a[i] << " ";// 1 2 3 4 
	return 0;
}
//trong ham main
#include <iostream>
using namespace std;
int main(){
	int a[] = {1,2,3,4};
	for(int i = 0; i < 4; i++) cout << a[i] << " "; // 1 2 3 4
	return 0;
}
//trong ham main nhung khong khoi tao
#include <iostream>
using namespace std;
int main(){
	int a[4];
	for(int i = 0; i < 4; i++) cout << a[i] << " "; //0 0 25 0
	return 0;
}

