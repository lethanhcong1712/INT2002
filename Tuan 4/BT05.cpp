# include <iostream>

using namespace std;

void readArray(int a[], int n);
int scanArray(int a[], int n);

int main(){
	int a[10000], n;
	cin >> n;
	if ( n <= 0 || n > 10000){
		return 0;
	}
	readArray(a, n);
	scanArray(a, n);
	return 0;
}

void readArray(int a[], int n){
	for ( int i = 0; i < n; i++){
		cin >> a[i];
	}
}

int scanArray(int a[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int k = i + 1; k < n ; k++){
			if ( a[i] + a[k] == 0){
				cout << a[i] << " " << a[k];
				return 0;
			}
		}
	}
	cout << "No" << endl;
}
