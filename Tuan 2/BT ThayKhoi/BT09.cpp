# include <iostream >

using namespace std;

int sumOfNumbers (int a);

int main(){
	int a;
	cin >> a;
	cout << sumOfNumbers(a);
	return 0;
}

int sumOfNumbers (int a){
	int sum = 0, temp;
	while ( a > 0){
		temp = a % 10;
		a /= 10;
		sum += temp;
	}
	return sum;
}
