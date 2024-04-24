#include <bits/stdc++.h>
using namespace std;
int find(int *a, int left, int right, int x){
	if(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x) return 1;
		if(a[mid] < x) return find(a, mid + 1, right, x);
		else return find(a, left, mid - 1, x);
	}
	return 0;
}
int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	if(find(a, 0, n - 1, x)) cout << "YES";
	else cout << "NO";
	return 0;
}
