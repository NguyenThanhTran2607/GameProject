#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int dx[8] = {1,1,1,-1,-1,-1,0,0};
    int dy[8] = {1,0,-1,1,0,-1,1,-1};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '.'){
                int count = 0;
                for(int index = 0; index < 8; index++){
                    int xval = i + dx[index];
                    int yval = j + dy[index];
                    if(xval >= 0 && xval < m && yval >= 0 && yval < n){
                        if(a[xval][yval] == '*') count++;
                    }
                }
                a[i][j] = char(count) + 48;
            }
        }
    }
    for(int i = 0; i < m; i++){
    	for(int j = 0; j <  n; j++){
    		cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
