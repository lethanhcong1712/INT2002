# include <iostream>
# include <cmath>

using namespace std;

void readArray(float a[], int n);
float averageArray(float a[], int n);
float sigma(float a[], int n, float average);

int main(){
	int n;
	cin >> n;
	float arr[n];
	readArray(arr, n);
	float aver = averageArray(arr, n);
	cout << averageArray(arr, n) << endl;
	
	float Sigma = sigma(arr, n , aver);
	cout << Sigma;
	return 0;
	
}

void readArray(float a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

float averageArray(float a[], int n){
	float sum = 0;
	for (int i = 0; i < n; i++){
		sum += a[i];
	}
	return (float)sum / (float)n;
}

// Ham tinh phuong sai
float sigma(float a[], int n, float average){ 
	float sumSigma = 0;
	for ( int i = 0; i < n; i++){
		sumSigma += pow( (a[i] - average), 2 );
	}
	return (float)sumSigma / (float)n;
}

