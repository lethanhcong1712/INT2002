# include <iostream>

using namespace std;

char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main(){
	weird_string();
	cout << weird_string();
}
 // Compiler Warning: address of local variable 'c' returned [- Wreturn-local-addr] 
