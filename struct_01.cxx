#include<iostream>
using namespace std;
struct recatangle {
	int length;
	int width;
};
int main(){
	struct recatangle rec;
	rec.length=10;
	rec.width=20;
	int area=rec.length*rec.width;
	cout<<"area : "<<area;
	return 0;}