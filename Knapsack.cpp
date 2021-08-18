#include<iostream>
#include<algorithm>
using namespace std;
class knapsack{
	public:
		int item;
		int benefit;
		int weight;
		float bpw;
};
void input(knapsack items[],int sizeOfItems) {
   cout << "Enter total "<< sizeOfItems <<" item's values and weight" << endl;
   for(int I = 0; I < sizeOfItems; I++) {
      cout << "Enter "<< I+1 << " Benefit ";
      cin >> items[I].benefit;
      cout << "Enter "<< I+1 << " Weight ";
      cin >> items[I].weight;
   }
}
void display(knapsack items[], int sizeOfItems) {
   int i;
   cout << "Benefits: ";
   for(i = 0; i < sizeOfItems; i++) {
      cout << items[i].benefit << "\t";
   }
   cout << endl << "weight: ";
   for (i = 0; i < sizeOfItems; i++) {
      cout << items[i].weight << "\t";
   }
   cout << endl;
}
bool compare(knapsack i1, knapsack i2) {
   return (i1.bpw > i2.bpw);
}
float calculateMax(knapsack item[],int n,int W){
	float total_benefit=0;
	for(int i=0;i<n;i++){
		item[i].bpw = item[i].benefit/item[i].weight;
	}
	sort(item,item+n,compare);
	int i=0;
	while(W!=0){
		if(item[i].weight<=W){
			total_benefit+=item[i].benefit;
			W-=item[i].weight;
		}
		else{
			total_benefit+=(W*item[i].bpw);
			W=0;
		}
		i++;
	}
	return total_benefit;
}
int main(){

	int n,W;
	cin >> n;  // number of items;
	knapsack item[n];
	input(item,n);
	display(item,n);
	cout<< "Enter Knapsack weight \n";
	cin >> W;
    float mxVal = calculateMax(item, n, W);
    cout << "Max value for "<< W <<" weight is "<< mxVal;
		
	
}
