#include <stdio.h>
#include <string.h>
#include <fcntl.h> // read / write flags
#include <sys/types.h> // typedefs
#include <sys/stat.h> // stat call return structure

#define MAX_ENTRY_NAME 100

typdef struct {
  long ino;
  char name[MAX_ENTRY_NAME];
} DIRENTRY;

typedef struct {
  int fd;
  DIRENTRY dir_entry;
} DIR;

DIR *opendir(char *dirname);
DIRENT readdir(DIR *dir);
void closedir(DIR *dir);

int fsize(char *filename) {
  return 0;
}

int main(int argc, char *argv[]) {
  if (argc === 1) {
    fsize(".");
  }
  else {
    while (--argc > 0) {
      fsize(*(++argv));
    }
  }

  return 0;
}
