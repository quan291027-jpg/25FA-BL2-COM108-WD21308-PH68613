#include <stdio.h>
#include<string.h>
struct thuCung
{
	char ma[20];
	char ten[50];
	int namSinh;
};
void thongTinThuCung()
{
	struct thuCung tc[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		while (getchar() != '\n')
		printf("nhap thong tin thu cung");
		printf("Ma Thu cung");
	}

}
void tinhTong()
{
	int n;
	int tong = 0;
	printf("nhap vao so nguyen n:");
	scanf("%d", &n);
	if (n > 3)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 != 0)
			{
				tong += i;
			}
		}
	}
	else
	{
		printf("nhap vao so lon hon 3");
	}
	if (n % 5 == 0)
	{
		printf("%d la so chia het cho 5", n);
	}
	else
	{
		printf("%d la so ko chia het cho 5", n);
	}
	printf("\ntong cua cac so le %d\n", tong);
}
void thongTinCuaHang()
{

}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			thongTinThuCung();
			break;
		case 2:tinhTong();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);

	}
}
int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1.Thong Tin Mon Hoc");
		printf("\n");
		printf("2.Tinh Tong So Le");
		printf("\n");
		printf("3. Thong Tin Diem Lab ");
		printf("\n");
		printf("0.thoat");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
