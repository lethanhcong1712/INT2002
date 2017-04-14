# include <iostream>

using namespace std;

int main(){
	int *p = new int;
	int *p2 = p;
	*p = 10;
	delete p;		// Vung nho duoc cap phat tren Heap da duoc giai phong
	cout << *p2;	// Loi o dong nay vi co tinh in ra gia tri trong vung nho da duoc giai phong truoc do
	delete p2;
}