#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"masukkan angka = ";
	cin>>x;
	
	for(int i=0;i<=x;i++){
		for(int j=x;j>i;j--){
			cout<<" ";
		}
		for(int k=0;k<=2*(i+4);k++){
			cout<<"*";
		}
		cout<<endl;		
	}
	for(int i=0;i<=x;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=x;k>=2*(i-x);k--){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
