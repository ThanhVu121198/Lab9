// tim so dao nguoc cua 1 so
#include<stdio.h>
int nghichdao(int n){
	int nghichdao;
	while(n>0){
		nghichdao=nghichdao*10+n%10;
		n/=10;
	}
	return nghichdao;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("So dao nguoc la: %d",nghichdao(n));
}
