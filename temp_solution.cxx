#include<iostream>
#include<string>
using namespace std;
void rev(string s1){
	string s =s1;
	int l=s.length();
	string news ="";
	for(int i=l;i>=0;i--){
		
		news.push_back(s[i]);}
	cout<<news;
			
		
	}
	
int main(){
	string s2 = "hey this is a sentense ";
	string s3="";
	int i;
	int prev=0;
	for(i=0; i<s2.length();i++){
		string space=" ";
		
		if(s2[i]==space[0]){
			
	
			for(int j=i-1;j>=prev;j--){
				s3.push_back(s2[j]);
				
			}
			s3.push_back(' ');
			prev=i+1;
				
			
				
				
		}}
		
	rev(s3);	
	return 0;}	