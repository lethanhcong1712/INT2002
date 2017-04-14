# include <iostream>
# include <cmath>

using namespace std;

void readArray(int a[],int b[], int n);
int scanArray(int Ox[],int Oy[], int n);

int main(){
	int n;
	cin >> n;
	if ( n < 1 || n > 10000){
		return 0;
	}
	int Ox[n], Oy[n];
	readArray(Ox, Oy, n);
	scanArray(Ox, Oy, n);
	
}

void readArray(int a[],int b[], int n){
	for ( int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
}

int scanArray(int Ox[],int Oy[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int k = i + 1; k < n ; k++){
			if (Ox[k] == Ox[i] || Oy[k] == Oy[i] || (Ox[k] - Ox[i] == Oy[k] - Oy[i]) ){ // An thang, an ngang, an cheo
				cout << "Yes";
				return 0;
			}
		}
	}
	cout << "No" << endl;
}
