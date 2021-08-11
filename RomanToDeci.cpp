#include<iostream>
using namespace std;
int decimalValueReturn(char ch){
	switch(ch){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
	return -1;
}
void convertRoman(string s){
	int total=0,i=0;
	while(i<s.length()){
		int first=decimalValueReturn(s[i]);
		int second=decimalValueReturn(s[i+1]);
		if(first<second){
			total+=second-first;
			i+=2;
		}
		else{
			total+=first;
			i++;
		}
	}	
	cout << total;
}
int main(){
	string s;
	cin >>s;
	convertRoman(s);
	
}
