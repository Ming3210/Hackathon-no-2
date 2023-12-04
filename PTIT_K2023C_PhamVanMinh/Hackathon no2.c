#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int n,temp;
int min_index;
struct todoList{
	int id;
	char starDate[50];
	char endDate[50];
	char content[100];
	bool status;
};

struct todoList work[100];

void enterTodoList(int *n)
{
	printf("Nhap so viec muon lam :");
	scanf("%d",n);
	for(int i=0;i < *n ; i++){
		printf("Cong viec thu %d\n",i+1);
		printf("Id :"); scanf("%d",&work[i].id);
		printf("Ngay bat dau :"); scanf("%s",&work[i].starDate);
		printf("Ngay ket thuc :"); scanf("%s",&work[i].endDate);
		printf("Noi dung :"); scanf("%s",&work[i].content);
		printf("Trang thai (1 = true , 0 = false) :"); scanf("%d",&work[i].status);
		printf("\n");
	}
}

void displayTodoList(int *n)
{
	for(int i=0;i<*n;i++){
		printf("Todolist %d\n",i+1);
		printf("Id : %d\n",work[i].id);
		printf("Ngay bat dau : %s\n",work[i].starDate);
		printf("Ngay ket thuc : %s\n",work[i].endDate);
		printf("Noi dung : %s\n",work[i].content);
		if(work[i].status==0){
			printf("Chua hoan thanh\n");
		}else if(work[i].status==1){
			printf("Da hoan thanh\n");
		}else {
			printf("\n");
		}
		printf("\n");
	}
}

void addLastTodoList(int *n)
{
	(*n)++;
	for(int i=*n;i <= *n ; i++){
		printf("Cong viec thu %d\n",i);
		printf("Id :"); scanf("%d",&work[i-1].id);
		printf("Ngay bat dau :"); scanf("%s",&work[i-1].starDate);
		printf("Ngay ket thuc :"); scanf("%s",&work[i-1].endDate);
		printf("Noi dung :"); scanf("%s",&work[i-1].content);
		printf("Trang thai (1 = true , 0 = false) :"); scanf("%d",&work[i-1].status);
		printf("\n");
	}
}

void fixTodoList(int *n)
{
	int fix;
	printf("Nhap Id muon sua :");
	scanf("%d",&fix);
	if(fix >*n){
		printf("Khong co hoat dong\n");
	}
	printf("Cong viec thu %d\n",fix);
	printf("Id :"); scanf("%d",&work[fix].id);
	printf("Ngay bat dau :"); scanf("%s",&work[fix-1].starDate);
	printf("Ngay ket thuc :"); scanf("%s",&work[fix-1].endDate);
	printf("Noi dung :"); scanf("%s",&work[fix-1].content);
	printf("Trang thai (1 = true , 0 = false) :"); scanf("%d",&work[fix-1].status);
	printf("\n");
}

void deleteTodoList(int *n,int del)
{
	
	for(int i=del-1 ; i<*n;i++){
		work[i] = work[i+1];
	}
	(*n)--;
}

void find(int *n)
{
	for(int i=0;i<*n;i++)
	{
		
	
			if(work[i].content>work[i+1].content){
				work[temp] = work[i];
				work[i]=work[i+1];
				work[i+1]=work[temp];
			}
	}
}

void True(int *n)
{
	for(int i=0;i<*n;i++){
		
	}
}

int main()
{
	int del;
	int subChoice;
	enterTodoList(&n);
	do{
		int choice;
		printf("MENU\n");
		printf("1. In ra toan bo danh sach\n");
		printf("2. Them 1 danh sach vao cuoi\n");
		printf("3. Sua todoList o id bat ki\n");
		printf("4. Xoa 1 todoList\n");
		printf("5. Sap xep tang dan theo content\n");
		printf("6. Thuc hie tim kiam nhi phan va in ra content cua todolist\n");
		printf("7. Thuc hien tim kiem va in ra cac mang theo status\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban :");
		scanf("%d",&choice);
		printf("\n");
		
		switch (choice){
			case 1:
				displayTodoList(&n);
				break;
			case 2:
				addLastTodoList(&n);
				break;
			case 3:
				fixTodoList(&n);
				break;
			case 4:
				printf("Nhap phan tu can xoa :");
				scanf("%d",&del);
				deleteTodoList(&n, del);
				break;
			case 5:
				find(&n);
				break;
			case 6:
				break;
			case 7 :
				
				printf("Tim kiem theo :\n");
				printf("9, Da hoan thanh\n");
				printf("10, Chua hoan thanh\n");
				printf("Lua chon cua ban :");
				scanf("%d",&subChoice);
				switch(subChoice){
					case 9:
						True;
				}
				break;
			case 8:
				exit(0);
		}
	}while(1==1);
	
	
}