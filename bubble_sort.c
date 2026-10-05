#include<stdio.h>

int main(){
	int a[8],i,j,zhong;
	printf("Please input 8 numbers:");
	for(i = 0; i < 8; i++) {
	    scanf("%d", &a[i]);
	}
	for(i = 0; i < 7; i++){
		for(j = 0; j < 7-i; j++){
			if(a[j]>a[j+1]){
				zhong=a[j];
				a[j]=a[j+1];
				a[j+1]=zhong;
			}
		}
	}
	 printf("After sorting:");
	 for(i = 0; i < 8; i++) {
	    printf(" %d", a[i]);
	} 
	
	return 0;
}
