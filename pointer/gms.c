#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,*p,*q,*r,g,s,m;
	printf("Enter three numbers : \n");
	scanf("%d%d%d",&a,&b,&c);
	p=&a;
	q=&b;
	r=&c;
	if(*p>*q&&*p>*r)
	{
	    g=*p;
		if(*q>*r)
		{
		  m=*q;
		  s=*r;
		}
		else
		{
		   m=*r;
		   s=*q;
		}
	}
	else if(*q>*p&&*q>*r)
	{
		g=*q;
		if(*p>*r)
		{
		   m=*p;
		   s=*r;
		}
		else
		{
			m=*r;
			s=*p;
		}
	}
	else
	{
		g=*r;
		if(*p>*q)
		{
			m=*p;
			s=*q;
		}
		else
		{
			m=*q;
			s=*p;
		}
	}
	printf("Greater = %d\n",g);
	printf("Middle = %d\n",m);
	printf("Smallest = %d",s);
	getch();
}
