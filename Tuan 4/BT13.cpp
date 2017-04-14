# include <iostream>

using namespace std;

void readArray(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
		while ( a[i] < 1 || a[i] > 20000){
			cin >> a[i];
		}
	}
}
int sum(int a[], int n){
	int sumLeft,sumRight;
	for (int i = 0 ; i < n; i++){
		if (i == 0){
			sumLeft = 0;
		}
		else{
			for (int j = i - 1; i >= 0; j--){
				sumLeft = sumLeft + a[j];
			}	
		}
		
		if (i == n - 1){
			 sumRight = 0;
		}
		else{
			for (int k = i + 1; k < n; k++){
				sumRight = sumRight + a[k];
			}
		}
	
		if (sumLeft == sumRight){
			cout << "YES";
			return 0;
		}
		sumLeft = 0;
		sumRight = 0;
	}
	cout << "NO";
	return 0;
}
int main(){
	/*int test;
	cin >> test;
	if ( test < 1 || test > 10){
		return 0;
	}*/
	int n;
	cin >> n;
	int a[n];
	readArray(a, n);
	sum(a,n);
	/*for ( int i = 0; i < test; i++){
		int n;
		cin >> n;
		if (n < 1 || n > 100000){
			return 0;
		}
		int a[n];
		readArray(a, n);
		sum(a,n);
	}*/
	return 0;
}
