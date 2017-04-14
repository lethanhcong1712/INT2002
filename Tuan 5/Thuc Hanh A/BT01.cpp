# include <iostream>

using namespace std;

int main(){
	int a[100];
	char b[100];
	int x, y;
	
	cout << &x << " " << &y << endl;
	
	for (int i = 0; i < 3; i++){
		cout << &a[i] << endl;
	}
	cout << endl;
	
	for (int i = 0; i < 3; i++){
		cout << (void *)&b[i] << endl;
	}
	return 0;
}
// 3 phan tu lien tiep cua mang a co thu tu o nho tren bo nho ao tang dan va cach nhau 4 o nho, do kieu int chiem 4 byte ( tuc la 4 o nho tren bo nho ao )
// 3 phan tu lien tiep cua mang b co thu tu o nho tang dan va cach nhau 1 o nho, do kieu char chiem 1 byte ( tuc la 1 o nho tren bo nho ao )
// Khai bao hai bien x, y va in ra dia chi 2 bien do thi dia chi bien x lon hon dia chi bien y 4 o nho (4 byte)
