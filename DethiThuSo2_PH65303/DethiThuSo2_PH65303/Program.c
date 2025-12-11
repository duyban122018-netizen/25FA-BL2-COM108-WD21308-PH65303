// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include<string.h>

void thongTinThuCung() {


	int ma, nam;
	char ten[50];
	int n;

	printf("THONG TIN THU CUNG:\n");
	printf("Nhap so luong Thu Cung: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("Moi Nhap ma thu Cung: ");
		scanf("%d", &ma);
		getchar();
		printf("\nNhap ho ten Thu Cung %d: ", i + 1);
		fgets(ten, sizeof(ten), stdin);
		ten[strcspn(ten, "\n")] = '\0';

		printf("Nhap nam: ");
		scanf("%d", &nam);
		getchar();
	}
		for (int i = 0; i < n; i++)
		{
			printf("\n--- THONG TIN THU CUNG ---\n");
			printf(" MA Thu Cung:%d\n", ma);
			printf(" MA Ten Thu Cung:%s\n", ten);
			printf("Nam Sinh:%d\n", nam);
		}
	
	return 0;
}

	
void tinhTong() {
	int n;

}
void thongTinCuaHang() {
	int soluong;
	char ten[50];
	int n ;
	printf("Thong tin thu Cung\n ");
	printf("Nhap so Thu cung: ");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap ho ten Thu Cung %d: ", i + 1);
		fgets(ten, sizeof(ten), stdin);
		ten[strcspn(ten, "\n")] = '\0';

	}
}

int main()
{
	int	chon;
	do
	{
		system("cls");//clear screen
		printf("+---------Menu---------+");printf("\n");
		printf("1.Thong Tin Thu Cung ");printf("\n");
		printf("2. Tinh Tong");printf("\n");
		printf("3.Thong Tin Cua Hang ");printf("\n");
		printf("0. Thoat");printf("\n");
		printf("Moi chon chuc nang tren:");
		scanf("%d", &chon);


		switch (chon)
		{
		case 1:
			thongTinThuCung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			thongTinCuaHang();
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