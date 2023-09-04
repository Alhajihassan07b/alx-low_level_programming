#include "main.h"
#include <string.h>
/**
 * create_file - create and write into a file
 * @filename: the filename to be created
 * @text_content: the content to be copied into the file
 * Return: 1 if successful, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
    int x;
    int nletters;
    ssize_t rwr;

    if (!filename)
        return (-1);

    x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (x == -1)
        return (-1);

    if (text_content == NULL)
        text_content = "";

    nletters = strlen(text_content);

    rwr = write(x, text_content, nletters);

    if (rwr == -1 || rwr != nletters)
    {
        close(x);
        return (-1);
    }

    close(x);

	return (1);
}
