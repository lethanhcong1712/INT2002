# include <iostream>

using namespace std;

int main(){
	while(1){
		int N;
		cin >> N;
		if (N >= 0 && N % 5 ==0){
			cout << N/5 <<endl;
		}
		else if ( N == -1){
			cout << "Bye!";
			break;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}
