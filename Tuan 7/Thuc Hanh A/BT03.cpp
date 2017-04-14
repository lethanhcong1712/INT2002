# include <iostream>

using namespace std;

int count_even(int *a, int n){
	int *p = a;
	int count = 0;
	for (; p < a + n; p++){
		if ( *p % 2 == 0){
			count ++;
		}
	}
	return count;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	count_even(a,15);
	cout << count_even(a,15);
}
