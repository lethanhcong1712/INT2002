# include <iostream>
# include <cmath>

using namespace std;

int main(){
	float height,weight;
	cin >> height >> weight;
	float BMI = (weight)/ pow(height,2);
	cout << BMI;
	return 0; 
	
}
