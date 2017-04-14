# include <iostream>
# include <cmath>

using namespace std;

unsigned int ucln(unsigned int a, unsigned int b){
	unsigned int c = a % b;
	while ( b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}  

int main(){
	unsigned int x,y;
	cin >> x >> y;
	cout << ucln(x,y) << endl;
	return 0;
}
