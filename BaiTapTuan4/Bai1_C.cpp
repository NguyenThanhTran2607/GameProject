#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	vector<bool> seen(N + 1, false);
	
	bool res = false;
	
	for(int i = 0; i < N; i++){
		int x;
		cin >> x;
		
		if(seen[x]){
			res = true;
			break;
		}
		
		seen[x] = true;
	}
	
	if(res) cout << "YES";
	else cout << "NO";
	
	return 0;
}
