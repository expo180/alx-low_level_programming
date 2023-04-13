#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: The array size of bytes
 * @c: the character 
 * Return: NULL if size = 0 and a pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	else
		arr = malloc(sizeof(char)*size);
		return arr[0] = c;
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
