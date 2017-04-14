# include <iostream>

using namespace std;

int main(){
	int n;
	int array[1000];
	array[0] = 1, array[1] = 1;
	cin >> n;
	cout << array[0] << "\n" << array[1] << endl;
	for (int i = 2; i <= n; i++){
		if ( array[i-1] + array[i-2] >= n){
			break;
		}
		array[i] = array[i-2] + array[i-1];
		cout << array[i] << endl;
		if ( n == array[i]){
			cout << "Yes" << endl;
			break;
		}
	}
	return 0;
}
