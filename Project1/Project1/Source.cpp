#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char input[100];
	int check;
	scanf("%s",&input);
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] >= 65 and input[i] <= 90)
		{
			check = 1;
		}
		else if (input[i] >= 97 and input[i] <= 122)
		{
			check = 2;
		}
	}
	if (check == 1)
	{
		printf("All Capital Letter\n");
	}
	else if (check == 2)
	{
		printf("All Small Letter\n");
	}
	







	return 0;
}