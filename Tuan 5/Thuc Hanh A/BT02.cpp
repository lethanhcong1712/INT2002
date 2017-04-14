# include <iostream>

using namespace std;

int fatorial(int x){
	//cout << "x = " << x << " "<< "at " << &x<< endl; 
	printf ("%d\n", &x);
	if ( x > 1){
		return x * fatorial(x-1);
	}
	else{
		return 1;
	}
	
}

int main(){
	int x;
	cin >> x;
	fatorial (x);
	cout << fatorial (x);
}
