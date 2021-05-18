#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 2000
#define MIN -2000

int main(int argc, char **argv)
{
	srand(time(NULL));
	if (!(argc > 1))
		return (1);
	int num = atoi(argv[1]);
	while(num-- > 0)
	{
		printf("%d", (MIN + rand() % (MAX - MIN + 1)));
		if (num != 0)
			printf(" ");
	}
	return(0);
}

// ARG=$(./a.out 10)