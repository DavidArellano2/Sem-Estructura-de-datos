#include <stdio.h>

int main() {
    int n1, n, d,primo;

    printf("Hasta cual numero primo deseas mostrar: ");
    scanf("%d", &n1);

    n = 2;
    while (n1 > 0) {
        primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", n);
            n1--;
        }
        n++;
    }
    return 0;
}
