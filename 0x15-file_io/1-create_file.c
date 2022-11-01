#include "main.h"

/**
 *create_file - create a file
 *
 * @filename: pointer to file
 * @text_content: string to write
 * Return: file descriptor
 */

int create_file(const char *filename, char *text_content)
{
int op, wrt, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
wrt = write(op, text_content, len);

if (op == -1 || wrt == -1)
return (-1);
close(op);
return (1);
}
