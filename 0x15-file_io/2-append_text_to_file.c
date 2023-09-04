#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the string to append.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int x;
    ssize_t nletters;
    ssize_t rwr;

    if (!filename)
        return (-1);

    x = open(filename, O_WRONLY | O_APPEND);

    if (x == -1)
        return (-1);

    if (!text_content)
    {
        close(x);
        return (1);
    }

    for (nletters = 0; text_content[nletters]; nletters++)
        ;

    rwr = write(x, text_content, nletters);

    if (rwr == -1 || rwr != nletters)
    {
        close(x);
        return (-1);
    }

    close(x);

    return (1);
}
