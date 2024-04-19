#include <bits/stdc++.h>
using namespace std;
int count_even(int* arr, int size){
	int cnt = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] % 2 == 0) cnt++;
	}
	return cnt;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int cnt_first_half = count_even(arr, size/2);
	int cnt_second_half = count_even(arr + size/2, size/2);
	
	cout << cnt_first_half << endl;
	cout << cnt_second_half << endl;
	return 0;
}
