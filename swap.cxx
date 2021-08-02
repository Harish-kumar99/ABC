#include<iostream>
using namespace std;
int swap(int x ,int y){
	int i;
	i = x;
	x=y;
	y=i;
	cout<<x<<"  "<<y;}

int main(){
	swap(8,9);}