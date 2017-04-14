# include <iostream>
# include <ctime>
# include <cstdlib>

using namespace std;

void writeArray(int a[], int n);
void condition(int a[], int n);  // Duyet to hop 3 phan tu: nC3

int main(){
	int n;
	cin >> n;
	int a[n];
	writeArray(a,n);
	condition(a,n);
	return 0;
}

void writeArray(int a[], int n){
	srand(time(NULL));
	for (int i = 0; i < n; i++){
		a[i] = rand() % 50;
	}
}

void condition(int a[], int n){
	for (int i = 0; i < n - 2; i++){
		for (int k = i + 1; k < n - 1; k++){
			for (int j = k + 1; j < n; j++){
				if ( (a[i] + a[k] + a[j]) % 25 == 0 ){
					cout << a[i] << " " << a[k] << " " << a[j] << endl;
				}
			}
		}
	}
}
