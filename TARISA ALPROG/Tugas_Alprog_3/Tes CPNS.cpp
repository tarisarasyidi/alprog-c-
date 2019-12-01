#include <iostream>
using namespace std;
int main(){
	int p,q,r;
	cout<<"Masukkan nilai TIU : ";
	cin>>p;
	cout<<"Masukkan nilai TWK : ";
	cin>>q;
	cout<<"Masukkan nilai TKP : ";
	cin>>r;
	cout<<"Nilai total = "<<p+q+r;
	if (p>=80 and q>=100 and r>=140){
		cout<<"\n"<<"Anda LULUS";
	}else {
		cout<<"\n"<<"Anda TIDAK LULUS";
	}
}

