# include <iostream>

using namespace std;

void readArray (int *a, int n);
int binarySearch(int *a, int n, int key);

int main(){
	int n, key;
	cin >> n;
	int a[n];
	cin >> key;
	readArray(a,n);
	binarySearch(a,n,7);
}

void readArray (int *a, int n){
	int *ptr = a;
	for (; ptr < a + n; ptr++){
		cin >> *ptr;
	}
}

int binarySearch(int *a, int n, int key){
	int *p = a;
	int low = 0, high = n - 1, flag = 0;
	while (low <= high){
		int mid = (low + high) / 2;
		if ( *(p + mid) == key){
			flag ++;
			cout << "Yes" << endl;
			return 0;
		}
		else if ( *(p + mid) < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	if ( flag == 0){
		cout << "No";
	}
	return 0;
}
