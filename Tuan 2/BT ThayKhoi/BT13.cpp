# include <iostream>
# include <cmath>

using namespace std;

void nguyenTo(int a);
void chinh_phuong(int n);
void hoan_hao(int a);

int main(){
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++){
		chinh_phuong(i);
	}
	cout << "\n";
	for ( int i = 2; i <=n; i++){
		hoan_hao(i);
	}
}

void chinh_phuong(int n){
	if ((float)sqrt(n) == (int)sqrt(n)){
		cout << n << endl;
	}
}

void nguyenTo(int a){
	int i = 2;
	for ( i = 2; i < a/2; i++){
		if (a % i == 0){
			
		}
	}
}

void hoan_hao(int a){
	int i = 1, sum  = 0;
	for ( i = 1; i < a; i++){
		if (a % i ==0){
			sum += i;
		}
	}
	if (sum == a){
		cout << a << endl;
	}
}
