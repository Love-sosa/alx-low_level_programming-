#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of its own main function.
*
* @argc: The number of arguments (should be 2).
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success, 1 on incorrect number of arguments, 2 on negative
*number of bytes.
*/
int main(int argc, char **argv)
{
int num_bytes, i;
char *addr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

addr = (char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%.2hhx", *(addr + i));
if (i != num_bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
