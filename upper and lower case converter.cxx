#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void upper(string s){
	for(int i=0;i<s.size();i++){
		if( s[i] >= 'a' && s[i]<='z'){
			s[i]=s[i]-32;}
	}
	cout<<s<<endl; 
}
void lower(string s){
	for(int i=0;i<s.size();i++){
		if( s[i] >= 'A' && s[i]<='Z'){
			s[i]=s[i]+32;}
	}
	cout<<s<<endl;
}		



int main(){
	upper("harish");
	lower("HARISH");
	string s = "harish";
	string s1="HARISH";
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	cout<<s1;
	
	return 0;
	
	
	
}