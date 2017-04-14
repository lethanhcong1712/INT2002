# include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
};

void Value(Point a){
	cout << &a.x << " " << &a.y << endl;
}

void Refrence(Point &a){
	cout << &a.x << " " << &a.y << endl;
}

int main(){
	Point Oxy;
	cout << &Oxy.x << " " << &Oxy.y << endl;
	Value(Oxy);
	Refrence(Oxy);
	return 0;
}