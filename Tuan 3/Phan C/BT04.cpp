# include <iostream>

using namespace std;

int main(){
	unsigned int m,n;
	cin >> m >> n;
	char boom[m][n];
	
	if ( m > 10 || n > 10){
		exit(1);
	}
	
	// Nhap ban do boom kich thuoc M x N ( * and .)
	for (int row = 0; row < m ; row++){
		for (int colum = 0; colum < n; colum ++){
			cin >> boom[row][colum];
			if ( boom[row][colum] != '*' && boom[row][colum] != '.'){
				cin >> boom[row][colum];
			}
		}
	}
	
	int count = 0;
	// Duyet qua tung o cua ban do
	for (int row = 0; row < m ; row++){
		for (int colum = 0; colum < n; colum ++){
			if( boom[row][colum] == '*' ){
				cout << boom[row][colum] << " ";
			}
			else{
				// Quet cac O xung quanh de xem xung quanh co bao nhieu boom va in ra so boom xung quanh
				count = 0;
				if ( boom[row][colum + 1] == '*' && colum + 1 < n )
					count ++;
				if ( boom[row][colum - 1] == '*' && colum - 1 >= 0)
					count ++;
				if ( boom[row-1][colum] == '*' && row - 1 >= 0)
					count ++;
				if ( boom[row + 1][colum] == '*' && row + 1 < m)
					count ++;
				if ( boom[row - 1][colum - 1] == '*' && row - 1 >= 0 && colum - 1 >= 0)
					count ++;
				if ( boom[row - 1][colum + 1] == '*' && row - 1 >= 0 && colum + 1 < n )
					count ++;
				if ( boom[row + 1][colum - 1] == '*' && row + 1 < m && colum - 1 >= 0)
					count ++;
				if ( boom[row + 1][colum + 1] == '*' && row + 1 < m && colum + 1 < n)
					count ++;
					
				cout << count << " ";
			}

		}
		cout << "\n";
	}
	
	
	return 0;
}
