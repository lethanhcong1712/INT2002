# include <iostream>
# include <string>

using namespace std;

void Array(int a[]){
	cout << "Adress of array a in function Array: " << a << endl;
}

void String(string word){
	cout << "Adress of string in fuction String: " << &word << endl;
}

int main(){
	int a[100];
	string word;
	cout << "Adress of array a in function Main: " << a << endl;
	cout << "Adress of string in fuction Main: " << &word << endl;
	Array(a);
	String(word);
	return 0;
}
// a) mang duoc truyen vao ham theo kieu tham chieu
// b) string duoc truyen vao ham theo kieu tham tri
