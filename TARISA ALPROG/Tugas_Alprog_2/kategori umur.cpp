#include <iostream>
using namespace std;
int main (){
	int umur;
	cout<<"Masukan umur:";
	cin>>umur;
	if (umur>=0 and umur<=1){
		cout <<"Bayi";
	}else if (umur>1 and umur<=5){
		cout <<"Balita";
	}else if (umur>5 and umur<=12){
		cout <<"Anak-anak";
	}else if (umur>12 and umur<=17){
		cout <<"Remaja";
	}else if (umur>17 and umur<=30){
		cout <<"Pemuda";
	}else if (umur>30 and umur<=60){
		cout <<"Dewasa";
	}else if (umur<0){
			cout<<"Unfiled";
	}else {
		cout <<"Lansia";
		
	}
}
	
	
	
	

