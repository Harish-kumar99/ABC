#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



int main(){
	string s = "51324";
	sort(s.begin(),s.end(),greater<int>());
	cout<<s;
	
	
	
	
	return 0;
	
	
	
}