#include <bits/stdc++.h>
using namespace std;
struct String{
	int n;
	char *str;
	
	//Constructor
	String(const char* s){
		n = strlen(s);           // do dai xau
		str = new char[n + 1];   // cap phat dong
		strcpy(str, s);          // sao chep noi dung va mang char
	}
	
	//Destructor
	~String(){
		delete[] str;            // giai phong bo nho da cap phat
	}
	
	void print() const{
		cout << str;
	}
	
	// ham noi xau
	void append(const char* s){
		int len = strlen(s);
		char* temp = new char[n + len - 1];
		strcpy(temp, str);
		strcpy(temp + n, s);
		delete[] str;
		str = temp;
		n += len;
	}
};

int main(){
	String greeting("Hi");
	greeting.append(" there");
	greeting.print();
	return 0;
}
