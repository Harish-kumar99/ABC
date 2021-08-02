#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
	int p=s.length();
	int l =(s.length())/2;
	for(int i=0;i<l;i++){
		if(s[i]!=s[p-1-i]){
			return 0;}}
	return 1;
	
	
}

int main() {
	string s = "abba";
	cout<<ispalindrome(s);
	return 0;
}
