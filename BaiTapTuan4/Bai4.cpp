//Bai 4
//Cau a
#include <iostream>

using namespace std;

int main(){
	char arr[5];
	char var1, var2 , var3;
	for(int i = 0; i < 5; i++){
		arr[i] = 'A' + i;
	}
	var1 = 'V';
	var2 = 'A';
	var3 = 'R';
	
	cout << arr[-1] << endl //
		 << arr[5] << endl  //
		 << arr[6] << endl  //
		 << var1 << endl    //V
		 << var2 << endl	//A
		 << var3 << endl;	//R
	return 0;
}

//Cau b
#include <iostream>
using namespace std;
int main(){
	char arr[5];
	char var1, var2, var3;
	
	arr[-1] = 'X';
	arr[5] = 'Y';
	arr[6] = 'Z';
	
	cout << arr[-1] << endl
		<< arr[5] << endl
		<< arr[6] << endl;
	//ket qua khong co loi
	//hau qua co the thay doi tuy thuoc vao trinh bien dich, moi truong chay va trang thai cua bo nho 
		
	return 0;
}

//Cau c

#include <iostream>
using namespace std;
int main(){
	int arr[3][4] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}};
				
	for(int j = 0; j < 6; j++){
		arr[0][j]  = j + 1;
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	//1 2 3 4
	//5 6 7 8
	//9 10 11 12
	return 0;
	// co the lam thay doi vung nho xung quanh mang, anh huong den cac bien khac hoac cau truc du lieu trong bo nho  
}
