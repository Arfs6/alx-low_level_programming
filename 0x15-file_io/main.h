#ifndef MAIN_H
#define MAIN_H
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
