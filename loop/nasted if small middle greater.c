#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,greater,middle,small;
	printf("Enter three number:-");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{greater=a;
	if(b>c)
	{middle=b;
	small=c;
	}
	else
	{middle=c;
	small=b;
		
	}
	}
	else if(b>a&&b>c)
	{greater=b;
	if(a>c)
	{middle=a;
	small=c;
	}
	else
	{middle=c;
	small=a;
	}
}

	else
	{greater=c;
	if(b>a)
	{middle=b;
	small=a;
	}
	else
	{middle=a;
	small=b;
	}
}
printf("\nGreatest Number=%d",greater);
printf("\nMiddle Number=%d",middle);
printf("\nSmaller Number=%d",small);
getch();

}
