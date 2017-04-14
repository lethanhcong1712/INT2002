# include <iostream>

using namespace std;

void tamGiac(int n){
	for(int row = 1; row <= n; row++){
		for (int i = 1; i <= n - row; i++){
			cout << " ";
		}
		for (int k = 0; k < 2*row - 1; k++){
			cout << "*";
		}
		cout << '\n';
	}
}

int main(){
	int n;
	cin >> n;
	tamGiac(n);
}
