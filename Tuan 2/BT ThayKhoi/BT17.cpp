# include <iostream>

using namespace std;

int main(){
	float sub1, sub2, sub3, sub4, sub5;
	cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
	
	if (sub1 < 0 || sub1 > 10 || sub2 < 0 || sub2 > 10 || sub3 < 0 || sub3 > 10 || sub4 < 0 || sub4 > 10 || sub5 < 0 || sub5 > 10 ){
		exit(1);
	}
	
	else{
		cout << (sub1 + sub2 + sub3 + sub4 +sub5) /5 << endl;
	}
	
	return 0;
}
