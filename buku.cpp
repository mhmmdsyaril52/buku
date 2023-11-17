#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int CP_Book, C_Hand, Dict, Marker, Calc;
 float Book, Stat, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| Buku cinta         : Rp 105.000,00 |"<<endl;
 cout<<"\t\t| Buku senja         : Rp 188.000,00 |"<<endl;
 cout<<"\t\t| Buku sarjana       : Rp  55.000,00 |"<<endl;
 cout<<"\t\t| Buku menu          : Rp  10.000,00 |"<<endl;
 cout<<"\t\t| Buku mtk           : Rp  35.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Buku cinta yang dibeli         : "; cin>>CP_Book;
 cout<<"Masukkan jumlah Buku senja yang dibeli         : "; cin>>C_Hand;
 cout<<"Masukkan jumlah Buku sarjana dibeli            : "; cin>>Dict;
 cout<<"Masukkan jumlah Buku menu yang dibeli          : "; cin>>Marker;
 cout<<"Masukkan jumlah Calculator yang dibeli         : "; cin>>Calc;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<CP_Book<<"\t\t Buku cinta	 \t105000 \t\t"<<CP_Book*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<C_Hand<<"\t\t Buku senja \t\t188000 \t\t"<<C_Hand*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<Dict<<"\t\tBuku sarjana \t\t55000 \t\t"<<Dict*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<Marker<<"\t\tBuku menu	\t10000\t\t"<<Marker*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<Calc<<"\t\tBuku mtk \t\t35000 \t\t"<<Calc*35000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = CP_Book*105000+C_Hand*188000;
 Disc = 6.25/100*Book;
 Stat = Dict*55000+Marker*10000+Calc*35000;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
 FixBook = Book-Disc;
 Disc = 3.00/100*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"   \t    |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
