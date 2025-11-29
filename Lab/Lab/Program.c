// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void tinhtoancoban() {
    // khai bao
    double soNguyen1;
    double soNguyen2;
    double Tong;
    double Tru;
    double Nhan;
    double chia;
    // Nhap du lieu
    printf("Moi nhap so thu nhat: ");
    scanf("%lf", &soNguyen1);
    printf("Moi nhap so thu hai: ");
    scanf("%lf", &soNguyen2);
    // tinh toan
    Tong = soNguyen1 + soNguyen2;
    Tru = soNguyen1 - soNguyen2;
    Nhan = soNguyen1 * soNguyen2;
    chia = soNguyen1 / soNguyen2;
    // suat du lieu ra man hinh
    printf("Tong:%lf+%lf=2%lf", soNguyen1, soNguyen2, Tong);
    printf("Tong:%lf-%lf=2%lf", soNguyen1, soNguyen2, Tru);
    printf("Tong:%lf*%lf=2%lf", soNguyen1, soNguyen2, Nhan);
    printf("Tong:%lf/%lf=2%lf", soNguyen1, soNguyen2, chia);

}
void ChuviDientichHCN() {
    // khai bao
    double chieudai;
    double chieurong;
    double chuvi;
    double dientich;
    // nhap du lieu
    printf("moi nhap So thu nhat:");
    scanf("%lf", &chieudai);
    printf("moi nhap So thu hai:");
    scanf("%lf", &chieurong);
    // tinh toan
    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;
    // suat du lieu ra man hinh
    printf("chuvi: %lf + %lf * 2 = %.2lf\n", chieudai, chieurong, chuvi);
    printf("chuvi: %lf * %lf = %.2lf\n", chieudai, chieurong, dientich);
}
void ChuviDientichHinhTron() {
    // Khai bao
#define PI 3.14
    double Chuvi;
    double dienTich;
    double banKinh;
    //nhap du lieu
    printf("Moi nhap ban kinh: ");
    scanf("%lf", &banKinh);
    //Tinh Toan
    Chuvi = 2 * PI * banKinh;
    dienTich = PI * pow(banKinh, 2);
    //suat Ket qua
    printf("ChuVi:2*PI*%lf=%.2lf\n", banKinh, Chuvi);
    printf("Dien Tich:PI*%lf^2=%.2lf\n", banKinh, dienTich);

}
void DiemtrongbinhToanLyHoa() {
    // khia bao
    double toan, ly, hoa;
    double dtb; // Diem trung binh

    // nhap du lieu
    printf("Nhap diem toan: ");
    scanf("%lf", &toan);

    printf("Nhap diem ly: ");
    scanf("%lf", &ly);

    printf("Nhap diem hoa: ");
    scanf("%lf", &hoa);

    // tinh toan
    dtb = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);
    //suat du lieu
    printf("\nDiem trung binh: %.2lf\n", dtb);
}
void TinhtoanhocLuc() {
    int Diem;
    printf("Moi nhap Diem: ");
    scanf("%d", &Diem);
    if (Diem >= 9)
    {
        printf("Hoc Luc: Suat Sac");
    }
    else if (Diem >= 8)
    {
        printf("Hoc Luc: Gioi");
    }
    else if (Diem >= 6.5)
    {
        printf("Hoc Luc: Kha");
    }
    else if (Diem >= 5)
    {
        printf("Hoc Luc: Trung Binh");
    }
    else if (Diem >= 3.5)
    {
        printf("Hoc Luc: Yeu");
    }
    else
    {
        printf("Hoc luc: Kem");
    }

}
void TinhTienDien() {
    int tienDien;
    int soDien;
    printf("Moi nhap so dien: ");
    scanf("%d", &soDien);
    if (soDien <= 50)
    {
        tienDien = soDien * 1.678;
    }
    else if (soDien <= 100)
    {
        tienDien = soDien * 1.734;
    }
    else if (soDien <= 200)
    {
        tienDien = soDien * 2.014;
    }
    else if (soDien <= 300)
    {
        tienDien = soDien * 2.536;
    }
    else if (soDien <= 400)
    {
        tienDien = soDien * 2.835;
    }
    else if (soDien > 400)
    {
        tienDien = soDien * 2.927;
    }

}
void Lag4() {
    int chon;
    do {
        printf("\n+--------------------------------------------+\n");
        printf("| Chuc nang 1: Tinh trung binh tong          |\n");
        printf("| Chuc nang 2: Tim so nguyen to              |\n");
        printf("| Chuc nang 3: Tim so chinh phuong           |\n");
        printf("| Chuc nang 4: Thoat                         |\n");
        printf("+--------------------------------------------+\n");
        printf("Xin moi chon chuc nang (1,2,3,4): ");
        scanf("%d", &chon);
        switch (chon) {

        case 1: {
            int i, min, max;
            float trungBinh;
            float bienDem = 0;
            float tong = 0;

            printf("Nhap gia tri min: ");
            scanf("%d", &min);

            printf("Nhap gia tri max: ");
            scanf("%d", &max);

            for (i = min; i <= max; i++) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
            }
            if (bienDem > 0) {
                trungBinh = tong / bienDem;
                printf("Trung binh tong cac so tu nhien chia het cho 2 tu %d toi %d la: %f\n", min, max, trungBinh);
            }
            else {
                printf("Khong co so nao chia het cho 2 trong khoang duoc cho.\n");
            }
            break;
        }
        case 2: {
            int x, i;
            int count = 0;

            printf("Nhap x: ");
            scanf("%d", &x);

            for (i = 2; i < x; i++) {
                if (x % i == 0) {
                    count++;
                }
            }
            if (count == 0) {
                printf("%d la so nguyen to\n", x);
            }
            else {
                printf("%d khong phai so nguyen to\n", x);
            }
            break;
        }
        case 3: {
            int x, i;
            int count = 0;

            printf("Moi nhap x: ");
            scanf("%d", &x);

            for (i = 1; i <= x; i++) {
                if (i * i == x) {
                    printf("%d la so chinh phuong\n", x);
                    break;
                }
                else if (i * i > x) {
                    printf("%d khong phai so chinh phuong\n", x);
                    break;
                }
            }
            break;
        }
        case 4: {
            printf("Thoat chuong trinh.\n");
            break;
        }
        default:
            printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (chon != 4);
    return 0;
}
void KT231125()
{

    int n, i, sum = 0, count = 0;
    float avg;
    // Nhap so nguyen duong n > 10
    do {
        printf("Nhap so nguyen duong n (>10): ");
        scanf("%d", &n);
    } while (n <= 10);
    // Tinh tong cac so le tu 1 den n va dem so luong so le
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Neu i la so le
            sum += i;    // Cong i vao tong
            count++;     // Tang so luong so le
        }
    }
    // Tinh gia tri trung binh
    avg = (float)sum / count;
    // In ra ket qua
    printf("Gia tri trung binh cua cac so le tu 1 den %d la: %.2f\n", n, avg);
    if (((int)avg) % 2 == 0)
        printf("So trung binh la so chan.\n");
    else
        printf("So trung binh la so le.\n");
    return 0;



}

int main()
{
    printf("Hi there!\n");
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184