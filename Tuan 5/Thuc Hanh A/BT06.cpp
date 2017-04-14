# include <iostream>

using namespace std;

int searchDigit (int array[], int low, int high, int key);
int search_digit_recursion (int array[], int low, int high, int key);

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int low, high, key;
	cin >> low >> high >> key;
	searchDigit(array, low, high, key);
	search_digit_recursion (array, low, high, key);
	return 0;
}

int searchDigit(int array[], int low, int high, int key){
	while (low <= high){
		int mid = (low + high)/2;
		if ( array[mid] == key ){
			cout << "Yes" << endl;
			return 0;
		}
		else if ( key > array[mid]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	cout << "No";
	return 1;
}

int search_digit_recursion (int array[], int low, int high, int key){
	int mid = (high + low) / 2;
	if ( array[mid] == key){
		cout << "Yes";
		return 0;
	}
	else if ( array[mid] < key){
		low = mid + 1;
	}
	else{
		high = mid - 1;
	}
	if ( low >= high){
		cout << "No";
		return 1;
	}
	return search_digit_recursion (array ,low, high, key);
}
