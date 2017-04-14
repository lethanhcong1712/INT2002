# include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Tong so mon hoc can tinh: " ;
	cin >> n;
	float bangDiem[n];
	float diem, heSo[n], tongHeSo = 0, sum =0;
	
	for ( int i = 0; i < n; i++){
		cout << "Diem mon hoc " << i + 1 << ": ";
		cin >> bangDiem[i];
		
		if (bangDiem[i] < 0 || bangDiem[i] > 10){
			cout << "Nhap lai diem mon " << i + 1 << ": ";
			cin >> bangDiem[i];
		}
		
		cout << "He so mon hoc " << i + 1 << ": ";
		cin >> heSo[i];
		
		if (heSo[i] != 1 && heSo[i] != 1.5 && heSo[i] != 2.0 && heSo[i] != 2.5 && heSo[i] != 3.0){
			cout << "Nhap lai he so mon " << i + 1 << ": ";
			cin >> heSo[i]; 
		}
	}
	
	cout << "Tong so mon la " << n << endl;
	
	for (int i = 0; i < n; i++){
		tongHeSo += heSo[i];
	}
	cout << "Tong he so la: " << tongHeSo << endl;
	
	for (int i = 0; i < n; i++){
		sum += bangDiem[i] * heSo[i];
	}
	
	cout << "Diem trung binh " << n << " mon la: " << sum / tongHeSo << endl;
	return 0;
}
