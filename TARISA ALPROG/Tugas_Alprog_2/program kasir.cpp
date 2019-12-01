#include <iostream>
using namespace std;
int main(){
	int pilihan;
	int harga, jumlah, bayar, kembalian, total;
	cout<<"1.matrabak kacang : Rp.22000\n";
	cout<<"2.martabak cokelat : Rp.23000\n";
	cout<<"3.martabak keju : Rp.25000\n";
	cout<<"4.martabak cokelat kacang : 28000\n";
	cout<<"5.martabak cokelat keju : 30000\n";
	cin>>pilihan;
	switch (pilihan){
		case 1:
			cout<<"martabak kacang\n";
				harga=22000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;	
		case 2:	
			cout<<"martabak cokelat\n";
				harga=23000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 3:
			cout<<"martabak keju\n";
				harga=25000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 4:
			cout<<"martabak cokelat kacang\n";
				harga=28000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;	
		case 5:
			cout<<"martabak cokelat keju\n";
				harga=30000;
			cout<<"jumlah =";
			cin>>jumlah;
				total=harga*jumlah;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		default:
			cout<<"No Result";	
}}
