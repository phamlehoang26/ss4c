#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a == 1 || a==3 || a==5 || a==7 || a==8 || a==10 || a == 12){
		printf("thang co 31 ngay");
	}else if(a == 4 || a == 6 || a == 9 || a == 11){
		printf("thang co 30 ngay");
	}else if(a == 2){
		printf("thang co 28 ngay");
	}else{
		printf("thang khong hop le");
	}
	
	return 0;
}
