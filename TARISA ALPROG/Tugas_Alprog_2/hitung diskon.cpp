#include <iostream>
using namespace std;
int main(){
	int pilihan;
    int bayar, harga, potongan_harga, total, kembalian;
	float diskon;
	cout<<"1.Matrabak kacang : Rp.22000\n";
	cout<<"2.Martabak cokelat : Rp.23000\n";
	cout<<"3.Martabak keju : Rp.25000\n";
	cout<<"4.Martabak cokelat kacang : 28000\n";
	cout<<"5.Martabak cokelat keju : 30000\n";
	cin>>pilihan;
	switch (pilihan){
		case 1:
			cout<<"Martabak kacang = Rp.22000\n"<<"potongan harga = 20000\n";
				harga=22000;
				potongan_harga=20000;
				total=harga-potongan_harga;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 2:
			cout<<"Martabak cokelat = Rp.23000\n"<<"jumlah bayar =\t";
			cin>>bayar;
			cout<<"kembalian =\tRp."<<bayar-23000;
			break;
		case 3:
			cout<<"Martabak keju = Rp.25000\n"<<"diskon = 50%\n";
				harga=25000;
				diskon=0.5;
				total=harga*diskon;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		case 4:
			cout<<"Martabak cokelat kacang = Rp.28000\n"<<"jumlah bayar =\t";
			cin>>bayar;
			cout<<"kembalian =\tRp."<<bayar-28000;
			break;
		case 5:
			cout<<"Martabak cokelat keju = Rp.30000\n"<<"diskon 20% + 30%\n";
				harga=30000;
				diskon=0.5;
				total=harga*diskon;
			cout<<"total harga = Rp."<<total<<"\n";
			cout<<"jumlah bayar =";
			cin>>bayar;
				kembalian=bayar-total;
			cout<<"kembalian = Rp."<<kembalian;
			break;
		default:
			cout<<"No Result";	
}}
