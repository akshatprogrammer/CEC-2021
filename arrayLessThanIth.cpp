#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	
	sort(arr,arr+n);
//	int a[n];
	for(int i=0;i<n;i++){
		int pos=i;
		if(arr[i-1]==arr[i]){
			arr[i]=i;
			arr[i+1]=i;
//			i++;
		}
		else
			arr[i]=pos;
	}
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
}
