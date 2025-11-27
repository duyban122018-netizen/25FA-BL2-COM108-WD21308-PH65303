// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main() {
	int n, i;
	float tong = 0;
	int dem = 0;
	float trungBinh;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int array[100];
	printf("Nhap cac phan tu cua mang:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	for (i = 0; i < n; i++) {
		if (array[i] % 3 == 0) {
			tong += array[i];
			dem++;
		}
	}
	if (dem > 0) {
		trungBinh = tong / dem;
		printf("Trung binh tong cac so chia het cho 3 trong mang la: %.2f\n", trungBinh);
	}
	else {
		printf("Khong co so nao chia het cho 3 trong mang.\n");
	}
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