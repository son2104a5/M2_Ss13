#include <stdio.h>
#include <string.h>
int main(){ 
    int max = 0;
    int count = 0, j, changeCount = 0,start,end;
    char str[100];
    printf("Nhap chuoi ");
    scanf("%s", &str);
   	char str2[100];
    for (int i = 0; i < strlen(str); i++){
        for (j = changeCount; j < i; j++){
            if (str[i] == str[j]||i==strlen(str)-1){
                if (max < count){
                    start= changeCount;
                    end=i;
                    max = count;
                }
                count = 0;
                changeCount=i;
            }
        }
        count++;
    }
    for (int i = start ; i < end; i++){
        printf("%c",str[i]);
        scanf("%c",&str2);
    }
    printf("%d",strlen(str2)+1);
}
