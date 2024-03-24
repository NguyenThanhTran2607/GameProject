#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	string rev_a = a;
	reverse(rev_a.begin(), rev_a.end());
	if(rev_a == a) cout << "YES";
	else cout << "NO";
	return 0;
}
