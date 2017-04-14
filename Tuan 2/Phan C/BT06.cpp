# include <iostream>
# include <cmath>

using namespace std;

int main(){
	unsigned int n;
	cin >> n;
	if (n >= 100 || n<= 0){
		exit(1);
	}
	else{
		int arr[n][n];
		for(int i=0; i < n; i++){
			for(int k=0; k < n; k++){
				arr[i][k] = k + i + 1;
				if (arr[i][k] > 10){
					arr[i][k] -= 10;
				}
				cout << arr[i][k];
			}
			cout <<"\n";
		}
		
	}
}
