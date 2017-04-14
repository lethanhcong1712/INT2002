# include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x <=0){
		cout << "No";
		return 0;
	}
	for (int i=2; i < x/2; i++){
		if ( x % i == 0){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
