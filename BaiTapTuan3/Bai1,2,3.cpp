//Bai 1
#include <iostream>
using namespace std;
struct Point{
	int x, y;
};

void print(Point p){
	cout << p.x << " " << p.y;
}
int main(){
	Point point;
	point.x = 10;
	point.y = 12;
	print(point);
}

//Bai2
//truyen thanm chieu struct
#include <bits/stdc++.h>

using namespace std;

struct Point{
	int x,y;
	
};
void swap(Point& p){
	int temp = p.x;
	p.x = p.y;
	p.y = temp;
}
void print(Point p){
	cout << p.x << " " << p.y;
}

int main(){
	Point point;
	point.x = 10;
	point.y = 12;
	
	swap(point);
	print(point); // output : 12 10
	
	return 0;
}

// truyen tham tri struct
#include <bits/stdc++.h>

using namespace std;

struct Point{
	int x,y;
	
};
void swap(Point p){
	int temp = p.x;
	p.x = p.y;
	p.y = temp;
}
void print(Point p){
	cout << p.x << " " << p.y;
}

int main(){
	Point point;
	point.x = 10;
	point.y = 12;
	
	swap(point);
	print(point); //output : 10 12
	
	return 0;
}

//Bai 3
#include <bits/stdc++.h>

using namespace std;

struct Point{
	double x,y;
	
};

Point mid_point(const Point& P1, const Point& P2){
	Point midPoint;
	midPoint.x = (P1.x + P2.x)/2;
	midPoint.y = (P1.y + P2.y)/2;
	return midPoint;
}
void print(Point p){
	cout << p.x << " " << p.y;
}

int main(){
	Point point1 = {1.0,2.0};
	Point point2 = {3.0,4.0};
	
	Point res = mid_point(point1,point2);
	print(res);
	
	return 0;
}

