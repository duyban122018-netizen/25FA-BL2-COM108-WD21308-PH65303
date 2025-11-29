// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemTraSoNguyen() {
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
void TimUocSoChungVaBoiSoChungCua2So() {
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
void ChuongtrinhTinhTienChoQuanKARAOKE() {
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
void TinhTienDien() {
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
void ChucNangDoiTien() {
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
		printf("Tiep tuc chuc nang nay[1=Co|khac-khong]: ");
		scanf("%d", &chon);
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