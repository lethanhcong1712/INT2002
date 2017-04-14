# include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int array[N], Max, Min;
	int S=0;
	for (int i=0; i < N; i++){
		cin >> array[i];
	}
	Max = array[0];
	Min = array[0];
	for (int i=1; i < N; i++){
		if (array[i] > Max){
			Max = array[i];
		}
	}
	
	for (int i=1; i < N; i++){
		if (array[i] < Min){
			Min = array[i];
		}
	}
	
	for(int i=0; i < N; i++){
		S += array[i];
	}
	cout << Max << endl;
	cout << Min << endl;
	cout << (double) (S) / N;
	return 0;
}
