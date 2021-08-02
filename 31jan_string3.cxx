#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = "ababccccabaaab";
	string news="";
	int l=s.length();
	for(int i =0;i<l;i++){
		if(s[i]!='b'){
			news.push_back(s[i]);
			}}
	cout<<news;		
			
			
			
		
	return 0;}