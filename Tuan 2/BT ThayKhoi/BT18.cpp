# include <iostream>

using namespace std;

int main(){
	float point[100], sum = 0;
	for (int i = 0; i < 100; i++){
		cout << "Diem mon hoc " << i + 1 << ": " <<endl;
		cin >> point[i];
		
		if (point[i] > 10){
			cout << "Nhap lai diem mon hoc " << i + 1 << "(tu 0 .. 10) " << endl;
			cin >> point[i];
		}
		
		if ( point[i] < 0){
			cout << "So mon hoc: " << i << endl;
			for(int k = 0; k < i; k++){
				sum += point[k]; 
			}
			cout << sum/i << endl;  // Tinh diem trung binh
			break;
		}
	}
	return 0;
}
