#include<iostream>
#include<string>
using namespace std;
int main(){
	string s ="";
	getline(cin,s);
	int l=s.length();
	string news ="";
	for(int i=l;i>=0;i--){
		
		news.push_back(s[i]);}
	cout<<news;
			
		
	return 0;}