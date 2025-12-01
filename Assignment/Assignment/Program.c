// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>


void kiemTraSoNguyen() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
			int x, i;
			int count = 0;
		printf("Nhap vao so nguyen x: ");
		scanf("%d", &x);
			if (x == (int)x)
			{
				printf("%.d la so nguyen.\n", x);
			}
			else
			{
				printf("%.d khong phai la so nguyen.\n", x);
			}
			for (i = 2; i < x; i++) 
			{
				if (x % i == 0) 
				{
					count++;
				}
			}
			if (count == 0) {
				printf("%d la so nguyen to\n", x);
			}
			else {
				printf("%d khong phai so nguyen to\n", x);
			}

			for (i = 1; i <= x; i++) 
			{
				if (i * i == x)
				{
					printf("%d la so chinh phuong\n", x);
					break;
				}
				else if (i * i > x) 
				{
					printf("%d khong phai so chinh phuong\n", x);
					break;
				}
			}
		
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
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
		int gcd = 1;
		for (int i = 1; i <= snn; i++) {
			if (x % i == 0 && y % i == 0) {
				gcd = i;
			}
		}
		long long lcm = (long long)x * y / gcd;
		printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, gcd);
		printf("Boi so chung nho nhat cua %d va %d la: %lld\n", x, y, lcm);

		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

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
		system("cls");//clear screen	
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

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
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

	}
}
void TinhLaiSuatVayNganHangVayTraGop() {
	int i = 1;
	// vong lap
	while (i == 1)
	{
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

	}
}
void ChuongTrinhVaytienMuaXe() {
	int i = 1;
	// vong lap
	while (i == 1)
	{

		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);

	}
}
void SapXepThongTinSinhVien() {
	int i = 1;
	// vong lap
	while (1 == 1)
	{
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
	}
}
void GameFPOLY_LOTT() {
	int i = 1;
	// vong lap
	while (1 == 1)
	{
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
	}
}
void ChuongTrinhTinhToanPhanSo() {
	int i = 1;
	// vong lap
	while (1 == 1)
	{
		system("cls");//clear screen
		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
	}
}

int main()
{
	int	chon;
	do
	{
		system("cls");//clear screen
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