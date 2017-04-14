# include <iostream>

using namespace std;

struct Point
{
public:
	Point(int a, int b){
		x = a;
		y = b;
	}
	void print(){
		cout << "(" << x << ", " << y << ")" << endl;
	}
private:
	int x;
	int y;
};

int main(){
	Point Oxy(3,4);
	Oxy.print();
	return 0;
}