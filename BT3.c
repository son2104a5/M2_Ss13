#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 1;
    printf("Nhap day ki tu muon in: ");
    scanf("%s", str);
    for (int i = 0; i<strlen(str); i++) {
        count = 1;
        for (int j = i + 1; j<strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        printf("Gia tri [%c] duoc lap %d lan\n", str[i], count);
    }
}
