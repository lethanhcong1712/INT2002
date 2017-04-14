# include <iostream>
# include <cstring>
# include <cmath>
# include <cstdlib>

using namespace std;

int mirrorNumber(int a, int b);

int main(){
	int testCase, a, b;
	cin >> testCase;
	
	if ( testCase < 1 || testCase > 100){
		exit(1);
	}
	
	else{
		for (int i = 1; i <= testCase; i++){
			cin >> a >> b;
			
			if ( a < 0 || b < 0 || a > pow(10,5) || b > pow(10,5) || a > b){
				exit(1);
			}
			
			else{
				mirrorNumber(a,b);
				cout << mirrorNumber(a,b) << endl;
				
			}
		}
	}
	return 0;
}

int mirrorNumber(int a, int b){
	int count = 0, i = a;
	char str[10000];
	for (i = a; i <=b; i++){
		itoa(i, str, 10);		// Ham itoa chuyen so nguyen thanh chuoi ( trong cstdlib>
		
		for (int k = 1, j = strlen(str) - 1; k <= strlen(str)/2; k++, j--){
			if((str[k] != str[k-1]) || (str[j] != str[j-1])){
				break;
			}
			count ++;
		}
	}
	return count;
}
