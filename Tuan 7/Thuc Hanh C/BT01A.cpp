# include <iostream>
# include <ctime>
# include <cstdlib>

using namespace std;

int gieoXucXac(int &x){
	x = rand() % 6 + 1;
	return x;
}

int main(){
	srand(time(NULL));
	int sum1 = 0, sum2 = 0;
	int n1,n2;
	while (sum1 != 100 && sum2 != 100){
		gieoXucXac(n1);
		sum1 += gieoXucXac(n1);
		cout << "Xuc xac nguoi choi 1: " << n1 << "    " << "Tong nguoi choi 1: " << sum1 << endl;
		gieoXucXac(n2);
		sum2 += gieoXucXac(n2);
		cout << "Xuc xac nguoi choi 2: " << n2 << "    " << "Tong nguoi choi 2: " << sum2 << endl;
	}
}
