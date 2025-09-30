#include<stdio.h>
#include<unistd.h>

void	ex1()
{
	int	account;
	float	balance, charges, credits, limit, newbalance;
	while(account =! -1)
	{
		printf("Enter account number (-1 to end):  ");
		scanf("%d", &account);

		printf("Enter begining balance:  ");
		scanf("%f", &balance);
		
		printf("Enter total charges:	");
		scanf("%f", &charges);

		printf("Enter total credits:	");
		scanf("%f", &credits);

		printf("Enter credits limit:	");
		scanf("%f", &limit);

		printf("Account:	%f\n",  account);
		printf("Credits limit:	%f\n" , limit);
		
		newbalance = balance + credits;

		printf("Credits:	%f\n" , newbalance);
		
		if (newbalance > limit)
		{
			printf("******Credit limit exceeded****");
		}

	}
	printf("End");
}


void ex2() {
    int value, count = 0;
    int sum = 0;
    float average;

    printf("Enter integers (9999 to end): ");

    while (1) {
        scanf("%d", &value);

        if (value == 9999) {
            break; // stop when sentinel is found
        }

        sum += value;
        count++;
    }

    if (count != 0) {
        average = (float) sum / count;
        printf("Average is: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
}

void ex3() {
    char exl[] = "    *    ";
    int x = 4, y = 4;
    do {
        write(1, exl, 9);
        write(1, "\n", 1);
        x--;
        y++;
        exl[x] = '*';
        exl[y] = '*';
    } while (x > 0);

    do {
        exl[x] = ' ';
        exl[y] = ' ';
        write(1, exl, 9);
        write(1, "\n", 1);
        x++;
        y--;
    } while (y > x);

    return 0;
}

void ex4() {
    int n;
    do {
        printf("Enter an odd number between 1 and 19: ");
        scanf("%d", &n);
    } while (n < 1  n > 19  n % 2 == 0);

    int mid = n / 2; 
    for (int i = 0; i < n; i++) {
        int stars = (i <= mid) ? (2 * i + 1) : (2 * (n - i - 1) + 1);
        int spaces = (n - stars) 
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
