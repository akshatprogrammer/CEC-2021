#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void bubblesort(int *s,int *f,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n-i-1;j++){
			if(f[j]>f[j+1]){
				swap(&s[j],&s[j+1]);
				swap(&f[j],&f[j+1]);
			}
		}
	}
}
int main(){
	int s[10]={1,2,3,4,7,8,9,9,11,12};
	int f[10]={3,5,4,7,10,9,11,15,12,14};
	bubblesort(s,f,10);
	for(int i=0;i<10;i++){
		cout << s[i] << "	|  ";
	}cout << endl;
	for(int i=0;i<10;i++){
		cout << f[i] << "	|  ";
	}cout << endl;
	cout << "--------------------------------" <<endl;
	int count=1,j=0;
	cout << "A0" << " ";
	for(int i=1;i<10;i++){
		if(s[i]>=f[j]){
			count++;
			j=i;
			cout<<"A" << j << " ";
		}
	}
	cout <<endl;
	cout << "Count -> " << count << endl;
}
