#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count1(char str[]){
	int count1=0;
	char a;
	printf("Hay nhap 1 ki tu:");
	scanf("%s",&a);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==a){
			count1++;
		}
	}
	return count1;
}
void change(char str[]){
	char find;
	char newValue;
	printf("Nhap phan tu muon thay the: ");
    scanf(" %c", &find);
    printf("Nhap ki tu muon thay the: ");
    scanf(" %c", &newValue);
    for (int i = 0; i < strlen(str); i++) {
	    if (str[i] == find) {
            str[i] = newValue;
        }
	}
}
int main(){
	int count;
	char a,b;
	char find;
	do{
		char str[]={};
		printf("************MENU*************\n");
		printf("1. Nhap vao chuoi ki tu\n");
		printf("2. In ra noi dung chuoi\n");
		printf("3. Nhap vao 1 ki tu, dem so lan xuat hien ki tu trong chuoi\n");
		printf("4. Nhap vao 2 ki tu, thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat\n");
		printf("5. Nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap mot chuoi ki tu ngau nhien:");
			    fflush(stdin);
	            scanf("%s",&str);
	            break;
	        case 2:
			    printf("Noi dung chuoi va nhap: %s\n",str);
			    break;
			case 3:
				printf("So lan xuat hien trong chuoi: %d\n",count1(str));
				break;
			case 4:
				printf("Chuoi ban dau: %s\n",str);
				change(str);
				printf("Chuoi sau khi duoc thay doi: %s\n",str);
				break;
			case 5:
				printf("Nhap phan tu muon xoa: ");
                scanf("%c", &find);
                int j = 0;
                for (int i = 0; i < strlen(str); i++) {
                    if (str[i] != find) {
                        str[j] = str[i];
                        j++;
                    }
                }
                str[j] = '\0';
                printf("%s\n", str);
                break;
			case 6:
				exit(0);
			default:
				printf("Vui long chon gia tri tu 1-6");
		}
	}while(1==1);
}
