# include <iostream>

using namespace std;

void passByValue(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout << "Adress a and b in passByValue: " << &a << " " << &b << endl;
}

void passByReference(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	cout << "Adress a and b in passByReference: " << &a << " " << &b << endl;
}

int main(){
	int a = 3, b = 7;
	cout << &a << " " << &b << endl;
	passByValue(a,b);
	passByReference(a,b);
	return 0; 
}

// Dia chi bien a, b trong ham passByValue khac dia chi bien a, b trong ham main ==> a,b truyen bang tham tri chi la ban sao
// Dia chi bien a, b trong ham passByReference bang dia chi bien a, b trong ham main ==> a, b truyen bang tham chieu la chinh bien ay
