#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <termios.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAX_ARGS     256
#define MAX_PIPES    32
#define MAX_ALIASES  128
#define MAX_JOBS     64

typedef struct {
	char *args[MAX_ARGS];
	char *infile;
	char *outfile;
	int append;
} cmd_t;
