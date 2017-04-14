# include <iostream>
# include <cmath>

using namespace std;

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	
	if ( a + b > c && a - b < c){
		if ( a == b && a == c){
			cout << "C = " << a + b + c << endl;
			cout << "Tam giac deu";
		}
		else if( a == b || a == c || b == c){
			cout << "C = " << a + b + c << endl;
			cout << "Tam giac can";
		}
		else if ( (pow(a,2) == pow(b,2) + pow (c,2)) || (pow(b,2) == pow(a,2) + pow (c,2)) + (pow(c,2) == pow(b,2) + pow (a,2)) ){
			cout << "C = " << a + b + c << endl;
			cout << "Tam giac vuong";
		}
	}
	else{
		cout << "Khong phai tam giac" << endl;
	}
	return 0;
}
