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
void view(int q);
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

void menu()
{
	int pilih;
	printf ("\n--------------APLIKASI PELABUHAN-------------------\n\n");
	printf ("1. Tambah Data Penumpang\n");
	printf ("2. Pencarian Data Penumpang\n");
	printf ("3. Pengurutan Data Penumpang\n");
	printf ("4. Ubah Data Penumpang\n");
	printf ("5. Lihat Data Penumpang\n");
	printf ("6. Keluar Dari program?\n\n");
	printf ("Masukkan Pilihan <1-6>: ");
	scanf ("%d",&pilih);
	
	if (pilih == 1)
	{
		system("cls");
		tambah();
	}
	else if (pilih == 2)
	{
		system("cls");
		cari();
	}
	else if (pilih ==3)
	{
		system("cls");
		urutkan();
	}
	else if (pilih == 4)
	{
		system("cls");
		ubah();
	}
	else if (pilih == 5)
	{
		system("cls");
		lihat();
	}
	else if (pilih == 6)
	{
		system("cls");
		printf ("Terima kasih telah menggunakan program");
		exit(0);
	}
	else
	{
		system("cls\n");
		printf ("ANDA SALAH MENGINPUTKAN !!! ULANGI KEMBALI !!!\n");
		menu();
	}	
}


void tambah()
{
	printf ("\n======================\n");
	printf (" INPUT DATA PENUMPANG \n");
	printf ("======================\n");
	printf ("Masukkan Tanggal Tiket\t\t: ");
	scanf ("%d", &tanggal[i]);
	fflush (stdin);
	printf ("Masukkan Bulan Tiket\t\t: ");
	scanf ("%d", &bulan[i]);
	fflush (stdin);
	printf ("Masukkan Tahun Tiket\t\t: ");
	scanf ("%d", &tahun[i]);
	fflush (stdin);
	printf ("Masukkan Nomer Tiket\t\t: ");
	scanf ("%d", &nomer_tiket[i]);
	fflush (stdin);
	printf ("Masukkan Nomer Kendaraan\t: ");
	scanf ("%s", &nomer_kendaraan[i]);
	fflush (stdin);
	printf("Masukkan Bobot Kendaraan <ton>\t: ");
	scanf ("%d", &bobot_kendaraan[i]);
	fflush (stdin);
	printf ("----- Jenis Kendaraan -----\n");
	printf ("1. Truk\n");
	printf ("2. Bus\n");
	printf ("3. Mini Bus\n");
	printf ("4. Mobil\n");
	printf ("5. Motor\n");
	printf ("6. Lainnya\n");
	printf ("Pilih Jenis Kendaraan <1-6>\t: ");
	scanf ("%d", &jenis_kendaraan[i]);
	if (jenis_kendaraan[i] >= 7)
	{
		printf (" Salah Menginputkan Pilihan!!! Ulangi Lagi !!");
		getch ();
		system ("cls");
		tambah();
	}
	else
	{
		goto tujuan;
	}
	
	tujuan:
	printf("---- Tujuan Pelabuhan ----\n");
	printf ("1. Pelabuhan Ketapang\n");
	printf ("2. Pelabuhan Padang Bali\n");
	printf ("3. Pelabuhan Lembar\n");
	printf ("4. Pelabuhan Tanjung Perak\n");
	printf ("5. Lainnya\n");
	printf ("Pilih Tujuan Pelabuhan<1-5>\t: ");
	scanf ("%d", &tujuan_pelabuhan[i]);
	if (tujuan_pelabuhan[i] >= 6)
	{
		printf ("Salah Menginputkan Pilihan!!! Ulangi Lagi!!");
		getch();
		system ("cls");
		tambah();
	}
	i=i+1;

	if (i>=2)
	{
		for (g=0;g<i-1;g++)
		{
			if (nomer_tiket[i-1]==nomer_tiket[g])
			{
				printf ("Nomer tiket ini sudah terdaftar!!\nMasukkan nomer yang lain!!");
				nomer_tiket[i-1]=0;
				hapus_data=+1;
			}
		} 
		if(hapus_data>0)
		{
			printf("\nPenghapusan Sukses");
		}
	}
	getch();
	system("cls\n");
	menu();
}

int cariTiket(int arr[], int n, int cari)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(cari==arr[i])
		{
			return i;	
		}
	}
	return -1;
}

int cariBobot(int arr[], int n, int cari)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(cari==arr[i]){
			return i;	
		}
	}
	return -1;
}

void cari()
{		
	int pilihan;
	printf ("==========================\n");
	printf (" PENCARIAN DATA PENUMPANG \n");
	printf ("==========================\n");
	printf ("1. Nomer Tiket\n");
	printf ("2. Bobot Kendaraan\n");
	printf ("3. Kembali Ke Menu?\n\n");
	printf ("Masukkan Pilihan <1-3>: ");
	scanf("%d", &pilihan);

	if (pilihan == 1)
	{
		system("cls");
		int cari_tiket;
		printf ("Masukkan Nomer Tiket Yang Dicari: ");
		scanf ("%d", &cari_tiket);	
		int t;
		t = cariTiket(nomer_tiket, i, cari_tiket);
		
		if(t==-1)
		{
			printf("Data Tidak Ditemukan\n");
		}
		else
		{
			view(t);
			getch();
		}
	}
	if (pilihan == 2)
	{
		system("cls");
		int cari_bobot;
		printf ("Masukkan Bobot Kendaraan Yang Dicari: "); 
		scanf ("%d", &cari_bobot);
	
		int pen;
		pen = cariBobot(bobot_kendaraan, i, cari_bobot);
	
		if(pen==-1)
		{
			printf("Data Tidak Ditemukan\n");
		}
		else
		{
			view(pen);
			getch();
		}
	}
	if (pilihan == 3)
	{
		system("cls");
		menu();
	}
	
	else
	{
		system("cls\n");
		printf (" ");
		cari();
	}
	getch();
	system("cls");		
	menu();
}

void view(int q)
{
	if (i==0)
	{
		printf ("Data Penumpang Tidak Ada");
	}
	else 
	{
		printf ("Data ke-%d\n", q+1);
		printf ("Tanggal tiket\t\t\t: %d", tanggal[q]);
		printf ("\nBulan Tiket\t\t\t: ");
		if (bulan[q]==1)
		{
			printf ("Januari\n");
		}
		else if (bulan[q]==2)
		{
			printf ("Februari\n");
		}
		else if (bulan[q]==3)
		{
			printf ("Maret\n");
		}
		else if (bulan[q]==4)
		{
			printf ("April\n");
		}
		else if (bulan[q]==5)
		{
			printf ("Mei\n");
		}
		else if (bulan[q]==6)
		{
			printf ("Juni\n");
		}
		else if (bulan[q]==7)
		{
			printf ("July\n");
		}
		else if (bulan[q]==8)
		{
			printf ("Agustus\n");
		}
		else if (bulan[q]==9)
		{
			printf ("September\n");
		}
		else if (bulan[q]==10)
		{
			printf ("Oktober\n");
		}
		else if (bulan[q]==11)
		{
			printf ("November\n");
		}
		else if (bulan[q]==12)
		{
			printf ("Desember\n");
		}
		printf ("Tahun Tiket\t\t\t: %d", tahun[q]);
		printf ("\nNomor Tiket\t\t\t: %d", nomer_tiket[q]);
		printf ("\nNomor Kendaraan Penumpang\t: %s", nomer_kendaraan[q]);
    	printf ("\nJenis Kendaraan Penumpang\t: ");
    	if (jenis_kendaraan[q]==1)
		{
      	  printf ("Truk");
		}
		else if (jenis_kendaraan[q]==2)
		{
        	printf ("Bus");
		}
		else if (jenis_kendaraan[q]==3)
		{
        	printf ("Mini Bus");
		}
		else if (jenis_kendaraan[q]==4)
		{
        	printf ("Mobil");
		}
		else if (jenis_kendaraan[q]==5)
		{
        	printf ("Motor");
		}
		else if (jenis_kendaraan[q]==6)
		{
        	printf ("Lainnya");
		}
    	printf ("\nBobot Kendaraan Penumpang\t: %d ton", bobot_kendaraan[q]);
		printf ("\nTujuan Pelabuhan Penumpang\t: ");
    	if (tujuan_pelabuhan[q]==1)
		{
        	printf ("Pelabuhan Ketapang\n\n");
		}
		else if (tujuan_pelabuhan[q]==2)
		{
        	printf ("Pelabuhan Padang Bali \n\n");
		}
		else if (tujuan_pelabuhan[q]==3)
		{
        	printf ("Pelabuhan Lembar \n\n");
		}
		else if (tujuan_pelabuhan[q]==4)
		{
        	printf ("Pelabuhan Tanjung Perak \n\n");
		}
		else if (tujuan_pelabuhan[q]==5)
		{
       		printf ("Lainnya \n\n");
		}
	}
}


int getMax(int array[], int size, int cari)
{
	int i;
  	int max = array[0];
  	//mencari data yang terbesar untuk membuat array
  	for ( i = 1; i < size; i++){
  		if (array[i] > max){
  			max = array[i];
		  }
	}
    return max;
}

void bucketSort(int array[], int size, int cari)
{
	int i,j;
  	int bucket[15];
  	//array juga dapat dibuat menjadi konstan artinya nilai tidak dapat diubah selama program berjalan.
  	const int max = getMax(array, size, cari);
  	//membuat array baru sebanyak nomor tiket terbesar untuk menyimpan nomor tiket dan menjadikannya= 0
  	for ( i = 0; i <= max; i++)
  	{
    	bucket[i] = 0;
  	}
  	//mengurangi banyak buket sehingga sama dengan banyak data
  	for ( i = 0; i < size; i++)
  	{
    	bucket[array[i]]++;
  	}
  	//pemetaan peletakan angka dalam array
  	for ( i = 0, j = 0; i <= max; i++)
  	{
    	while (bucket[i] > 0)
    {
	array[j++] = i;
    bucket[i]--;
    }
  }
}

void printArray(int array[], int size, int cari)
{
	int i,q;
	printf ("--- SETELAH DI URUTKAN --- \n\n");
  	for ( i = 0; i < size; ++i)
  	{
		printf("Nomer Tiket: %d  \n", array[i]);
		
	}
//	for(i=0;i<=size;i++)
//	{
//		if(cari==array[i]){
//		printf ("\nNomor Kendaraan Penumpang\t: %s", nomer_kendaraan[cari]);
//		}
//	}
//	
	
}

void urutkan()
{
	int mencari;
	if (i==0)
	{
		printf ("Data Penumpang Tidak Ada");
	}
	else 
	{
		printf ("mengurutkan berdasarkan nomor tiket: \n\n");
		int size = i;
		bucketSort(nomer_tiket, size, mencari);
		printf("nomor tiket yang telah diurutkan : \n");
  		printArray(nomer_tiket, size, mencari);
	}
	getch();
	system("cls");
	menu();
}

