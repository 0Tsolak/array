#include <iostream>
using namespace std;



int main(){
	int arr[7]={3,4,5,6,7,8,9};
	for(int i=0; i<=9; i++){
		for(int x =arr[i]; x<=9; x++){
			if(arr[i] + x == 12){
				cout << arr[i] << " + " << x << " = " << arr[i] + x  << endl;	
			
			}
		
		}


	
	}
	return 0;
}
