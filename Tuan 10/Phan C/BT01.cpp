# include <iostream>
# include <cstring>

using namespace std;

struct String
{
	char *arr;
	int length;

	String(const char* _s){
		length = strlen(_s);
		arr = new char[length];
		for (int i = 0; i < length; i++){
			arr[i] = _s[i];
		}
		arr[length] = '\0';
	}
	
	void print(){
		cout << arr << endl;
	}
	void append(const char * _s){
		for(int i = length; i < length + strlen(_s); i++){
			 arr[i] = _s[i - length];	
		}	
		arr[ length + strlen(_s)] = '\0'; 
	}
	~String() {
		delete [] arr;
	}
	
};

int main(){
	String greeting("Hi");
	greeting.append(" there");
	greeting.print();
}