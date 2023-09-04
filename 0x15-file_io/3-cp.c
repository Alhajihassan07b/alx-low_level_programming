#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(int exit_code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(exit_code);
}
/**
 * main - function for char
 * @argc: parameter
 * @argv: parameter
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_src, fd_dest;
    ssize_t n;
    char buffer[BUFFER_SIZE];

    fd_src = open(file_from, O_RDONLY);
    if (fd_src == -1) {
        error_exit(98, "Error: Can't read from file");
    }

    fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_dest == -1) {
        error_exit(99, "Error: Can't write to file");
    }

    while ((n = read(fd_src, buffer, BUFFER_SIZE)) > 0) {
        if (write(fd_dest, buffer, n) != n) {
            error_exit(99, "Error: Can't write to file");
        }
    }

    if (n == -1) {
        error_exit(98, "Error: Can't read from file");
    }

    if (close(fd_src) == -1) {
        error_exit(100, "Error: Can't close fd");
    }

    if (close(fd_dest) == -1) {
        error_exit(100, "Error: Can't close fd");
    }

    return 0;
}
