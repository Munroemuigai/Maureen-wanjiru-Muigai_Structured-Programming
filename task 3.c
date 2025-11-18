#include<stdio.h>

int main(){
    char str[100];
    printf("Munroe Muigai");
    scanf("%99s",str);

    printf("%s\n",str);

    int length= strlen(str);
    printf("%d\n",length);

    return 0;
}

