// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include<string.h>

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
void mangonl(){
    

        int intergerarray[100];//mang 
        int length;
        printf("Nhap so phan tu mang: ");
        scanf("%d", &length);
        for (int i = 0; i < length; i++)// i dai dien cho chi so
        {
            printf(" nhap gia tri phan tu tai vi tri %d: ", i);
            scanf("%d", &intergerarray[i]);
        }
        // xuat
        printf(" In ra ca phan tu mang: \n");
        for (int i = 0; i < length; i++)
        {
            //in ra gia trij phan tu
            printf("%d\t", intergerarray[i]);
        }


        // tim max,min
        int min = intergerarray[0], max = intergerarray[0];
        for (int i = 0; i < length; i++)
        {
            if (min > intergerarray[i])
            {
                min = intergerarray[i];
            }
            if (max < intergerarray[i])
            {
                max = intergerarray[i];
            }
        }
        printf("\n gia tri min =%d\n ", min);
        printf("\n gia tri max =%d\n ", max);


        // SAP XEP 
                  // nguyen tac lay tung phan tu trong mang (A) ss voi tung phan tu sau no
                  // Neu phan tu nao nho hon no(A) thi hoan vi 2 so do cho nhau
        int hVi;
        for (int i = 0; i < length; i++) // Duyet tung phan tu mang
        {
            for (int j = 0; j < length; j++)
            {// duyet tung phan tu sau phan tu thu i
                if (intergerarray[i] > intergerarray[j])
                {
                    hVi = intergerarray[i];
                    intergerarray[i] = intergerarray[j];
                    intergerarray[j] = hVi;
                }
            }
        }
        printf("\n IN RA CAC PHAN TU MANG TANG DAN==\n");
        for (int i = 0; i < length; i++)
        {//in ra gia tri phan tu
            printf("%d\t", intergerarray[i]);
        }
        return 0;
    
    // C1-khhai bao bien mang va biet truoc so phan tu mang
    //int number[5];
    //C2 khhai bao bien mang va Khong biet truoc so phan tu mang 

    //duyet mang va thuc hien cong viec
    //=> duyet qua cac phan tu cua mang
    //for(<khoi tao gia tri ban dau>;<dieu kien>;<buoc nhay>){Cong viec}
    //<khoi tai gia trij ban dau>:chi so dau tien cua mang
    //-> vi tri (chi so)cua phan tu dau tien ta muon duyet
    // <dieu kien>:nho hon so phan tu trong mang
    //<buoc nhay>nhay qua tung phan 1 thong qua gia tri chu chi so 
}
void ngay291125() {
    int intergerarray[100];
    int length;
    int i;
    int tmp;
    printf("nhap so luong phan tu mang:");
    scanf("%d", &length);
    printf("nhap du lieu cho mang %d phan tu\n", length);
    for (int i = 0; i < length; i++)
    {
        printf("mang[%d]=", i);
        scanf("%d", &intergerarray[i]);
    }
    printf("xap xep tang dan du lieu mang %d phan tu\n");
    for (i = 0; i < length - 1; i++)
    {
        if (intergerarray[i] > intergerarray[i + 1])
        {
            tmp = intergerarray[i];
            intergerarray[i] = intergerarray[i + 1];
            intergerarray[i + 1] = tmp;
            i = -1;// reset lai vong lap

        }
    }
    printf("xuat mang du lieu mang %d phan tu\n");// theo thu tu giam dan
    for (i = length - 1; i > -1; i--)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
    }
    printf("xuat mang du lieu mang %d phan tu\n", length);// theo tang dan
    for (i = 0; i < length; i++)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
    }
}
void Mang2Chieu(){
    char  Kytu = 'A';// chi 1 ki tu - nhay 'a' chi 1 ki tu, nha" nhieu ki tu
    //  string - "string.h"
    char MAngKyTu[10] = { 'A','n','h' };
    for (int i = 0; i < 3; i++)
    {
       
        scanf(" %c", &MAngKyTu[i]);
        // dung IF cho cac ki tu dac biet, Dung vong lap
        if (MAngKyTu[i] == '.')
        {
            break;
        }
    }
    //gets thay the cho for
    //gets(MangKyTu);k dung dc voi vsua
    /*for (int i = 0; i < 3; i++)
    {
        scanf("%c", MAngKyTu[i]);
    }*/
    puts(MAngKyTu);


    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang tai vi tri[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", array[i][j]);

        }
        printf("\n");
    }
}
void DemoString() {
    char  Kytu = 'A';// chi 1 ki tu - nhay 'a' chi 1 ki tu, nha" nhieu ki tu
    //  string - "string.h"
    char MAngKyTu[10] = "Anh";
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c", &MAngKyTu[i]);
    }
    //gets thay the cho for
    //gets(MangKyTu);k dung dc voi vsua
    for (int i = 0; i < 3; i++)
    {
        printf("%c", MAngKyTu[i]);
    }printf("\n");
    //puts(MAngKyTu);


    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang tai vi tri[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", array[i][j]);

        }
        printf("\n");
    }
}
void ngay5thang11() {
    // string - "string.h"
    char mangKyTu[50];

    while (getchar() != '\n')

        printf("Nhap du lieu: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);

    printf("%s", mangKyTu);
    printf("\n");
    //puts(mangKyTu); // thay the cho mang for

    printf("String Length: ");
    printf("%d", strlen(mangKyTu) - 1);  //-1 de bo ky tu xuong dong
    printf("\n");
    printf("String Compare The same As: ");
    printf("%d", strcmp("aBc"), ("aBc"));   
    printf("String Compare : ");
    printf("%d", strcmp("A"), ("B"));   
    printf("\n");
    printf("String Compare: ");
    printf("%d", strcmp("B"), ("A"));
}
void tenTuoi() {
    //Khai bao bien dung de nhap chuoi
    char hoTen[100];
    int tuoi;

    //nhap so
    printf("Nhap tuoi cua ban: ");
    scanf("%d", &tuoi);
    fflush(stdin);

    //nhap chuoi
    printf("Nhap ho ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);

    //in ra chuoi
    printf("Ho ten vua nhap: %s", hoTen);
    printf("Tuoi vua nhap: %d", tuoi);

    return 0;
}
//
//
int main() {
    int intergerarray[100];
    int length;
    int i;
    int tmp;
    printf("nhap so luong phan tu mang:");
    scanf("%d", &length);
    printf("nhap du lieu cho mang %d phan tu\n", length);
    for (int i = 0; i < length; i++)
    {
        printf("mang[%d]=", i);
        scanf("%d", &intergerarray[i]);
    }
    printf("xap xep tang dan du lieu mang %d phan tu\n");
    for (i = 0; i < length - 1; i++)
    {
        if (intergerarray[i] > intergerarray[i + 1])
        {
            tmp = intergerarray[i];
            intergerarray[i] = intergerarray[i + 1];
            intergerarray[i + 1] = tmp;
            i = -1;// reset lai vong lap

        }
    }
    printf("xuat mang du lieu mang %d phan tu\n");// theo thu tu giam dan
    for (i = length - 1; i > -1; i--)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
    }
    printf("xuat mang du lieu mang %d phan tu\n", length);// theo tang dan
    for (i = 0; i < length; i++)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
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