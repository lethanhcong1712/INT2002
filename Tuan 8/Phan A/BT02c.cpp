# include <iostream>

using namespace std;

int main(){
	double a[4] = {1.1, 2.2, 3.3, 4.4};	
	double *cp = a;
	for (; cp < a + 4; cp++){
		cout << cp << " : " << *cp << endl;
	}
}
