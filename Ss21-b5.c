#include <stdio.h>
#include <string.h>

int main() {
    int m;
    printf("Hay nhap vao so dong : ");
    scanf("%d",&m);
    fflush(stdin);
    FILE *file=fopen("bt05.txt", "w");
    char string[50];
    for(int i=0;i<m;i++){
        printf("Hay nhap dong thu %d cho file :",i+1);
        fgets(string, 50, stdin);
    
        fputs(string, file);
        
    }
    fclose(file);
    file =fopen("bt05.txt", "r");
    int c=fgetc(file);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(file);
    }
    fclose(file);
    return 0;
}
