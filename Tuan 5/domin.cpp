# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

void randomMap(char matrix[][10], unsigned int m, unsigned int n, unsigned int K); // Tao ban do ngau nhien voi K qua boom
void creat_hiden_map(char hindenTable[][10], unsigned int m, unsigned int n);
void printBoom(char matrix[][10], unsigned int m, unsigned int n);				 // In ban do boom
void calculator(char matrix[][10], unsigned int m, unsigned int n);				// Tinh toan cac qua min xung quanh cac o khong co min
void print_hiden_map(char matrix[][10],char hidenTable[][10], int X[], int Y[],unsigned int m, unsigned int n, unsigned int x, unsigned int y, int count); // in Bang ra khi chon phai o ko co boom


int main()
{
	unsigned int m,n,K;
	int count = 0;
	cout << "Please import numbers of row and numbers of column in Map:" << endl;
	cin >> m >> n;
	cout << "How many are there booms ? Please you import: " << endl;
	cin >> K;
	if ( m > 10 || n > 10 || K > m*n)
	{
		return 0;
	}
	char matrix[10][10];
	char hidenTable[10][10];
	
	creat_hiden_map(hidenTable,m,n);
	randomMap(matrix,m,n,K);
	calculator(matrix,m,n);
	
	while(1)
	{
		int X[m*n], Y[m*n];
		unsigned int x, y;
		cout << "Please import X and Y: ";
		cin >> x >> y;
		//cout << "count = " << count << endl;
		//cout << endl;
		// Khong cho nguoi choi nhap lai toa do x,y da nhap
		if (count > 0)
		{
			for (int i = 0; i < count; i++)
			{
				while (x == X[i] && y == Y[i])
				{
					cout << "You are imported this value. Please import X, Y again: ";
					cin >> x >> y;
				}
			}
		}
		
		X[count] = x, Y[count] = y;
		if (x > m || y > n)
		{
			return 0;
		}
		
		if (matrix[x][y] == '*') // Chon trung o co boom
		{
			cout << "YOU'RE DEAD" << endl;
			printBoom(matrix,m,n);
			return 0;	
		}
		
		else					// chon duoc o khong co boom
		{
			count ++;
			print_hiden_map(matrix,hidenTable,X,Y,m,n,x,y,count);
		}
		if (count >= m*n - K)  // Dieu kien thang Game
		{
			cout << "YOU WIN" << endl;
			printBoom(matrix,m,n);
			return 0;
		}
	}
	
}

void randomMap(char matrix[][10], unsigned int m, unsigned int n, unsigned int K)
{
	int count = 1;
	srand(time(NULL));
	for (int row = 0; row < m; row++)
	{
		for (int column = 0; column < n; column++){
			int random = rand() % 100; 
			if (random % 2 != 0)
			{
				matrix[row][column] = '*';
				count++;
			}
			else
			{
				matrix[row][column] = '0';
			}
			if ( count > K + 1)
			{
				matrix[row][column] = '0';
			}
		}
	}
}

void creat_hiden_map(char hindenTable[][10], unsigned int m, unsigned int n){
	for (int row = 0; row < m; row++){
		for (int column = 0; column < n; column++){
			hindenTable[row][column] = '-';
		}
	}
}

void calculator(char matrix[][10], unsigned int m, unsigned int n){
	for (int row = 0; row < m; row++)
	{
		for (int column = 0; column < n; column++)
		{
			if ( matrix[row][column] == '*')
			{
				if (matrix[row][column + 1] != '*')
					matrix[row][column + 1]++;
					
				if (matrix[row][column - 1] != '*')
					matrix[row][column - 1]++;
					
				if (matrix[row + 1][column + 1] != '*')
					matrix[row + 1][column + 1]++;
					
				if (matrix[row + 1][column] != '*')
					matrix[row + 1][column]++;
					
				if (matrix[row + 1][column - 1] != '*')
					matrix[row + 1][column - 1]++;
					
				if (matrix[row - 1][column + 1] != '*')
					matrix[row - 1][column + 1]++;
					
				if (matrix[row - 1][column - 1] != '*')
					matrix[row - 1][column - 1]++;
					
				if (matrix[row - 1][column] != '*')
				 	matrix[row - 1][column]++;
			}
		}
	}
}

void printBoom(char matrix[][10], unsigned int m, unsigned int n)
{
	for (int row = 0; row < m; row++)
		{
		for (int column = 0; column < n; column++)
		{
			cout << matrix[row][column] << " ";
		}
			cout << endl;
	}
}

void print_hiden_map(char matrix[][10], char hidenTable[][10],int X[], int Y[],unsigned int m, unsigned int n, unsigned int x, unsigned int y, int count)
{
	for (int r = 0; r < m; r++)
	{
		for (int c = 0; c < n; c++)
		{
			
			for (int index = 0; index < count; index++){
				if ( r == X[index] && c == Y[index]){
					hidenTable[r][c] = matrix[r][c];
				}
			}
			cout << hidenTable[r][c] << " ";
		}
		cout << endl;
	}
}

