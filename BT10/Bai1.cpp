#include <bits/stdc++.h>
using namespace std;

//a
char concatenatedA[100];

// b
const char* concatB(const char* str1, const char* str2, char* concatenated){
	strcpy(concatenated, str1);
	strcpy(concatenated, str2);
	return concatenated;
}

//c
const char* concatC(const char* str1, const char* str2){
	char concatenated[100];
	strcpy(concatenated, str1);
	strcpy(concatenated, str2);
	return concatenated;
}

//d
const char* concatD(const char* str1, const char* str2){
	char* concatenated = new char[strlen(str1) + strlen(str2) + 1];
	strcpy(concatenated, str1);
	strcpy(concatenated, str2);
	return concatenated;
}

int main(){
	const char* str1 = "Hello";
	const char* str2 = "World";
	
	//a
	strcpy(concatenatedA, str1);
    strcat(concatenatedA, str2);
    cout << concatenatedA << endl;
    
    //b
    char concatenatedB[100];
    const char* resultB = concatB(str1, str2, concatenatedB);
    cout << concatenatedB << endl;
    
    //c
    const char* C = concatC(str1, str2);
    cout << C << endl;
    
    //d
    const char* D = concatD(str1, str2);
    cout << D << endl;
    
    return 0;
}

