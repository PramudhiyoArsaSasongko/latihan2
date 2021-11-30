#include <iostream>
using namespace std;

int main(){
	/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	   
	//string and float   
	string tanggal;
	string bulan;
	string tahun;
	float rupiah,bitcoin;
	
	//input
	cout<<"Aplikasi Pengecekan Transaksi Bitcoin"<<endl;
	cout<<"Tanggal Transakasi       : ";
	getline(cin,tanggal);
	cout<<"Bulan Transakasi         : ";
	getline(cin,bulan);
	cout<<"Tahun Transakasi         : ";
	cin>>tahun;
	cout<<"Jumlah Rupiah            : ";
	cin>>rupiah;
	cout<<"Harga per-1 Bitcoin      : ";
	cin>>bitcoin;
	
	//output
    cout<<"                            "<<endl;
    cout<<"Inilah Detail Transaksi Anda"<<endl;
	cout<<"Tanggal Transaksi : "<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
	cout<<"Jumlah Bitcoin    : "<<rupiah/bitcoin<<" "<<"Bitcoin"<<endl;
	
	return 0;
}
