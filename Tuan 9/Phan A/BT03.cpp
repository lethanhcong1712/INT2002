# include <iostream>

using namespace std;

int main(){
	char *a = new char[10];
	char *c = a + 3;
	for (int i = 0; i < 9; i++){
		a[i] = 'a';
	}
	a[9] = '\0';
	cerr << "a: " << "-" << a << "-" << endl;
	cerr << "c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
/* Lenh cerr cuoi cung khong chay nhu mong muon: Loi la o dong truoc do ( delete c)
Con tro a quan ly 10 o nho lien tiep tren phan vung stack
Con tro c quan ly o nho thu 4 tren phan vung heap ma con tro a quan ly 
Khi delete c thi o nho thu 4 trong 10 o nho lien tiep duoc giai phong, tra lai cho he dieu hanh
nen luc do khong the in ra a nua ( chuong trinh se bi crash khi co doc 1 o nho da duoc giai phong*/