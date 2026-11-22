#include<stdio.h>
int main()
{
	int num1,num2;
	char opr;
	printf("Enter the values of two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("Enter an operator (+,-,*,/):");
	scanf(" %c",&opr);
	switch(opr)
	{
		case '+':
			printf("Addition is %d",num1+num2);
			break;
		case '-':
			printf("Subtraction is %d",num1-num2);
			break;
		case '*':
			printf("multiplication is %d",num1*num2);
			break;
		case '/':
			if(num2!=0)
			printf("division is %d",num1/num2);
			else
			
			printf("division is not possible");
			break;
			default:
				printf("Invalid information..!");
	}
	return 0;
}
