#include <stdio.h>
#include<math.h>
// 1. Kiểm tra số nguyên
void kiemTraSoNguyen() {
    int i = 1;
    int n, x;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: KIEM TRA SO NGUYEN\n");
        printf("Nhap vao mot so nguyen x: ");
        scanf("%d", &x);
        printf("So %d co phai la so nguyen? True\n", x);
        printf("So %d co phai la so nguyen to? ", x);
        if (x <= 1) {
            printf("False\n");
        }
        else if (x == 2) {
            printf("True\n");
        }
        else if (x % 2 == 0) {
            printf("False\n");
        }
        else {

            for (i = 3; i * i <= x; i += 2) {
                if (x % i == 0) {
                    printf("False\n");
                    break;
                }
            }
            if (i * i > x) printf("True\n");
            printf("So %d co phai la so chinh phuong? ", x);
            if (x < 0) {
                printf("False\n");
            }
            else {
                int k = (int)sqrt(x);
                if (k * k == x) printf("True\n");
                else printf("False\n");
            }
        }
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
}

// 2. Tìm ước chung & bội chung 2 số
void timUocSoChungVaBoiSoChungCua2so() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TIM UOC CHUNG & BOI CHUNG CUA 2 SO\n");
        int x, y;
        printf("Nhap vao hai so nguyen x va y: ");
        scanf("%d %d", &x, &y);
        int a = x;
        int b = y;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int uscln = a;
        int bscnn = (x / uscln) * y;
        printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, uscln);
        printf("Boi so chung nho nhat cua %d va %d la: %d\n", x, y, bscnn);
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
}

// 3. Tính tiền karaoke
void chuongTrinhTinhTienchoQuanKareoke() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TINH TIEN QUAN KARAOKE\n");
        int start, end;
        printf("Nhap gio bat dau: ");
        scanf("%d", &start);
        printf("Nhap gio ket thuc: ");
        scanf("%d", &end);


        if (start < 12 || start > 23 || end < 12 || end > 23 || end <= start) {
            printf("Gio khong hop le.\n");
            continue;
        }
        int hours = end - start;
        double price = 0;


        if (hours <= 3) {
            price = hours * 150000;
        }
        else {
            price = 3 * 150000 + (hours - 3) * 150000 * 0.7;
        }


        if (start >= 14 && start <= 17) price *= 0.9;
        printf("Gia tien can thanh toan: %.0f VND\n", price);
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
}

// Các chức năng còn lại
void tinhTienDien() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TINH TIEN DIEN\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Tinh Tien Dien\n");
}
void chucNangDoiTien() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: CHUC NANG DOI TIEN\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Doi Tien\n");
}
void chucNangTinhlaiSuatVayNganHangTraGop() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TINH LAI SUAT VAY NGAN HANG TRA GOP\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Lai Suat Vay Ngan Hang Tra Gop\n");
}
void xayDungChuongTrinhVayTienMuaXe() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: CHUONG TRINH VAY TIEN MUA XE\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Vay Tien Mua Xe\n");
}
void sapXepThongTinSinhVien() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: SAP XEP SINH VIEN\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Sap Xep Sinh Vien\n");
}
void xayDungGameFPOLY_LOTT() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: GAME FPOLY\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Game FPOLY_LOTT\n");
}
void tinhToanPhanSo() {
    int i = 1;
    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TINH TOAN PHAN SO\n");
        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }
    printf("\nDang o chuc nang: Tinh Toan Phan So\n");
}




int main() {
    int chon;

    do {
        printf("\MENU \n");
        printf("1. Kiem Tra So Nguyen\n");
        printf("2. Tim Uoc Chung & Boi Chung Cua 2 So\n");
        printf("3. Tinh Tien Karaoke\n");
        printf("4. Tinh Tien Dien\n");
        printf("5. Doi Tien\n");
        printf("6. Lai Suat Vay Ngan Hang Tra Gop\n");
        printf("7. Vay Tien Mua Xe\n");
        printf("8. Sap Xep Thong Tin Sinh Vien\n");
        printf("9. Game FPOLY_LOTT\n");
        printf("10. Tinh Toan Phan So\n");
        printf("0. Thoat\n");
        printf("Vui long chon chuc nang: ");
        scanf("%d", &chon);

        switch (chon) {

        case 1:
            kiemTraSoNguyen();
            break;

        case 2:
            timUocSoChungVaBoiSoChungCua2so();
            break;

        case 3:
            chuongTrinhTinhTienchoQuanKareoke();
            break;

        case 4:
            tinhTienDien();
            break;

        case 5:
            chucNangDoiTien();
            break;

        case 6:
            chucNangTinhlaiSuatVayNganHangTraGop();
            break;

        case 7:
            xayDungChuongTrinhVayTienMuaXe();
            break;

        case 8:
            sapXepThongTinSinhVien();
            break;

        case 9:
            xayDungGameFPOLY_LOTT();
            break;

        case 10:
            tinhToanPhanSo();
            break;

        case 0:
            printf("\nDang thoat chuong trinh...\n");
            break;

        default:
            printf("\nLua chon khong hop le! Moi chon lai (0–10).\n");
        }

    } while (chon != 0);

}