# include <iostream>
# include <ctime>
# include <cstdlib>
# include <iomanip>

using namespace std;

int turtleRun(int stepTurtle[] );
int rabbitRun(int stepRabbit[] );

int main(){
	srand(time(0));
	int stepTurtle[] = {3,1,-6};
	int stepRabbit[] = {0,9,-12,1,-2};
	int sTurtle = 0, sRabbit = 0;
	cout << "Start Racing !!!" << endl;
	cout << endl;
	while ( sTurtle < 69 && sRabbit < 69){
		cout << "Start: 0 and Finish: 69 " << endl;
		sTurtle += turtleRun(stepTurtle);
		sRabbit += rabbitRun(stepRabbit);
		
		if (sTurtle < 0) 	sTurtle = 0;
		if (sRabbit < 0)	sRabbit = 0;
		cout << "Turtle's position: " << sTurtle << "    " << "Rabbit's position: " << sRabbit << endl;
		cout << endl;
	}
	if (sTurtle > sRabbit){
		cout << "Turtle Win !" << endl << "Finish Racing"; 
	}
	else{
		cout << "Rabbit Win !" << endl << "Finish Racing" << endl;
	}
	system("pause");
	return 0;
}

int turtleRun(int stepTurtle[] ){
	int x = rand() % 100 + 1;
	if ( x <= 50){
		return stepTurtle[0];
	}
	else if ( x <= 80){
		return stepTurtle[1];
	}
	else{
		return stepTurtle[2];
	}
}

int rabbitRun(int stepRabbit[] ){
	int x = rand() % 100 + 1;
	if ( x <= 20){
		return stepRabbit[0];
	}
	else if ( x <= 40 ){
		return stepRabbit[1];
	}
	else if ( x <= 50){
		return stepRabbit[2];
	}
	else if ( x <= 80){
		return stepRabbit[3];
	}
	else{
		return stepRabbit[4];
	}
}
