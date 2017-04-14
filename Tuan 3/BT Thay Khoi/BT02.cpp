# include <iostream>

using namespace std;

void readArray(int array[], int n);
int minMember(int array[], int n);
int maxMember(int array[], int n);
int sum_even_Number(int array[], int n);
int ollNumber(int array[], int n);

int main(){
	int n;
	cin >> n;
	int a[n];
	
	readArray(a,n);
	minMember(a,n);
	maxMember(a,n);
	sum_even_Number(a,n);
	ollNumber(a,n);
	
	cout << minMember(a,n) << endl;
	cout << maxMember(a,n) << endl;
	cout << sum_even_Number(a,n) << endl;
	cout << ollNumber(a,n) << endl;
	
}

void readArray(int array[], int n){
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
}

int minMember(int array[], int n){
	int min = array[0];
	for (int i = 1; i < n; i++){
		if ( array[i] < min){
			min = array[i];
		}
	}
	return min;
}

int maxMember(int array[], int n){
	int max = array[0];
	for (int i = 1; i < n; i++){
		if ( array[i] > max){
			max = array[i];
		}
	}
	return max;
}

int sum_even_Number(int array[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++){
		if ( array[i] % 2 == 0){
			sum += array[i];
		}
	}
	return sum;
}

int ollNumber(int array[], int n){
	int count = 0;
		for (int i = 0; i < n; i++){
			if ( array[i] % 2 != 0){
				count ++;
			}
		}
	return count;
}
