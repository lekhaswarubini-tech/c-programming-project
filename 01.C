  #include<stdio.h>
  int main()
  {
  float a,b;
  char ch;
  printf("enter an expression");
  scanf("%f %c %f",&a,&ch,&b);
  switch(ch)
  {
  case('+'):
  printf("result=%.2f",a+b);
  break;
  case('-'):
  printf("result=%.2f",a-b);
  break;
  case('*'):
  printf("result=%.2f",a*b);
  break;
  case('/'):
  printf("result=%.2f",a/b);
  break;
  default:
  printf("invalid operator");
  }
  return 0;
  }