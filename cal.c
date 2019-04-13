#include<stdio.h>
int main()

{
  float num1, num2 , total;
  char ch;
 
 
  printf("Enter your numbetr 1 :");
  scanf("%f" , &num1);
  printf("Enter your numbetr 2 :");
  scanf("%f" , &num2);
  printf("Entwer your operter");
  scanf("%s" ,&ch);

if (ch == 'a')
{
     total = num1 + num2;
     printf("%f" ,total);
}

     else if (ch == 's')
{
     total = num1 - num2;
     printf("%f" ,total);
}

     else if (ch == 'd')
{
     total = num1 / num2;
     printf("%f" ,total);
}

      else if (ch == 'm')
{
     total  = num1*num2;
     printf("%f" ,total);
}
 else

  printf("worng input");

return 0;
}

