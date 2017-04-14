# include <iostream>

using namespace std;

int ucln(unsigned int a, unsigned int b){
	if ( b == 0){
		return a;
	}
	else{
		return ucln(b, a % b);
	}
}

int main(){
	unsigned int a,b;
	cin >> a >> b;
	ucln(a,b);
	cout << ucln(a,b);
	// Kiem tra so nguyen to cung nhau
	if ( ucln(a,b) == 1){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}
