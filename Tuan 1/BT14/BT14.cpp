# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	int The_Mot = rand() % 101 + 0;
	int The_Hai = rand() % 101 + 0;
	int The, Chon_The;
	cout << "Moi ban nhap so the 1 hoac 2 de duoc xem the" <<endl;
	cin >> The;
	
	if (The == 1){
		cout << The_Mot <<endl;
	}
	else if (The == 2){
		cout << The_Hai <<endl;
	}
	else{
		return 0;
	}
	
	cout << "Ban chon the nao ? 1 hay 2" <<endl;
	cin >> Chon_The;
	
	if (Chon_The == 1){
		if (The_Mot > The_Hai){
			cout << "Ban da thang";
			return 0;
		}
		else{
			cout << "Ban da thua";
		}
	}
	else if (Chon_The == 2){
		if (The_Mot < The_Hai){
			cout << "Ban da thang";
			return 0;
		}
		else{
			cout << "Ban da thua";
		}
	}
	else{
		return 0;
	}
	return 0;
}
