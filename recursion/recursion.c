# include <stdio.h>

void draw(int n);

int main()
{
	int userInput;
	 scanf("Height: %d ", userInput)
	draw(userInput);
}

void draw(int n)
{
	if (n ==0)
	{
		return;	
	}

	draw(n-1);

	for(int i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
}
