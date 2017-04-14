# include <iostream>

using namespace std;

int main(){
	int b, c;
	int &a = b;
	a = 7;
	cout << b << endl;
	b ++;
	cout << a << endl;
	// a) Bien tham chieu va bien no chieu toi cung la 1 bien trong bo nho
	// b) Khong the khai bao tham chieu khi chua chieu ngay no den mot bien thuong
	// c) Khong the chieu toi mot bien khac voi bien tham chieu ban dau
}
