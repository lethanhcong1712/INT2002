# include <iostream>

using namespace std;

int main(){
	int a[4] = {1,2,3,4};
	int *cp = a;
	for (; cp < a + 4; cp++ ){
		cout << cp << " : " << (*cp) << endl;
	}
	return 0;
}
