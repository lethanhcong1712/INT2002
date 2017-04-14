# include <iostream>
# include <cmath>

using namespace std;

int ucln(int a, int b);

int main(){
	int x,y;
	cin >> x >> y;
	int gcd = ucln (x,y);
	x /= gcd;
	y /= gcd;
	cout << x << "/" << y << endl;
	return 0;
	
}


int ucln(int a, int b){
	int c = a % b;
	while ( b!= 0){
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
