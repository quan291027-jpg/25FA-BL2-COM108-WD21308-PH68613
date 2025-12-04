#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>




// 1. Kiểm tra số nguyên
void kiemTraSoNguyen() {
    int i = 1;
    int x;

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
            int j;
            for (j = 3; j * j <= x; j += 2) {
                if (x % j == 0) {
                    printf("False\n");
                    break;
                }
            }
            if (j * j > x) printf("True\n");
        }

        // Kiem tra so chinh phuong
        printf("So %d co phai la so chinh phuong? ", x);
        if (x < 0) {
            printf("False\n");
        }
        else {
            int k = (int)sqrt(x);
            if (k * k == x) printf("True\n");
            else printf("False\n");
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
    int tieptuc = 1;
    int kwh;

    while (tieptuc == 1) {

        printf("\nBAN DANG O CHUC NANG: TINH TIEN DIEN\n");
        printf("Nhap so kwh ma khach hang da su dung: ");
        scanf("%d", &kwh);

        int bac_kwh[] = { 50, 50, 100, 100, 100, 1000000 };
        int gia[] = { 1678, 1734, 2014, 2536, 2834, 2927 };

        long tien = 0;
        int bac = 0;

        while (kwh > 0 && bac < 6) {
            int muc = (kwh > bac_kwh[bac]) ? bac_kwh[bac] : kwh;
            tien += muc * gia[bac];
            kwh -= muc;
            bac++;
        }

        printf("So tien dien phai tra: %ld dong\n", tien);

        printf("\nBan co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &tieptuc);
    }

}
void chucNangDoiTien() {
    int i = 1;
    int tieptuc = 1;

    while (tieptuc == 1) {

        printf("\nBAN DANG O CHUC NANG: CHUC NANG DOI TIEN\n");

        int tien;
        printf("Nhap so tien can doi: ");
        scanf("%d", &tien);

        int menhgia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        int soLuong;

        printf("\nCac menh gia tien:\n");

        for (int j = 0; j < 9; j++) {
            if (tien >= menhgia[j]) {
                soLuong = tien / menhgia[j];
                tien = tien % menhgia[j];
                printf("%d to %d\n", soLuong, menhgia[j]);
            }
        }

        printf("\nBan co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &tieptuc);
    }

}
   
void chucNangTinhlaiSuatVayNganHangTraGop() {
    int i = 1;   

    while (i == 1) {

        printf("\nBAN DANG O CHUC NANG: TINH LAI SUAT VAY NGAN HANG TRA GOP\n");

        double tienVay;
        double laiSuat = 0.05;
        int soThang = 12;

        printf("Nhap so tien muon vay: ");
        scanf("%lf", &tienVay);

        double gocHangThang = tienVay / soThang;
        double duNo = tienVay;

        printf("\nKy\tLai phai tra\tGoc phai tra\tTong phai tra\tDu no con lai\n");

        for (int j = 1; j <= soThang; j++) {  
            double laiThang = duNo * laiSuat;
            double tongTra = gocHangThang + laiThang;

            duNo -= gocHangThang;

            printf("%2d\t%10.0f\t%10.0f\t%12.0f\t%12.0f\n",
                j, laiThang, gocHangThang, tongTra, duNo);
        }

        // hỏi người dùng tiếp tục trong while
        printf("\nBan co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);

        printf("\nDang o chuc nang: Lai Suat Vay Ngan Hang Tra Gop\n");
    }
}
   

void xayDungChuongTrinhVayTienMuaXe() {
    int i = 1;

    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: CHUONG TRINH VAY TIEN MUA XE\n");

        double tyLe, V, traTruoc, traThang;
        double tongTien = 500000000;  
        int n = 24 * 12;              
        double r = 0.072 / 12;        

        printf("Nhap vao so phan tram vay toi da (vd 80): ");
        scanf("%lf", &tyLe);

        // Tính số tiền vay
        V = tongTien * (tyLe / 100.0);
        traTruoc = tongTien - V;

        // Công thức trả góp đều k
        traThang = V * (r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

        printf("\n=== KET QUA ===\n");
        printf("So tien phai tra lan dau: %.0f VND\n", traTruoc);
        printf("So tien phai tra hang thang: %.0f VND\n", traThang);
        printf("Thoi han vay: %d thang\n\n", n);

        printf("Ban co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);
    }

    printf("\nBan da thoat khoi chuc nang: Vay Tien Mua Xe\n");

    return 0;
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

        int a, b;
        int r1, r2;
        int count = 0;

       
        do {
            printf("Nhap so thu 1 (01-15): ");
            scanf("%d", &a);
            if (a < 1 || a > 15)
                printf(">> Loi! Chi duoc nhap tu 1 den 15. Nhap lai!\n");
        } while (a < 1 || a > 15);

        
        do {
            printf("Nhap so thu 2 (01-15): ");
            scanf("%d", &b);
            if (b < 1 || b > 15)
                printf(">> Loi! Chi duoc nhap tu 1 den 15. Nhap lai!\n");
        } while (b < 1 || b > 15);

       
        srand(time(NULL));
        r1 = rand() % 15 + 1;
        r2 = rand() % 15 + 1;

        printf("\nSo he thong sinh ra: %02d - %02d\n", r1, r2);

     
        if (a == r1 || a == r2) count++;
        if (b == r1 || b == r2) count++;

      
        if (count == 0)
            printf("Chuc ban may man lan sau!\n");
        else if (count == 1)
            printf("Chuc mung! Ban da trung giai NHI!\n");
        else
            printf("Chuc mung! Ban da trung giai NHAT!\n");

        
        printf("\nBan co muon tiep tuc? [1-Co | so khac-Khong]: ");
        scanf("%d", &i);

        printf("\nDang o chuc nang: Game FPOLY_LOTT\n");
    }
}
void tinhToanPhanSo() {
    int i = 1;

    while (i == 1) {
        printf("\nBAN DANG O CHUC NANG: TINH TOAN PHAN SO\n");
        int tu1, mau1, tu2, mau2;

        // Nhập phân số 1 (mẫu != 0)
        do {
            printf("Nhap phan so thu 1 (tu/mau, mau != 0): ");
            if (scanf("%d/%d", &tu1, &mau1) != 2) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF) {}
                printf("Nhap sai dinh dang! Nhap lai.\n");
                mau1 = 0;  
            }
            else if (mau1 == 0) {
                printf("Mau khong duoc bang 0! Nhap lai.\n");
            }
        } while (mau1 == 0);

       
        do {
            printf("Nhap phan so thu 2 (tu/mau, mau != 0): ");
            if (scanf("%d/%d", &tu2, &mau2) != 2) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF) {}
                printf("Nhap sai dinh dang! Nhap lai.\n");
                mau2 = 0;
            }
            else if (mau2 == 0) {
                printf("Mau khong duoc bang 0! Nhap lai.\n");
            }
        } while (mau2 == 0);

        int a, b, u;

        // --- Tính tổng ---
        int tongTu = tu1 * mau2 + tu2 * mau1;
        int tongMau = mau1 * mau2;
        a = tongTu; b = tongMau;
        while (b != 0) { u = b; b = a % b; a = u; }
        tongTu /= a; tongMau /= a;
        if (tongMau < 0) { tongMau = -tongMau; tongTu = -tongTu; }

        // --- Tính hiệu ---
        int hieuTu = tu1 * mau2 - tu2 * mau1;
        int hieuMau = mau1 * mau2;
        a = hieuTu; b = hieuMau;
        while (b != 0) { u = b; b = a % b; a = u; }
        hieuTu /= a; hieuMau /= a;
        if (hieuMau < 0) { hieuMau = -hieuMau; hieuTu = -hieuTu; }

        
        int tichTu = tu1 * tu2;
        int tichMau = mau1 * mau2;
        a = tichTu; b = tichMau;
        while (b != 0) { u = b; b = a % b; a = u; }
        tichTu /= a; tichMau /= a;
        if (tichMau < 0) { tichMau = -tichMau; tichTu = -tichTu; }

    
        int tinhThuong = 1;
        int thuongTu = 0, thuongMau = 1;
        if (tu2 == 0) {
            printf("\nKhong the tinh thuong vi phan so thu 2 co tu = 0!\n");
            tinhThuong = 0;
        }
        else {
            thuongTu = tu1 * mau2;
            thuongMau = mau1 * tu2;
            a = thuongTu; b = thuongMau;
            while (b != 0) { u = b; b = a % b; a = u; }
            thuongTu /= a; thuongMau /= a;
            if (thuongMau < 0) { thuongMau = -thuongMau; thuongTu = -thuongTu; }
        }

        
#define IN_PHAN_SO(tu, mau) \
            if ((tu) == 0) printf("0\n"); \
            else if ((mau) == 1) printf("%d\n", (tu)); \
            else printf("%d/%d\n", (tu), (mau));

        printf("\nKet qua:\n");
        printf("Tong: "); IN_PHAN_SO(tongTu, tongMau)
            printf("Hieu: "); IN_PHAN_SO(hieuTu, hieuMau)
            printf("Tich: "); IN_PHAN_SO(tichTu, tichMau)
            if (tinhThuong) {
                printf("Thuong: "); IN_PHAN_SO(thuongTu, thuongMau)
            }

        // hỏi tiếp tục
        printf("\nBan co muon tiep tuc? [1 = Co | 0 = Khong]: ");
        scanf("%d", &i);
     
    }

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