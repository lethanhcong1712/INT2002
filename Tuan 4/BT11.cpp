# include <iostream>
# include <cstring>
# include <string>
# include <iomanip>

using namespace std;

void readString(string pass[] , int n);
void printSize(string pass[], int n);
void reverseString(string pass[], int n);

int main(){
	int n;
	cin >> n;
	if (n < 1 || n > 100){
		return 0;
	}
	string pass[n];
	readString(pass, n);
	reverseString(pass, n);
	printSize(pass, n);
}

void readString(string pass[] , int n){
	for ( int i = 0; i < n; i++){
		cin >> pass[i];
		while (pass[i].length() % 2 == 0){
			cin >> pass[i];
		}
	}
}

void reverseString(string pass[], int n){
	for ( int i = 0; i < n; i++){
		for (int k = pass[i].length() - 1; k >=0 ; k--){
			cout << pass[i][k];
		}
		cout << endl;
	} 
}

void printSize(string pass[], int n){
	for ( int i = 0; i < n; i++){
		cout << pass[i].length() << setw(4) << pass[i][ ( pass[i].length() )/2 + 1 ] << endl;
	}
}


