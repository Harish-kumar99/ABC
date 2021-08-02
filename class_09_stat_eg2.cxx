#include<iostream>
using namespace std;
struct ract {
	int len,wid;
	ract(int l,int w){
		len=l;
		wid=w;}
	void display(){
		int area=len*wid;
		cout<<"area : "<<area;}	
		
};
int main(){
	struct ract r1(12,12);
	r1.display();
	return 0;}