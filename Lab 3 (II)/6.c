#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  int a, b, c, d;
  double root1, root2;

  printf("Enter a,b and c where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  if (d < 0) 
  {		root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
  }
  else 
  {
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
  }

  getch();
}
