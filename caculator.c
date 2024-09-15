#include <stdio.h>
int sub(int a, int b) {
    return a - b;
}
int main() {
    int a,b;
    printf("Hay nhap hai so a va b\n");
    scanf("%d%d",&a, &b);
    printf("Ket qua la %d",sub(a, b));
    return 0;
}