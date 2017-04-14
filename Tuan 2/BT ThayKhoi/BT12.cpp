# include <iostream>
# include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	if (sqrt(n) == (int)sqrt(n)){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}
