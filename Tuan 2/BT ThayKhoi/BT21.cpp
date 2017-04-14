# include <iostream>
# include <cmath>

using namespace std;

int baoHiem (int thuNhap);
int thue (int thuNhap);

int main(){
	int thuNhap;
	cout << "Thu nhap cua ban 1 thang la bao nhieu (VND): ";
	cin >> thuNhap;
	cout << thue(thuNhap) << endl;
	cout << "Tong thu nhap cua ban la: " << thuNhap - baoHiem(thuNhap) - thue(thuNhap) << " VND" << endl;
	return 0;
}

int baoHiem(int thuNhap){
	return thuNhap * 0.09;
}

int thue (int thuNhap){
	if ( thuNhap <= 1000000){
		return 0;
	}
	else if (thuNhap <= 1500000){
		return (thuNhap - 1000000) * 0.1 ;
	}
	else if ( thuNhap <= 2000000){
		return ( 500000 * 0.1 + (thuNhap - 1500000) * 0.15 );
	}
	else{
		return ( 500000 * 0.1 + 500000 * 0.15 + (thuNhap - 2000000) * 0.2);
	}
}
