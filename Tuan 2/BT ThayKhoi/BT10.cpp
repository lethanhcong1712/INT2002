# include <iostream>

using namespace std;

int main(){
	int F;
	float C,K;
	cout << "Fahrenheit    Celsius    Absolute Value" << endl;
	for (F = 0; F <= 300; F+= 20){
		C = (F -32) /1.8;
		K = C + 273.15;
		cout << F << "\t    " << C << "\t    " << K << endl;
	}
	return 0;

}
