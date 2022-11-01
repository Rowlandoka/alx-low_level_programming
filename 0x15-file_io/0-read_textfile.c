#include "main.h"

/**
 * read_textfile - read a textfile and prints
 * @filename: name of file to be printed
 * @letters: number of letters to read and print
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t O, R, W;
char *buff;

if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
O = open(filename, O_RDONLY);
R = read(O, buff, letters);
W = write(STDOUT_FILENO, buff, R);

if (O == -1 || R == -1 || W == -1 || W != R)
{
free(buff);
return (0);
}
free(buff);
close(O);
return (W);
}
