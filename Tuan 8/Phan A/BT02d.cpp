# include <iostream>


using namespace std;

int main(){
	double a[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	double *cp = a;
	for (; cp < a + 10; cp +=3){
		cout << cp << " : " << *cp << endl;	// cp nhay 16 bytes moi lan cp += 2
	}
}
