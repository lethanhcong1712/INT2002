# include <iostream>

using namespace std;

int main(){
	int Min, Max, Step_size;
	int F;
	float C,K;
	cin >> Min >> Max >> Step_size;
	cout << "Fahrenheit    Celsius    Absolute Value" << endl;
	for (F = Min; F <= Max; F+= Step_size){
		C = (F -32) /1.8;
		K = C + 273.15;
		cout << F << "\t    " << C << "\t    " << K << endl;
	}
	return 0;

}
