#include<stdio.h>

int main(){
	int arr[100];
	int choice,n;
	int max;
	int total=0;
	do{
		printf("MENU\n");
		printf("1.nhap so phan tu va tung phan tu\n");
		printf("2.hien thi cac phan tu ra mang\n");
		printf("3.tinh do dai\n");
		printf("4.tinh tong cac phan tu trong mang\n");
		printf("5.hien thi phan tu lon nhat\n");
		printf("6.thoat\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap so phan tu cho mang\n");
				scanf("%d",&n);
				if(n<0 || n>100){
					printf("ko hop le");
					return 1;
				}
				for(int i=0;i<n;i++){
						printf("nhap phan tu thu %d la: ",i);
						scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("cac phan tu nam trong mang la: ");
				for(int i=0;i<n;i++){
					printf("%d",arr[i]);
					printf("\t");
				}
				printf("\n");
				break;
			case 3:
				printf("do dai cau mang la: %d",n);
				printf("\n");
				break;
			case 4:
				printf("tong cua cac phan tu la: ");
				for(int i=0;i<n;i++){
					total=total+arr[i];
				}
				printf("%d",total);
				printf("\n");
				break;
			case 5:
				printf("phan tu lon nhat la: ");
				for(int i=0;i<n;i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				printf("%d",max);
				printf("\n");
				break;
		}
		
		
		
	}while(choice!=6);
	printf("hen gap lai");


	 return 0;
 }

