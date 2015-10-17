#include<stdio.h>
#include"hi.h"
int main()
{	
	//printf("dd\n");
// 	Flut flut(1,2);
// 	flut.F();
	Flut *fl=NULL;
	fl=new Flut(1);
	int a ;

	delete(fl);
	return 0;
}


