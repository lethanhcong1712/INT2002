# include <iostream>

using namespace std;

void readArray(int a[], int n);
int count_numbers(int a[], int n, int key);

int main(){
	int n;
	cin >> n;
	int array[n];
	readArray(array, n);
	for ( int index = 0; index < 10; index++){
		cout << index << " has: " << count_numbers(array, n, index) << " numbers" << endl;
	}
	return 0;
}

void readArray(int a[], int n){
	for ( int i = 0; i < n; i++){
		cin >> a[i];
		
		if ( a[i] < 0 || a[i] > 9){
			cin >> a[i];
		}
	}
}

int count_numbers(int a[], int n, int key){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == key){
			count ++;
		}
	}
	return count;
}


