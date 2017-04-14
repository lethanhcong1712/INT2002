# include <iostream>
# include <cmath>

using namespace std;

int soNguyenTo(int n);
int tap_hop_nguyen_to(int n);

int main(){
	int n;
	cin >> n;
	int a = soNguyenTo(n);
	if ( a == 0){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	tap_hop_nguyen_to(n);
	return 0;
}

int soNguyenTo(int n){
	if ( n < 2){
		return 1;
	}
	for(int i = 2; i <= sqrt(n) ; i++){
		if ( n % i == 0){
			return 1;
		}
	}
	return 0;
}

int tap_hop_nguyen_to(int n){
	for (int  i = 2; i < n; i++){
		int x = soNguyenTo(i);
		if (x == 0){
			cout << i << endl;
		}
	}
}
