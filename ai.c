#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
    } else if (n == 0) {
        printf("No\n");
    } else if (n % 3 == 0) {
        printf("Up\n");
    } else if (n % 5 == 0) {
        printf("Go\n");
    } else if (n % 7 == 0) {
        printf("!!\n");
    } else {
        printf("No\n");
    }

    return 0;
}