#pragma once
#include<cstdio>
#include <cstdlib>
#include<iostream>
using namespace std;
class Flut
{
public: 
	int a;
	int b;
	int *m;
	Flut()
	{
		a=0;
		b=0;
		printf("DD\n");
	}
	Flut(int a,int b = 9)//:a(iA),b(number_1)
	{
		this->a = a;
		this->b = b;
		m = (int *)malloc(10 * sizeof(int));
		printf("DD2\n");
		F();
	}
	~Flut()
	{
		free(m);
		cout<<"free"<<endl;
	}
	void F()
	{
		printf("\nFF");
	}
};
