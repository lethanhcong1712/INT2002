# include <iostream>

using namespace std;

int main(){
	unsigned int x,y;
	cin >> x >> y;
	if (x > 10 || y > 10){
		exit(1);
	}
	unsigned int matrix[x][y];
	int root = 1;

	int left = 0, above = 0, right = y, under = x;

	while( root < x * y + 1 ){
		
		for ( int i = left; i < right; i++){
			if ( root < x * y + 1){
				matrix[above][i] = root++;
			}	
		}
		above ++;

		for ( int i = above; i < under; i++ ){
			if ( root < x * y + 1){
				matrix[i][right - 1] = root++;
			}	
		}
		right--;

		for (int i = right - 1; i >= left; i--){
			if ( root < x * y + 1){
				matrix[under - 1][i] = root ++;
			}
		}
		under --;
	
		for ( int i = under - 1; i >= above; i--){
			if ( root < x * y + 1){
				matrix[i][left] = root ++;
			}
		}
		left++;
	}

	
	for (int row = 0; row < x ; row++){
		for (int colum = 0; colum < y; colum ++){
			cout << matrix[row][colum] << " ";
		}
		cout << "\n";
	}
	return 0;
}

