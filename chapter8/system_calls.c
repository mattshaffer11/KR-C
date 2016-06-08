#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
  char buffer[BUFFER_SIZE];
  int n_bytes;

  if (argc != 2) {
    printf("%s: usage error.\n", argv[0]);
    exit(1);
  }

  int fd = open(argv[1], O_RDONLY, 0);

  while ((n_bytes = read(fd, buffer, BUFFER_SIZE)) > 0) {
    write(1, buffer, n_bytes);
  }

  return 0;
}
