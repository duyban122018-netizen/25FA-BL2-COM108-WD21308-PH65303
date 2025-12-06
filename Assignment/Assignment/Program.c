// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include<math.h>
#include<stdlib.h>


void kiemTraSoNguyen() {
	int i = 1;
	while (i == 1)
	{
		int x, j;
		int count = 0;
		printf("Nhap vao so nguyen x: ");
		scanf("%d", &x);
		printf("%d la so nguyen.\n", x);
		// So Nguyen To
		if (x <= 1) {
			printf("%d khong phai so nguyen to\n", x);
		}
		else {
			int SNT = 1;
			for (j = 2; j <= sqrt(x); j++) {
				if (x % j == 0) {
					SNT = 0;
					break;
				}
			}
			if (SNT) {
				printf("%d la so nguyen to\n", x);
			}
			else {
				printf("%d khong phai so nguyen to\n", x);
			}
		}
		// So Chinh Phuong
		if (x >= 0) {
			int k = sqrt(x);
			if (k * k == x) {
				printf("%d la so chinh phuong\n", x);
			}
			else {
				printf("%d khong phai so chinh phuong\n", x);
			}
		}
		else {
			printf("%d khong phai so chinh phuong\n", x);
		}
		printf("Ban co muon thuc hien tiep hay khong [1-Co|khac-Khong]: ");
		scanf("%d", &i);
		printf("Ban vua nhap: %d\n", i);
		system("cls");
	}
}
void TimUocSoChungVaBoiSoChungCua2So() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		printf("Tim Uoc so chung va boi so chung cua hai so\n");
		int x, y;
		printf("Nhap vao hai so nguyen x va y: ");
		scanf("%d %d", &x, &y);
		int snn;
		if (x < y) 
		{
			snn = x;
		}
		else
		{
			snn = y;
		}
		int gcd = 1;// uoc chung lon nhat
		for ( i = 1; i <= snn; i++) {
			if (x % i == 0 && y % i == 0) {
				gcd = i;
			}
		}
		//BCNN
		// ll dung de tranh tran khi nhan 2 so
		long long lcm = (long long)x * y / gcd;
		printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, gcd);
		printf("Boi so chung nho nhat cua %d va %d la: %lld\n", x, y, lcm);

		// Vong lap
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen
	}
}
void ChuongtrinhTinhTienChoQuanKARAOKE() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		int bd, kt;
		printf("Nhap gio bat dau (tu 12 den 23): ");
		scanf("%d", &bd);
		printf("Nhap gio ket thuc (tu 12 den 23): ");
		scanf("%d", &kt);

		if (bd < 12 || bd > 23 || kt < 12 || kt > 23 || bd >= kt) 
		{
			printf("Gio bat dau hoac gio ket thuc khong hop le.\n");
			break;
		}

		int gio = kt - bd;
		int tien = 0;

		if (gio <= 3) 
		{
			tien = 150000;
		}
		else 
		{
			tien = 150000 + (gio - 3) * 35000;
		}

		if (bd >= 14 && bd <= 17) 
		{
			tien = tien * 9 / 10;
		}

		printf("Gia tien can thanh toan: %d VND\n", tien);
		break;
	
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen	
	}
}
void TinhTienDien() {
	int i = 1;
	// vong lap
	while (1 == 1)
	{
		printf("Tinh tien dien\n");
		int so_kwh;
		float tien = 0;
		printf("Nhap so kWh su dung trong thang: ");
		scanf("%d", &so_kwh);
		if (so_kwh <= 50) {
			tien = so_kwh * 1.678;
		}
		else if (so_kwh <= 100) {
			tien = 50 * 1.678 + (so_kwh - 50) * 1.734;
		}
		else if (so_kwh <= 200) {
			tien = 50 * 1.678 + 50 * 1.734 + (so_kwh - 100) * 2.014;
		}
		else if (so_kwh <= 300) {
			tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (so_kwh - 200) * 2.536;
		}
		else if (so_kwh <= 400) {
			tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (so_kwh - 300) * 2.834;
		}
		else {
			tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (so_kwh - 400) * 2.927;
		}
		printf("So tien phai dong la: %f VND\n", tien);

		break;
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

	}
}
void ChucNangDoiTien() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		// khai bao
		int	soTien;
		int	menhGia[] = { 500,200,100,50,20,10,5,2,1 };
		int	soToTien = 0;
		// Nhap so Tien
		printf("Moi Nhap Vao So Tien Can Do: ");
		scanf("%d", &soTien);
		for (int j = 0; j < 9; j++)
		{
			soToTien = soTien / menhGia[j];
			printf("Co %d to tien menh gia %d\n ", soToTien, menhGia[j]);
			soTien = soTien % menhGia[j];
		}
		
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen
	}
}
void TinhLaiSuatVayNganHangVayTraGop() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		
		printf("Bang lai suat vay ngan hang \n \n");
			int tienVay;
		printf("Moi nhap so tien can vay(VND):");
		scanf("%d", &tienVay);
			int tienLai;//tien lai hang thang
			int tienGoc = tienVay / 12;//tien goc phai tra hang thang
			int tienTra;//tien phai tra hang thang = tien goc + tien lai
			int tienCon;//tien con lai sau khi tra tien goc
			tienCon = tienVay;
		printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | \n");
		for (int j = 1; j <= 12; j++) 
		{
			tienLai = tienCon * 0.05;
			tienTra = tienGoc + tienLai;
			tienCon = tienCon - tienGoc;
			printf("---------------------------------------------------------------------------\n");
			printf("%d | ", j);
			printf("%12d | ", tienLai);
			printf("%12d | ", tienGoc);
			printf("%16d | ", tienTra);
			printf("%15d | ", tienCon);
			printf("\n");
		}
		
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen
	}
}
void ChuongTrinhVaytienMuaXe() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		int percent;
		printf("Nhap so phan tram vay toi da (0-100): ");
		scanf("%d", &percent);

		if (percent < 0 || percent > 100) {
			printf("Phan tram vay phai tu 0 den 100.\n");
			return;
		}
		double giaxe = 500000000.0; 
		double P = giaxe * (percent / 100.0); //tien vay
		double tratruoc = giaxe - P; //tra lan dau

		double laisuatnam = 0.072;
		int nam = 24; 
		int thang = nam * 12; 
		double r = laisuatnam / 12.0; 

		/* Tang truong lai suat theo thang tính (1 + r)^thang*/ // lai suat kep
		int i;
		double pow1 = 1.0;
		for (i = 0; i < thang; i++) {
			pow1 *= (1 + r);
		}
		// tien tra hang thang phai cha (PMT)
		double PMT = P * (r * pow1) / (pow1 - 1);

		printf("So tien phai tra lan dau: %.0f VNÐ\n", tratruoc);
		printf("So tien phai tra hang thang cho den het ky han vay: %.0f VNÐ\n", PMT);

		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen
	}
}
void SapXepThongTinSinhVien() {
	int i = 1;
	// vong lap
	while (1 == 1)
	{
		{
			int n;
			printf("Nhap so luong sinh vien: ");
			scanf("%d", &n);
			getchar();

			char hoten[100][50];
			float diem[100];

			for (int i = 0; i < n; i++) {
				printf("\nNhap ho ten sinh vien thu %d: ", i + 1);
				fgets(hoten[i], sizeof(hoten[i]), stdin);
				hoten[i][strcspn(hoten[i], "\n")] = '\0';

				printf("Nhap diem: ");
				scanf("%f", &diem[i]);
				getchar();
			}
			for (int i = 0; i < n - 1; i++) {
				for (int j = i + 1; j < n; j++) {
					if (diem[i] < diem[j]) {
						float tmp = diem[i];
						diem[i] = diem[j];
						diem[j] = tmp;

						char tmpName[50];
						strcpy(tmpName, hoten[i]);
						strcpy(hoten[i], hoten[j]);
						strcpy(hoten[j], tmpName);
					}
				}
			}
			printf("\nDANH SACH SINH VIEN \n");
			printf("%-25s %-10s %-15s\n", "Ho ten", "Diem", "Hoc luc");
			for (int i = 0; i < n; i++) {
				char hocluc[20];
				if (diem[i] >= 9.0) strcpy(hocluc, "Xuat sac");
				else if (diem[i] >= 8.0) strcpy(hocluc, "Gioi");
				else if (diem[i] >= 6.5) strcpy(hocluc, "Kha");
				else if (diem[i] >= 5.0) strcpy(hocluc, "Trung binh");
				else strcpy(hocluc, "Yeu");

				printf("%-25s %-10.2f %-15s\n", hoten[i], diem[i], hocluc);
			}
			return 0;
		}
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
	}
}
void GameFPOLY_LOTT() {
			int tieptuc9;
			do
			{
				system("cls");
				int so1, so2;
				int soNgauNhien1, soNgauNhien2;


				printf("=== FPOLY-LOTT (2/15) ===\n");
				printf("Nhap so thu nhat (01-15): ");
				scanf("%d", &so1);
				printf("Nhap so thu hai (01-15): ");
				scanf("%d", &so2);
				//ktra hop le
				if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
					printf("So nhap vao khong hop le! Chi chap nhan tu 01 den 15.\n");
				}

				// generate 2 so ngau nhien
				soNgauNhien1 = rand() % 15 + 1;
				soNgauNhien2 = rand() % 15 + 1;

				// dam bao 2 so khac nhau
				while (soNgauNhien1 == soNgauNhien2) {
					soNgauNhien2 = rand() % 15 + 1;
				}

				// output ket qua
				printf("\n=== KET QUA ===\n");
				printf("So cua ban: %02d va %02d\n", so1, so2);
				printf("So ket qua: %02d va %02d\n", soNgauNhien1, soNgauNhien2);

				// dem so trung
				int soTrung = 0;

				if (so1 == soNgauNhien1 || so1 == soNgauNhien2) {
					soTrung++;
				}
				if (so2 == soNgauNhien1 || so2 == soNgauNhien2) {
					soTrung++;
				}

				// Xac dinh ket qua
				printf("\n=== THONG BAO ===\n");
				switch (soTrung) {
				case 0:
					printf("Chuc ban may man lan sau!\n");
					break;
				case 1:
					printf("Chuc mung ban da trung giai nhi!\n");
					break;
				case 2:
					printf("CHUC MUNG BAN DA TRUNG GIAI NHAT!\n");
					break;
				}
				printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]:\n ");
				scanf("%d", &tieptuc9);
			} while (tieptuc9 == 1);
			system("cls");
}
void ChuongTrinhTinhToanPhanSo() {


	int tieptuc10;
	do
	{
		system("cls");
		int tu1, mau1, tu2, mau2;

		printf("Nhap phan so 1 (tu/mau): ");
		scanf("%d/%d", &tu1, &mau1);

		printf("Nhap phan so 2 (tu/mau): ");
		scanf("%d/%d", &tu2, &mau2);

		// Ktra mau khac 0
		if (mau1 == 0 || mau2 == 0) {
			printf("Mau so phai khac 0!\n");
		}
		else {

			printf("\nPhan so 1: %d/%d\n", tu1, mau1);
			printf("Phan so 2: %d/%d\n\n", tu2, mau2);

			// tinh tong
			int tongTu = tu1 * mau2 + tu2 * mau1;
			int tongMau = mau1 * mau2;
			printf("Tong: (%d/%d) + (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, tongTu, tongMau);

			// tinh hieu
			int hieuTu = tu1 * mau2 - tu2 * mau1;
			int hieuMau = mau1 * mau2;
			printf("Hieu: (%d/%d) - (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, hieuTu, hieuMau);

			// tinh tich
			int tichTu = tu1 * tu2;
			int tichMau = mau1 * mau2;
			printf("Tich: (%d/%d) * (%d/%d) = %d/%d\n",
				tu1, mau1, tu2, mau2, tichTu, tichMau);

			// tinh thuong
			if (tu2 == 0) {
				printf("Thuong: Khong the chia cho 0\n");
			}
			else {
				int thuongTu = tu1 * mau2;
				int thuongMau = mau1 * tu2;
				printf("Thuong: (%d/%d) / (%d/%d) = %d/%d\n",
					tu1, mau1, tu2, mau2, thuongTu, thuongMau);
			}
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
		scanf("%d", &tieptuc10);
	} while (tieptuc10 == 1);
	system("cls");
}

int main()
{
	int	chon;
	
	do 
	{
		printf("Menu");printf("\n");
		printf("1. Kiem Tra So Nguyen");printf("\n");
		printf("2. Tim Uoc So Chung Va Boi So Chung Cua 2 So");printf("\n");
		printf("3. Chuong Trinh Tinh Toan Tien Cho Qoan KARAOKE");printf("\n");
		printf("4. Tinh Tien Dien");printf("\n");
		printf("5. Chuc Nang Doi Tien");printf("\n");
		printf("6. Tinh Lai Suat Vay Ngan Hang Vay Tra Gop");printf("\n");
		printf("7. Vay Tien Mua Xe");printf("\n");
		printf("8. Thong Tin Sinh Vien");printf("\n");
		printf("9. Game FPOLY-LOTT");printf("\n");
		printf("10. Tinh Toan Phan So");printf("\n");
		printf("0.Thoat");printf("\n");
		printf("Moi chon chuc nang tren:");
		scanf("%d", &chon);

		switch (chon)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			TimUocSoChungVaBoiSoChungCua2So();
			break;
		case 3:
			ChuongtrinhTinhTienChoQuanKARAOKE();
			break;
		case 4:
			TinhTienDien();
			break;
		case 5:
			ChucNangDoiTien();
			break;
		case 6:
			TinhLaiSuatVayNganHangVayTraGop();
			break;
		case 7:
			ChuongTrinhVaytienMuaXe();
			break;
		case 8:
			SapXepThongTinSinhVien();
			break;
		case 9:
			GameFPOLY_LOTT();
			break;
		case 10:
			ChuongTrinhTinhToanPhanSo();
			break;
		case 0:
			printf("Thoat");
			printf("\n");
			break;
		default:
			printf("Hay chon cac chuc nang khac[1-10]: ");
			printf("\n");
			break;
		}
		printf("\n");
		printf("Tiep tuc chuc nang nay[1=Co|khac-khong]: ");
		scanf("%d", &chon);
		system("cls");
	} while (chon != 0);
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