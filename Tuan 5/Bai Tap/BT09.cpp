# include <iostream>
# include <cstdlib>
# include <ctime>
# include <limits>

using namespace std;

int random(int n){
	srand(time(NULL));
	int x = rand() % (INT_MIN + n)+ INT_MIN;
	return x;
}

int main(){
	int n;
	cin >> n;
	random (n);
	cout << random(n);
	return 0;	
}
