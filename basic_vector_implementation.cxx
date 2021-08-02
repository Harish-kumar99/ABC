#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<int> v1;
	v1.push_back(9);
	v1.push_back(20);
	v1.push_back(90);
//iterator 	
	vector<int> :: iterator itr;
	itr=v1.begin();
	for(itr;itr!=v1.end();itr++){
		cout<<*itr<<endl;}
//at size 
	for(int i=0;i<v1.size();i++){
		cout<<v1.at(i)<<endl;
	}
		
		
		
		
		
	return 0;}	

	