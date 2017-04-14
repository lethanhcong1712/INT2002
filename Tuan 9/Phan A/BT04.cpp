# include <iostream>

using namespace std;

int main(){
	int *p = new int;
	p++;
	delete p;
}
/* Con tro p duoc khoi tao de quan ly 4 o nho tren phan vung Heap ( kieu int)
Nhung con tro p da thay doi o nho tro den o dong lenh tiep theo, luc nay
o nho cua bien duoc duoc cap phat ban dau de ngo (khong con co con tro nao quan ly)
Luc giai phong thi chuong trinh se bao loi vi giai phong vung nho chua duoc cap phat */