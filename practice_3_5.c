#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	float a = 12.5f;

	printf("%f\t%d\n", a,a);
	printf("%d\t%f\n", a,a);
	printf("%f\n", a);
	printf("%d\n", a);
	printf("%d\n",a);
	printf("%f\n", a);
	
	return 0;
}

#include<stdio.h>
int main()
{
    double a, b;
    char ch;
    while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
    {
        switch (ch)
        {
        case '+':
            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0)printf("Wrong!Division by zero!\n");
            else printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
            break;
        default:
            printf("Invalid operation!\n");
            break;

        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int ch, i;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch; i++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

#include<stdio.h>
int main()
{
    int ch, i, j;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch; i++)
        {
            for (j = 0; j < ch; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }


    return 0;
}