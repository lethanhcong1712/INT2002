# include <iostream>

using namespace std;

int main(){
	int hour, pay;
	cin >> hour;
	
	if ( hour <= 100){
		cout << "You are paid : " << hour * 12000 << "VND" << endl; 
	}
	else if ( hour <= 150){
		pay = (hour - 100) * 16000 + 100 * 12000; 
		cout << "You are paid: " << pay << "VND" << endl;
	}
	else if (hour > 150 && hour < 200){
		pay = (hour - 150) * 20000 + 50 * 16000 + 100 * 12000;
		cout << "You are paid: " << pay << "VND" << endl;
	}
	else{
		pay = (hour - 200) * 25000 + 50 * 36000 + 100 * 12000;
		cout << "You are paid: " << pay << "VND" << endl;
	}
	return 0;
}
