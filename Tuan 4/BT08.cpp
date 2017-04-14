# include <iostream>

using namespace std;

void readArray(float a[], int n);
void bubble_sort(float a[], int n);


int main(){
	int n;
	cin >> n;
	if ( n < 1 || n > 10000){
		return 0;
	}
	
	float boy[n], girl[n];
	readArray(boy,n);
	readArray(girl,n);
	bubble_sort(boy, n);
	bubble_sort(girl, n);
	
	for ( int i = 0; i < n; i++){
		if ( boy[i] <= girl[i] ){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}

void readArray (float a[], int n){
	for ( int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void bubble_sort (float a[], int n){
	for ( int i = 0; i < n - 1; i++){
		for ( int k = 0; k < n - i - 1; k++){
			if (a[k] > a[k+1]){
				float temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
}
