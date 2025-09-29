#include<stdio.h>
int main(){
	int pass=4567;
	int up;
	do{
		printf("enter your password here :\n");
		scanf("%d",&up);
		if(up!=pass) printf("wrong password\nEnter again\n");
	}
	while(up!=pass);
	if(up==pass){
		printf("correct password\n");
	}
	return 0;
}

