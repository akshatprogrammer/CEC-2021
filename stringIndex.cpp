#include<iostream>
using namespace std;
int main(){
	string s="abcdef";
	int arr[6]={3,1,0,2,4,5};
	string res;
	for(int i=0;i<6;i++)
		res[arr[i]]=s[i];
		
	for(int i=0;i<6;i++)
		cout << res[i];
}
