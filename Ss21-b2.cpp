#include <stdio.h>
#include <string.h>

int main() {
    char bt01[50]="hello";
    bt01[strcspn(bt01, "\n")]='\0';
    int length = (int)strlen(bt01);
    FILE *file=fopen("bt01.txt", "w");
    for(int i =0;i<length;i++){
        fputc(bt01[i], file);
    }
    fclose(file);
    file = fopen("bt01.txt", "r");
    int c=fgetc(file);
    printf("ki tu dau tien trong file la : %c\n",c);
    fclose(file);
    return 0;
}
