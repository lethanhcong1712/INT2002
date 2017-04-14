# include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
};

Point mid_point(const Point p1, const Point p2){
	Point mid;
	mid.x = (p1.x + p2.x)/2;
	mid.y = (p1.y + p2.y)/2;
	return mid;
}

int main(){
	Point p1 ={1,2};
	Point p2 = {3,4};
	Point mid = mid_point(p1,p2);
	cout << mid.x << " " << mid.y << endl;
	return 0;
}