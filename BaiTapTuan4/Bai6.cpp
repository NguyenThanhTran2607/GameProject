#include <bits/stdc++.h>
#include <ctime>
using namespace std;
int main(){
	int a[30];
	srand(time(NULL));
	for(int i = 0; i < 30; i++){
		a[i] = rand() % 100;
	}
	for(int i = 0; i < 30; i++){
		cout << a[i] << " ";
	}
	
	cout << endl;
	
	for(int i = 29; i >= 0; i--){
		for(int j = 0; j < i; j++){
			if(a[j] > a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i = 0; i < 30 ; i++){
		cout << a[i] << " ";
	}
	
	//34 12 11 50 22 66 24 25 44 95 70 28 13 26 16 46 75 19 44 94 35 10 70 96 19 38 53 39 96 1
	//1 10 11 12 13 16 19 19 22 24 25 26 28 34 35 38 39 44 44 46 50 53 66 70 70 75 94 95 96 96
	return 0;
}
