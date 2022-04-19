#include <iostream>
using namespace std;

int hasil = 0;
int rekursif (int n){
	int sks;
	if (n == 0) {
		return n;	
	}

	sks = 120000;
	hasil = hasil+sks;
	rekursif (n-1);
	return hasil;
}

int main() {
 char nama[20], nim[15];
 int i, n, matkul[10], harga_sks, diskon1, diskon2, total_bayar;
 cout<<"Mahasiswa"<<endl;
 cout<<"Masukkan nama: "; cin>>nama;
 cout<<"Masukkan NIM: ";	cin>>nim;
 cout<<endl;
 cout<<"Daftar matakuliah (sks): "<<endl;
 cout<<"---------------------------\n";
 cout<<"Algoritma Pemrograman: "; cin>>matkul[1];
 cout<<"Matematika Diskrit: "; cin>>matkul[2];
 cout<<"Aljabar Linear: "; cin>>matkul[3];
 cout<<"Pemrograman Web: "; cin>>matkul[5];
 cout<<"Arsitektur Komputer: "; cin>>matkul[4];
 cout<<"Bahasa Indonesia: "; cin>>matkul[6];
 cout<<"Pendidikan Kewarganegaraan: "; cin>>matkul[7];
 cout<<"Akhlak: "; cin>>matkul[8];
 
 n = 0;
 for (i = 1; i <= 8; i++) {
 	n += matkul[i];
 }
 harga_sks = rekursif(n);
 diskon1 = 0.1*harga_sks;
 diskon2 = 0.05*diskon1;
 total_bayar = harga_sks-(diskon1+diskon2);
 
 cout<<"----------------------------------------------\n";
 cout<<"Total SKS = "<<n<<endl;
 cout<<"Harga SKS = "<<harga_sks<<endl;
 cout<<"Diskon = "<<diskon1<<" + "<<diskon2<<" = "<<diskon1+diskon2<<endl; 
 cout<<"Total Pembayaran = "<<total_bayar<<endl;
}
