#include<stdio.h>
int main(){
	int array[6]={3,1,0,7,2,6};
	int temp,size=6;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("phan tu trong mang duoc sap xep la: ");
	for(int i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
