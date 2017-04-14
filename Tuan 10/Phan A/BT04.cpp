# include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
};

int main(){
	Point mark;
	cout << &mark.x << " " << &mark.y << endl;
}