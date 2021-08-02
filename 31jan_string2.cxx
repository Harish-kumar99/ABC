#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = "coding";
	int l=s.length();
	string news ="";
	for(int i=l;i>=0;i--){
		
		news.push_back(s[i]);}
	cout<<news;	
		
	return 0;}