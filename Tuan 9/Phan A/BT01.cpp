# include <iostream>
# include <cstring>

using namespace std;

char* concat(const char* a, const char* b){
	char *p = new char[100];
	*p = a + b;
	return p;
	delete [] p;
}
int main(){
	char *ptr= concat("Hello","World");
	cout << *ptr << endl;
	return 0;
}