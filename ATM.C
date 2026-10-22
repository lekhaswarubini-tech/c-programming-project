2#include<stdio.h>

int main()
{
int pin=1234;
int enterpin;
int choice;
float balance=5000;
float amount;

printf("=====welcome=====\n");

printf("enter your pin");
scanf("%d", &enterpin);

if(enterpin != pin)
{
printf("invalid pin!\n");
return 0;
}

printf("\nloginsuccessful!\n");

do
{
printf("\n=====ATM MENU=====\n");
printf("1. check balance\n");
printf("2. deposit money\n");
printf("3. withdraw money\n");
printf("4. exit\n");

printf("enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
printf("your balance:rs. %.2f\n",balance);
break;

case 2:
printf("enter deposit amount: ");
scanf("%f", &amount);

if(amount>0)
{
balance = balance + amount;
printf("money deposit successfully!\n");
printf("new balance:rs. %.2f\n",balance);
}
else
{
printf("invalid amount!\n");
}
break;

case 3:
printf("enter withdrawal amount: ");
scanf("%f", &amount);

if(amount<=0)
{
printf("invalid amount!\n");
}
else if(amount<=balance)
{
balance=balance-amount;
printf("please collect your cash.\n");
printf("remaining balance: rs. %2f\n",balance);
}
else
{
printf("insufficient balance!\n");
}
break;

case 4:
printf("thank you for using atm!\n");
break;

default:
printf("invalid choice!\n");
}

}while(choice != 4);

return 0;
}