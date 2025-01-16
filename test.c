#include <stdio.h>
int main()
{

    char buffer[128];

	printf("Hello, please enter a comma separated list :");

	scanf("%s", buffer);
	

    int i;
    for (i = 0; i < sizeof(buffer); i++)
        {
        printf("%c", buffer[i]);
        }
    printf("\n");

	return 0;
	
}
