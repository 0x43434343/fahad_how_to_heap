#include <stdio.h>
#include <stdlib.h>


typedef struct{

	char *name;
	int years;
}Expert;

Expert exp[50];


void write_to(){

	int idx;
	printf("idx:");
	scanf("%d",&idx);
	printf("Name:");
	scanf("%s",exp[idx].name);

}
int add_expert(int idx){	

	int long size;
	int input;
	printf("size:");
	scanf("%ld",&size);
	exp[idx].name = malloc(size);
	printf("Name:");
	scanf("%s",exp[idx].name);
	printf("Experience:");
	scanf("%d",&exp[idx].years);
	// to count the experts 
	idx++;
	return idx;
}
void free_expert(){

	int index;
	printf("free_expert\n");
	printf("Index:");
	scanf("%d",&index);
	free(exp[index].name);

	printf("Sucessfully free : %d\n",index);
}
void show_expert(int idx){

	char buf[8] = {0};
	printf("buf[8] @ : %p\n",&buf);
	printf("--------------------------------\n");


	for (int i=0;i < idx; i++){
		printf("Expert:%s\n",exp[i].name);
		printf("years:%d\n",exp[i].years);
	}

	printf("--------------------------------\n");

}

void show_menu(){
	int heap;
	printf("------------------------------------------------\n");
	printf("#@0x4142\n");
	printf("heap :%p\n",&heap);
	printf("------------------------------------------------\n");

	printf("1 - add_expert;\n2 - free_expert;\n3 - show_expert;\n4 - write_to\n5 - exit \n");
}

int main()

{


	int input;
	int num;
	int idx=0;
	int temp=0;
	do{
		if(temp > 0)idx=temp;

		show_menu();
		printf("Enter:");
		scanf("%d",&num);		
	switch(num){
		case 1:temp = add_expert(idx);continue;
		case 2:free_expert();break;
		case 3:show_expert(idx);break;
		case 4:write_to();break;
		case 5:printf("bye !\n");break;
		default:
			
			printf("try again sir !!\n");
			break;	
			}
	}while(num !=5);

	
		return 0;
	}

