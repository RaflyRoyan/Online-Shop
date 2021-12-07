#include<stdio.h>
#include<string.h>
#include<windows.h>

struct penjual
{
	char jenis[70];
	char nama[70];
	int detail;
};
struct penjual barang[50];

struct pembeli{
	
};



	void tambahdata()
	{   
	int a,b,c,d;
	printf("Masukan jumlah barang :"); scanf("%d",&b);
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   printf("\nData ke-%d\n",d);
   printf("Jenis Barang\t:");fflush(stdin);	gets (barang[c].jenis);
   printf ("Nama Barang\t:");fflush(stdin);	gets (barang[c].nama);
   a++;}
   system("CLS");
   }
	
	
	void hapusdata()
	{

	}
	
	void tampilkandata()
	{
		
	}
	
	void alatmasak()
	{
		
	}
	
	void elektronik()
	{
		
	}
	
	void fashion()
	{
		
	}
	
	void makanan()
	{
		
	}

int main()
{
	system ("color f0");
	int pilih,  pilih1, pilih2;
	char username[20], password[20];
	
		printf("========================\n");
		printf("\tLOGIN\n");
		printf("========================\n");
		printf("Username :"); scanf("%s\n",&username);
		printf("Password :"); scanf("%s",&password);
		system("CLS");
	
	printf("PROGRAM PEMBELIAN BARANG\n");
	printf("1. Penjual\n");
	printf("2. Pembeli\n\n");
	printf("Masukan Pilihan :");
	scanf ("%d",&pilih);
	system("CLS");
	if (pilih==1)
	{
		
		printf("Menu  Penjualan\n");
		printf("[1] Tambah data\n");
		printf("[2] Hapus data\n");
		printf("[3] Tampilkan data\n");
		printf("Masukan pilihan :"); scanf("%s",&pilih1);
		system ("CLS");
		
		switch (pilih1)
		{
			case '1':
			tambahdata();
			break;
			
			case '2':
			hapusdata();
			break;
			
			case '3' :		
			tampilkandata();
			break;
		
		}
		
				
	}
	
	if (pilih==2)
	{
			printf("Jenis barang :\n");
			printf("1. Alat Masak\n");
			printf("2. Electronik\n");
			printf("3. Fashion\n");
			printf("4. Makanan & minuman\n");
			printf("Masukan pilihan :"); scanf("%s",&pilih2);
			switch (pilih2)
			{
				case '1':
				alatmasak();
				break;
				
				case '2':
				elektronik();
				break;
				
				case '3':
				fashion();
				break;
				
				case '4' :
				makanan();
				break;	
			}
	}
	return 0;
}
