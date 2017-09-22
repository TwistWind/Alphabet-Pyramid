/*
 試寫出一個程式輸出:
  A
  BC
  DEF
  GHUJ
*/

#include <iostream>
using namespace std;

int main(){
	int num ;
	while(1){
		cout<<"Number of layers:" ;
		cin>> num ;
		cout<<endl ;
	
		int k =0 ;
		for(int i=1;i<=num ;i++){
			for(int j =1 ;j<=2*num-1;j++){
				if(i+j>= num+1 && i+j <= (num-1)+(2*i)){
					if((i+j)%2 == (num+1)%2){
						cout<<static_cast<char>(k+'A');
						k++;
					}
					else{
						cout<<" " ;
					}
				}
				else{
					cout<<" " ;
				}
			}
			cout<<endl ;
		}
	
	cout<<endl ;
	}
	
} 
