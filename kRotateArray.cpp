#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(int s,int e,int *a){
	int pos=s;
	for(int i=0;i<(e-s)/2;i++){
		swap(&a[pos],&a[e-i-1]);
		pos++;
	}
}
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int temp[9];
	int index=0;
	int k;
	cin >> k;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			temp[index++]=arr[i][j];
	}
	reverse(0,9-k,temp);
	reverse(9-k,9,temp);
	reverse(0,9,temp);	
	index=0;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			arr[i][j]=temp[index++];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}	
	
}
