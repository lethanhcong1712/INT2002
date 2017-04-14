# include <iostream>

using namespace std;

int function(int a[]){
	return sizeof(a);
}

int f(int a[100]){
	return sizeof(a);
}

int main(){
	int a[100];
	cout << sizeof(a) << endl; 		// 400
	cout << function(a) << endl;	// 8	
	cout << f(a);					// 8
}
