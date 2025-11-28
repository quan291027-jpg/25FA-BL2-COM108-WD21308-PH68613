// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
	int n;
    int i;
	double tong=0, trungBinh;
	int count = 0;
	printf("moi nhap gia tri muon tao :");
	scanf("%d", &n);
	int mang[1000];
	for ( i = 0; i < n; i++)
	{
		printf("nhap gia tri cho phan tu thu [%d]:", i +1 );
		scanf("%d", &mang[i]);
	}
	for ( i = 0; i < n; i++)
	{
		printf("\nGia tri cua phan tu thu [%d]la: %d", i + 1, mang[i]);
	}
	for ( i = 0; i < n; i++)
	{
		if (mang[i] % 3 == 0)
		{
			tong+= mang[i];
			count++;
		}
	}
	trungBinh = tong / count;
	printf("\ngia tri trung binh tong cac so chia het cho 3 la %.2lf\n ", trungBinh);
}

