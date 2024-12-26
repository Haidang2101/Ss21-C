#include <stdio.h>
#include <string.h>

struct Book {
    char bookId[50];
    char title[50];
    char author[50];
    float price;
    char category[50];
};

void addBook(struct Book book1[], int *n);

int main() {
    struct Book book[100];
    int choose; 
    int n = 0;  

    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va thong tin sach \n");
        printf("2. Luu thong tin sach vao file \n");
        printf("3. Lay thong tin sach tu file \n");
        printf("4. Hien thi thong tin sach \n");
        printf("5. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &choose);
        getchar(); 

        switch (choose) {
            case 1: {
                addBook(book, &n);
                break;
            }
            case 2: {
                printf("Chuc nang luu thong tin sach dang cho xu ly.\n");
                break;
            }
            case 3: {
                printf("Chuc nang lay thong tin sach dang cho xu ly.\n");
                break;
            }
            case 4: {
                printf("Chuc nang hien thi thong tin sach dang cho xu ly.\n");
                break;
            }
            case 5: {
                printf("Thoat chuong trinh.\n");
                break;
            }
            default: {
                printf("Gia tri nhap vao khong thoa man.\n");
                break;
            }
        }
    } while (choose != 5);

    return 0;
}

void addBook(struct Book book1[], int *n) {
    printf("Moi ban nhap so luong sach: ");
    scanf("%d", n);
    getchar(); 

    for (int i = 0; i < *n; i++) {
        printf("\nNhap thong tin cho sach thu %d:\n", i + 1);

        printf("Nhap ma sach: ");
        fgets(book1[i].bookId, sizeof(book1[i].bookId), stdin);
        book1[i].bookId[strcspn(book1[i].bookId, "\n")] = '\0'; 

        printf("Nhap ten sach: ");
        fgets(book1[i].title, sizeof(book1[i].title), stdin);
        book1[i].title[strcspn(book1[i].title, "\n")] = '\0'; 

        printf("Nhap ten tac gia: ");
        fgets(book1[i].author, sizeof(book1[i].author), stdin);
        book1[i].author[strcspn(book1[i].author, "\n")] = '\0';

        printf("Nhap gia sach: ");
        scanf("%f", &book1[i].price);
        getchar(); 

        printf("Nhap the loai: ");
        fgets(book1[i].category, sizeof(book1[i].category), stdin);
        book1[i].category[strcspn(book1[i].category, "\n")] = '\0';
    }
    printf("\nDa nhap thong tin sach thanh cong.\n");
}

