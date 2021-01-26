#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
//Deklarasi global
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

void garis();

int main () {
	//Deklarasi
	int gajibersih;
	string namakaryawan;
	long gajikaryawan;
	float gajipokok;
	int pajak, tunjangan;
	//input
	cout << "Program Menghitung Take Home Pay (Gaji Bersih)" <<endl;
	garis () ;
	cout << "Masukkan Nama Karyawan : ";
	getline (cin,namakaryawan);
	cout << "Masukkan Gaji Pokok Karyawan : Rp. " ;
	cin >> gajipokok;
	garis ();
	//proses
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	//output
	cout<<" |----------------------------------------------------------------------------|\n";
	cout<<" Nama Karyawan   :  "   << namakaryawan << " |" <<  " Gaji Bersih  Rp. " << gajibersih << endl;
	cout<<" |----------------------------------------------------------------------------|" << endl;
	
	
	cin.get();
	return 0;
	
		
}

void garis()
{
cout <<"----------------------------------------------------------------------------------" << endl;
}
