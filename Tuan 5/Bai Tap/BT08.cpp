# include <iostream>
# include <cmath>

using namespace std;

int rnd(float x){
	floor(x);
	return x;
}

int rnd1(float x){
	int y = (int) x;
	return y;	
}

int main(){
	float x;
	cin >> x;
	cout << rnd(x) << endl;
	cout << rnd1(x) << endl;
}
