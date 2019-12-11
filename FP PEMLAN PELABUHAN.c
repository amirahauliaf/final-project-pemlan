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
