//Bai 4
struct Student{
    int age;
    string first_name;
    string last_name;
    string standard; 
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
//Bai 5
#include <iostream>

using namespace std;

struct Point {
    int x, y;
};


struct Rect{
	int x, y, w, h;
	
	bool constains(const Point& p){
		if(p.x >= this->x && p.x <= this->x + w && p.y >= this->y && p.y <= this->y + h ) return true;
		return false;
	}
};

int main(){
	Rect  rect = {100,200,200,100};
	Point P = {20,20};
	cout << rect.constains(P) << endl;
	return 0;
}
//Bai 6
#include <iostream>

using namespace std;
struct Rect{
	int x, y, w, h;
};
struct Ship{
	Rect rect;
	string id;
	int dx,dy;
	void move(){
		rect.x += dx;
		rect.y += dy;
	}
	
};

display(const Ship& ship){
	cout << ship.id << " " << ship.rect.x << " " << ship.rect.y << endl;
}

int main(){
	Ship ship_;
	ship_.rect = {100,100,300,150};
	ship_.id = "tau2607";
	ship_.dx = 20;
	ship_.dy = 20;
	
	ship_.move();
	display(ship_);
	
	return 0;
}
//Bai 7
#include <iostream>

using namespace std;
struct Rect{
	int x, y, w, h;
};
struct Ship{
	Rect rect;
	string id;
	int dx,dy;
	void move(){
		rect.x += dx;
		rect.y += dy;
	}
	
};

display(const Ship& ship){
	cout << ship.id << " " << ship.rect.x << " " << ship.rect.y << endl;
}

int main(){
	Ship ship1 = {{100,100,100,50},"tau danh ca", 10, 10};
	Ship ship2 = {{400,500,200,100},"tau2607", 30, 30};
	
	int  loop = 1;
	while(loop < 10){
		ship1.move();
		ship2.move();
		
		display(ship1);
		display(ship2);
		
		loop++;
	}
	return 0;
}

