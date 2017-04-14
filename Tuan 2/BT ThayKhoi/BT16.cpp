# include <iostream>

using namespace std;

void readNumber(int a);

int main(){
	int n;
	while(1){
		cout << "Nhap vao mot so trong khoang 0..9: ";
		cin >> n;
		if ( n < 0 || n >9) break;
		readNumber(n);
	}
	return 0;
}

void readNumber(int a){
	switch(a){
		case 0:
			cout << "Vua nhap chu so khong" << endl;
			break;
		case 1:
			cout << "Vua nhap chu so mot" << endl;
			break;
		case 2:
			cout << "Vua nhap chu so hai" << endl;
			break;
		case 3:
			cout << "Vua nhap chu so ba" << endl;
			break;
		case 4:
			cout << "Vua nhap chu so bon" << endl;
			break;
		case 5:
			cout << "Vua nhap chu so nam" << endl;
			break;
		case 6:
			cout << "Vua nhap chu so sau" << endl;
			break;
		case 7:
			cout << "Vua nhap chu so bay" << endl;
			break;
		case 8:
			cout << "Vua nhap chu so tam" << endl;
			break;
		case 9:
			cout << "Vua nhap chu so chin" << endl;
			break;
	}
}
