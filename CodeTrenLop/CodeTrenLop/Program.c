// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void DEMoMang1Chieu() {
    // DEMO mang 1 chieu
    // rarray = a
    // int array[4];
    int array[4] = { 100,200,300,400 };
    // mang duoc danh so tu 0
    //1
    scanf("%d", &array[0]);
    scanf("%d", &array[1]);
    scanf("%d", &array[2]);
    scanf("%d", &array[3]);

    printf("%d", array[0]);printf("\n");
    printf("%d", array[1]);printf("\n");
    printf("%d", array[2]);printf("\n");
    printf("%d", array[3]);printf("\n");
    //1
    //1 voi 2 bang nhau deu laf vong lap
    //2
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d", array[i]);printf("\n");
    }
    //2
}
void sapXeptheothutuMang1Chieu() {
    int integerArray[100];
    int length;
    printf("So luong phan tu mang: ");
    scanf_s("d", &length);
    printf("Nhap du lieu cho mang %d phan tu\n ", &length);
    for (int i = 0; i < length; i++)
    {
        printf("Mang[%d]= ", i);
        scanf("%d", &integerArray[i]);
    }
    for (int i = 0; i < length; i++)
    {
        printf("Mang[%d]= %d\n", i, integerArray[i]);

    }
}

int main() {
    int integerArray[100];
    int i;
    int tmp; // temperary
    int length;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &length);
    printf("Nhap du lieu mang %d phan tu\n", length);
    for (i = 0; i < length; i++)
    {
        printf("manf[%d] = ", i);
        scanf("%d", &integerArray[i]);
    }

    printf("Sap xep tang dan du lieu mang %d phan tu\n", length);
    for (i = 0; i < length - 1; i++)
    {
        if (integerArray[i] > integerArray[i + 1])
        {
            tmp = integerArray[i];
            integerArray[i] = integerArray[i + 1];
            integerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat du lieu mang %d phan tu Tang dan\n", length);

    for (i = 0; i < length; i++)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);
    }
    printf("Xuat du lieu mang %d phan tu Giam dan\n", length);

    for (i = 0; i < length; i++)
    {
        printf("mang[%d] = %d\n", i, integerArray[i]);
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