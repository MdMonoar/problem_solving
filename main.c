#include <stdio.h>

int main() {
    int target, n = 0;
    char ch = 'A';
    
    printf("Enter number of lines: ");
    scanf("%d", &target);
    target *= 2;
    
    for (int i = 1; i < target; i += 2) {
        for (int j = i; j > 0; j -= 2) {
            int jn = j % 10;
            printf("%d ", jn);
        }
        printf("%c\n", ch);
        n++;
        if (n % 2 == 0) {
            ch++;
        }
    }
    
    return 0;
}
