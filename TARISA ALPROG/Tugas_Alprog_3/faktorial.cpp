#include <iostream>
using namespace std;
int main(){
	int s,total;
	cout<<"masukkan bilangan : ";
	cin>>s;
	for (int i=s;i>=1;i--){
		cout<<i<<"! = ";
		total=1;
		for(int j=i;j>=1;j--){
			total=total*j;
			if(j!=1){
				cout<<j<<"*";
			}else{
				cout<<j;
			}
		}cout<<" ="<<total<<endl;
	}	
		return 0;
}



