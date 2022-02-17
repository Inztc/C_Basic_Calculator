#include <stdio.h>

int	main(void)
{
	float	value1;
	float	value2;
	char	operator;

	printf("Type your number and operator here.\n");
	scanf("%f %c %f", &value1, &operator, &value2);

	switch (operator)
	{
		case '+':
			printf("%.2f\n", value1 + value2);
			break;

		case '-':
			printf("%.2f\n", value1 - value2);
			break;

		case '*':
			printf("%.2f\n", value1 * value2);
			break;

		case '/':
			if(value2 == 0)
				printf("division by zero.\n");
			else
				printf("%.2f\n", value1 / value2);
			break;

		default:
			printf("Unknown Operator.\n");
			break;
	}
	return 0;
}
