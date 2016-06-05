#include <unistd.h>
#define BUFFER_SIZE 4096

int main() {
  char buffer[BUFFER_SIZE];
  int n_bytes;

  while ((n_bytes = read(0, buffer, BUFFER_SIZE)) > 0) {
    write(1, buffer, n_bytes);
  }

  return 0;
}
