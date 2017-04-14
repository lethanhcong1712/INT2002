# include <iostream>

using namespace std;

int kiemTra(int k, int n);
int fatorial(int x);

int main(){
	int k,n;
	cin >> k >> n;
	kiemTra(k,n);
	if (kiemTra(k,n) == 1){
		return 1;
	}
	int C = fatorial(n) / (fatorial(k) * fatorial(n-k));
	cout << C;
}

int kiemTra(int k, int n){
	if ( k < 0 || n < 0 || k > n || n > 20){
		return 1;
	}
	else{
		return 0;
	}
}

int fatorial(int x){
	if (x > 1){
		return x*fatorial(x-1);
	}
	else{
		return 1;
	}
}
