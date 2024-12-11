#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="Do Thao Minh";  
    int len, i;
    len = strlen(str);
    printf("Chuoi dao nguoc la: ");
    for (i = len ; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
