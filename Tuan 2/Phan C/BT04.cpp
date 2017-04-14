# include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for(int k = 1; k < i; k++){
			cout << " ";
		}
		for(int j = 1; j <= n + 6 - 2*i; j++){
			cout << "*";
		}
		cout << "\n";
	}
}
	
