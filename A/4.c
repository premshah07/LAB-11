#include<stdio.h>
void main(){
	int x,y,z=1;
	printf("Enter val of x:");
	scanf("%d",&x);
	printf("Enter power y:");
	scanf("%d",&y);
	for(y=y;y>0;y--){
		z=z*x;
	}
	printf("x^y = %d",z);
}
