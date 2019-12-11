#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int nomer_tiket[15], jenis_kendaraan[15], bobot_kendaraan[15], tujuan_pelabuhan[15];
int tanggal[15], bulan[15], tahun[15];
char nomer_kendaraan[15][15];
int i=0, g, hapus_data=0, q;
int perbarui;

void lihat();
void urutkan();
void cari();
void ubah();
void tambah();
void menu();
void data_diri();

int main()
{
	system("color F9");
	data_diri();
}

void data_diri()
{
	char lanjut;
	printf ("\n------------ TUGAS AKHIR ------------\n\n");
	printf (" AMIRAH AULIA FITRI 	[18081010029]\n");
	printf (" KHONSA SALSABILA 	[18081010028]\n\n");
	printf (" Apakah anda ingin lanjut <y/n>: ");
	scanf ("%c",&lanjut);

	if (lanjut == 'y'||lanjut == 'Y')
	{
		system("cls\n");
		menu();
	}
	else if (lanjut == 'n'||lanjut == 'N')
	{
		system("cls\n");
		printf ("TERIMA KASIH TELAH MENGGUNAKAN PROGRAM \n");
		exit(0);
	}
	else
	{
		system("cls\n");
		printf ("ANDA SALAH MENGINPUTKAN !!! ULANGI KEMBALI !!!\n");
		data_diri();
	}
}


void menu(){
	int pilih;
	printf ("\n--------------APLIKASI PELABUHAN-------------------\n\n");
	printf ("1. Tambah Data Penumpang\n");
	printf ("2. Ubah Data Penumpang\n");
	printf ("3. Pencarian Data Penumpang\n");
	printf ("4. Pengurutan Data Penumpang\n");
	printf ("5. Lihat Data Penumpang\n");
	printf ("6. keluar dari program??\n\n");
	printf ("Masukkan Pilihan <1-6>: ");
	scanf ("%d",&pilih);
	
	if (pilih == 1){
		system("cls");
		tambah();
	}
	else if (pilih == 2){
		system("cls");
		ubah();
	}
	else if (pilih == 4){
		system("cls");
		urutkan();
	}
	else if (pilih == 5){
		system("cls");
		lihat();
	}
	else if (pilih == 6){
		system("cls");
		printf ("Terima kasih telah menggunakan program");
		exit(0);
	}
	else {
		system("cls\n");
		printf ("ANDA SALAH MENGINPUTKAN !!! ULANGI KEMBALI !!!\n");
		menu();
	}
	
}

