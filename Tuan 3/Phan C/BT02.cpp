# include <iostream>
# include <cstring>

using namespace std;

int main(){
	char str[100];
	cin.getline(str, 100);
	for (int i =0, k = strlen(str) - 1; i <= strlen(str)/2, k >= strlen(str)/2; i++, k--){
		if (str[i] != str[k]){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
