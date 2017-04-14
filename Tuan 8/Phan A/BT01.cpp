# include <iostream>

using namespace std;

void f(int xval){
	int x;
	x = xval;
	cout << &x << endl; 
}

void g(int yval){
	int y;
	cout << &y << endl;
}

int main(){
	g(7);
	g(11);
	return 0;	
}
/* Trong ham main, khi goi ham g thi gia tri x duoc khoi tao, ket thuc ham g thi bien x duoc giai phong
Khi goi den ham f thi trinh bien dich cap phat bo nho cho bien y theo thu tu tu tren xuong trong ngan xep stack, va do la dia chi bien x vua duoc giai phong */
