#include <stdio.h>
#include <string.h>
#include <fcntl.h> // read / write flags
#include <sys/types.h> // typedefs
#include <sys/stat.h> // stat call return structure

#define MAX_ENTRY_NAME 100

typedef struct {
  long ino;
  char name[MAX_ENTRY_NAME];
} DIRENTRY;

typedef struct {
  int fd;
  DIRENTRY dir_entry;
} DIR;

DIR *opendir(char *dirname);
DIRENTRY readdir(DIR *dir);
void closedir(DIR *dir);

void fsize(char *);
void dirwalk(char *);

void fsize(char *filename) {
  struct stat stat_buffer;
  if ((stat(filename, &stat_buffer) == -1)) {
    fprintf(stderr, "%s\n", "Could not open file");
    return;
  }

 if ((stat_buffer.st_mode & S_IFMT) == S_IFDIR) {
   dirwalk(filename);
 }

  printf("%8ld %s\n", stat_buffer.st_size, filename);
}

void dirwalk(char *filename) {
  char name[MAX_ENTRY_NAME];
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    fsize(".");
  }
  else {
    while (--argc > 0) {
      fsize(*(++argv));
    }
  }

  return 0;
}
