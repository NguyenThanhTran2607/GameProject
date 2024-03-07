//Bai 3
//Cau a
#include <iostream>
using namespace std;
int main(){
	char daytab1[2][12] = {
  	{31,28,31,30,31,30,31,31,30,31,30,31},
  	{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab1[i][j]) << " ";
		}
		cout << endl; 
	}
	char daytab2[2][12] = {
  	31,28,31,30,31,30,31,31,30,31,30,31,
  	31,29,31,30,31,30,31,31,30,31,30,31
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab2[i][j]) << " ";
		}
		cout << endl; 
	}
}
//ca 2 cach deu tao ket qua giong nhau nhung cach 1 de hieu hon vi no the hien ro mang 2 chieu

//Cau b
#include <iostream>
using namespace std;
int main(){
	char daytab1[2][12] = {
  	{31,28,31,30,31,30,31,31,30,31,30,31},
  	{31,29,31,30,31,30,31,31,30,31}
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab1[i][j]) << " ";
		}
		cout << endl; 
	}
	char daytab2[2][12] = {
  	31,28,31,30,31,30,31,31,30,31,30,31,
  	31,29,31,30,31,30,31,31,30,31
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab2[i][j]) << " ";
		}
		cout << endl; 
	}
}
//nhung phan tu bi xoa se in ra man hinh la so 0

//Cau c
//Khong co kich thuoc hang
#include <iostream>
using namespace std;
int main(){
	char daytab1[][12] = {
  	{31,28,31,30,31,30,31,31,30,31,30,31},
  	{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab1[i][j]) << " ";
		}
		cout << endl; 
	}
	char daytab2[][12] = {
  	31,28,31,30,31,30,31,31,30,31,30,31,
  	31,29,31,30,31,30,31,31,30,31,30,31
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab2[i][j]) << " ";
		}
		cout << endl; 
	}
}
//31 28 31 30 31 30 31 31 30 31 30 31
//31 29 31 30 31 30 31 31 30 31 30 31
//31 28 31 30 31 30 31 31 30 31 30 31
//31 29 31 30 31 30 31 31 30 31 30 31
 
//Khong co kich thuoc cot
#include <iostream>
using namespace std;
int main(){
	char daytab1[2][] = {
  	{31,28,31,30,31,30,31,31,30,31,30,31},
  	{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab1[i][j]) << " ";
		}
		cout << endl; 
	}
	char daytab2[2][] = {
  	31,28,31,30,31,30,31,31,30,31,30,31,
  	31,29,31,30,31,30,31,31,30,31,30,31
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab2[i][j]) << " ";
		}
		cout << endl; 
	}
}
//'daytab1' was not declared in this scope
//declartion of 'daytab2' as multidimensinoal array must have bounds for all dimensions except the first
//'daytab2' was not declared in this scope

//Khong co ca kich thuoc cot va hang
#include <iostream>
using namespace std;
int main(){
	char daytab1[][] = {
  	{31,28,31,30,31,30,31,31,30,31,30,31},
  	{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab1[i][j]) << " ";
		}
		cout << endl; 
	}
	char daytab2[][] = {
  	31,28,31,30,31,30,31,31,30,31,30,31,
  	31,29,31,30,31,30,31,31,30,31,30,31
	};
	for(int i = 0; i < 2; i++){
		for(int j = 0;  j < 12; j++){
			cout << static_cast<int>(daytab2[i][j]) << " ";
		}
		cout << endl; 
	}
}
// loi giong phan khong co kich thuoc cot

