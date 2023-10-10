#include<stdio.h>
void main(){
	int n;
	float fact=1;
	printf("enter number:");
	scanf("%d",&n);
	for(n=n;n>0;n--){
		fact=fact*n;
	}
	printf("%0.2f",fact);
}
