# include <iostream>
# include <cstring>

using namespace std;

int main(){
	string fibo[11];
	fibo[0] = "a";
	fibo[1] = "b";
	for(int i=2; i < 11 ; i++){
		fibo[i] += fibo[i-1] + fibo[i-2]; // cong chuoi
	}
	for(int i=0; i < 11; i++){
		cout << fibo[i] <<endl;
	}
}
