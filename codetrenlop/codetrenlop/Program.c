// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.!

#include <stdio.h>
void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
}

void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}
void sapXepMang1Chieu() {
	int intergerArray[100];
	int length;
	int tmp;
	printf("Nhap so luong phan tu mang:");
	scanf("%d", &length);
	printf("Nhap du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d]=", i);
		scanf("%d", &intergerArray[i]);
	}
	printf("Sap xep mang theo thu tu tang dan %d phan tu\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (intergerArray[i] > intergerArray[i + 1]) {
			tmp = intergerArray[i];
			intergerArray[i] = intergerArray[i + 1];
			intergerArray[i + 1] = tmp;
			i = -1;
		}
	}
	printf("Xuat mang du lieu %d phan tu  tang dan\n", length);
	for (int i = 0; i < length ; i++)
	{
		printf("mang[%d]=%d", i, intergerArray[i]);
	}
}
void demoMang2Chieu()
{
	char kyTu = 'A';
	char mangKyTu[10] ;
	for (int i = 0; i < 3; i++)
	{
		scanf(" %c", &mangKyTu[i]);
	}
	//fgets(mangKyTu);
	for (int i = 0; i < 3 ; i++)
	{
		printf("%c", mangKyTu[i]);
	}
	printf("\n");
	//puts(mangKyTu);
	

	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d] ,",i,j);
			scanf("%d", &array[i] [j]);
		}
		
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d,", array[i][j]);
		}
		printf("\n");
	}
}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:sapXepMang1Chieu();
			break;
		case 4:demoMang2Chieu();
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}



int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("4. DEMO mang 2 chieu");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}




// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu
