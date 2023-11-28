#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  rChain(char str[]){
	int length;
	length=strlen(str);
	for(int i = 0; i<length/2; i++){
        char tg = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = tg;
    }
    return 0;
}
int alphabet(char str[]){
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			count++;
		}
	}
	return count;
}
int numbers(char str[]){
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='0'&&str[i]<='9'){
			count++;
		}
	}
	return count;
}
int sChar(char str[]){
	int count=0;
	for(int i=0;i<strlen(str);i++){
		if((str[i]>=' '&&str[i]<='/')||(str[i]>=':'&&str[i]<='@')||(str[i]>='['&&str[i]<='`')||str[i]>='|'){
			count++;
		}
	}
	return count;
}
int main(){
	int count=0;
	do{
		char str[]={};
		printf("**************MENU***************\n");
		printf("1. Nhap vao chuoi ki tu\n");
		printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. In ra so luong ki tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		printf("Lua con cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			    printf("Nhap mot chuoi ki tu ngau nhien:");
			    fflush(stdin);
	            scanf("%s",&str);
	            break;
	        case 2:
			    printf("Chuoi ban vua nhap co do dai %d\n",strlen(str));
			    printf("Noi dung chuoi va nhap: %s\n",str);
			    break;
			case 3:
				rChain(str);
				printf("Chuoi dao nguoc: %s\n",str);
				break;
			case 4:
				alphabet(str);
				printf("So chu cai co trong chuoi: %d\n",alphabet(str));
				break;
			case 5:
				numbers(str);
				printf("So chu so co trong chuoi: %d\n",numbers(str));
				break;
			case 6:
				sChar(str);
				printf("So ki tu dac biet trong chuoi: %d\n",sChar(str));
				break;
			case 7:
				exit(0);
			default:
				printf("Vu long chon gia tri tu 1-7\n");
		}
	}while(1==1);
}
