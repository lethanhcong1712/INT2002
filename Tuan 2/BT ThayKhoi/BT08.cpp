# include <iostream>
# include <cmath>

using namespace std;

float delta (float a, float b, float c){
	float delta = pow(b,2) - 4 * a * c;
	return delta;
}

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	float Del = delta (a,b,c);
	if ( Del > 0){
		float x1 = ( -b + sqrt(Del)) / 2*a;
		float x2 = ( -b - sqrt(Del)) / 2*a;
		cout << x1 << " " << x2 << endl;
	}
	else if ( Del == 0){
		float x = (-b) / 2*a;
		cout << x << endl;
	}
	else{
		printf ("x1 = ( -%.2f + sqrt(abs(%.2f)))i / 2 * %.2f\n", b,Del,a);
		printf ("x2 = ( -%.2f - sqrt(abs(%.2f)))i / 2 * %.2f\n", b,Del,a);
	}
	return 0;
}
