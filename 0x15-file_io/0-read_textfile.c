#include "main.h"

/**
 * read_textfile - read a textfile and prints
 * @filename: name of file to be printed
 * @letters: number of letters to read and print
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t readtext, wrt, fn;
char *buff;

if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
fn = open(filename, O_RDONLY);
readtext = read(fn, buff, letters);
wrt = write(STDOUT_FILENO, buff, readtext);

if (fn == -1 || readtext == -1 || wrt == -1 || wrt != readtext)
{
free(buff);
return (0);
}

free(buff);
close(fn);

return (wrt);
}
