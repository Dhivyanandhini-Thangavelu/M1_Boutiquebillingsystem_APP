/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>*/
#include "billing.h"
float amount(float rate, int quantity, float discount, float var);
void main()
{
	system("clear");
	int i, quantity, cash, x = 0;
	long cash_received, n_amount;
	float rate, discount, var, totalamount=0, amount1, float_part;
	char productcode[5], date[20];
	printf("\t\t\t\tBoutique\n");
	printf("\t\t\t\tAddress line 1\n");
	printf("\t\t\t\tAddress line 2\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("PRODUCTS AVAILABLE AT OUR BOUTIQUE:\n");
	printf(" 1.fusion straight kurti (size 32/34/36) @ Rs.499.00\n\t\t@ 20%s discount\t@ 2.0%s VAR\n", "%", "%");
	printf(" 2.Avaasa straight kurti (size 32/34/36) @ Rs.499.00\n\t\t@ 20%s discount\t@ 2.0%s VAR\n", "%", "%");
	printf(" 3.Long frock (Size 32/34/36/38) @ Rs.2500.00\n\t\t@ 40%s discount\t @ 9.25%s VAR\n", "%", "%");
	printf(" 4.Aline kurti (Size 32/34/36) @ Rs.600.00\n\t\t@ 20%s discount\t @ 2.5%s VAR\n", "%", "%");
	printf(" 5.Silk saree @ Rs.3000.00\n\t\t\t\t @ 0.25%s VAR\n", "%");
	printf(" 6. Handbag @ Rs.590.00\n\t\t@ 20%s discount\t @ 8.5%s VAR\n", "%", "%");
	printf(" 7.Silk cotton kurti(size 32/24/36) @ Rs.750.00\n\t\t@ 5%s discount\t@ 3.5%s VAR\n", "%", "%");
	printf(" 8. Ankle length leggigngs (size 32/34/36/38/40) @ Rs.599.00\n\t\t@ 6%s discount\t @ 2%s VAR\n", "%", "%");
	printf(" 9.mnm leggings @ Rs.690.00\n\t\t@ 10%s discount\t @ 7.25%s VAR\n", "%", "%");
	printf("10.designer readymade blouse (free size) @ Rs.999.00\n\t\t@ 15%s discount\t @ 12%s VAR\n", "%", "%");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("DATE");
	fgets(date, 20, stdin);
	printf("\t\t\tINVOICE\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("CODE\tPRODUCT NAME\t\t\t\t\t\t\t\t\t\tQUANTITY\n");
	printf("\t\tAMOUNT(Rs.)\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	for(i = 1; i!= 0; i++)
	{
		fgets(productcode, 5, stdin);
		if(strcmp(productcode, "1\n") == 0)
		{
			printf("fusion straight kurti (size 32/34/36)\t)\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 499.00;
			discount = 20;
			var = 2.0;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "2\n") == 0)
		{
			printf("\tAvaasa straight kurti (size 32/34/36)\t\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 499.00;
			discount = 20;
			var = 2.0;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "3\n") == 0)
		{
			printf("\tLong frock (Size 32/34/36/38)\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 2500.00;
			discount = 40;
			var = 9.25;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "4\n") == 0)
		{
			printf("\tAline kurti (Size 32/34/36)\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 600.00;
			discount = 20;
			var = 2.5;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "5\n") == 0)
		{
			printf("\tSilk saree\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 3000;
			discount = 0;
			var = 0.25;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "6\n") == 0)
		{
			printf("Handbag\t\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 590.00;
			discount = 20;
			var = 8.5;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "7\n") == 0)
		{
			printf("\tSilk cotton kurti\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 750;
			discount = 5;
			var = 2.5;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "8\n") == 0)
		{
			printf("\t Ankle length leggigngs\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 599.00;
			discount = 6;
			var = 2;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "9\n") == 0)
		{
			printf("\tmnm leggings\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 690.00;
			discount = 10;
			var = 7.25;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, "10\n") == 0)
		{
			printf("\tdesigner readymade blouse\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 999.00;
			discount = 15;
			var = 12;
			amount1 = amount(rate, quantity, discount, var);
			printf("\t%0.2f\n", amount1);
			totalamount += amount1;
			x += quantity;
		}
		else if(strcmp(productcode, " \n") == 0)
		{
			printf("TOTAL AMOUNT :\t%0.2f\n", totalamount);
			printf("----------------------------------------------------------------------------------\n");
			i = -1;
		}
		else
		{
			printf("PRODUCT UNAVAILABLE\n");
		}
	}
	printf("Total sold products = %d\n", x);
	printf("   Amount to be paid  = %0.2f\n", totalamount);
	n_amount = totalamount;
	float_part = totalamount - n_amount;
	if(float_part > 0.50)
		n_amount += 1;
	printf("BALANCE DUE AFTER ROUNDING = %ld\n", n_amount);
	COUNTER:
	printf("CASH RECEIVED TOTAL             = ");
	scanf("%ld", &cash_received);
	if(cash_received < n_amount)
	{
		printf("Amount insufficient. Please provide more money.\n");
		goto COUNTER;
	}
	printf("CHANGE TO BE RETURNED      = %ld\n", cash_received - n_amount);
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t** Thank you for shopping **\n");
	printf("\n*NO EXCHANGE\n");
}
float amount(float a, int b, float c, float d)
{
	float t;
	t = ((a * b) - (a * b * c / 100)) + (((a * b) - (a * b * c / 100)) * d / 100);
	return t;
}
