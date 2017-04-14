# include <iostream>
# include <cmath>

using namespace std;

int binCovertDec(char binaryNumber[], int n){
	int m = n, decimal = 0;
	for (int i = 0; i < n; i++){
		cin >> binaryNumber[i];
	}
	for (int i = 0; i < n; i++){
		decimal += ((int)binaryNumber[i] - 48)* pow(2,m-1);
		m--;
	}
	return decimal;
}

void decConvertBin(int dec){
	while (dec >= 1){
		int r = dec % 2;
		dec /= 2;
		cout << r;
	}
}

int main(){
	int n, decimal;
	//cin >> n;
	//char binary[n];
	cin >> decimal;
	decConvertBin(decimal);
	
}
