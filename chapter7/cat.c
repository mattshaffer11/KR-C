#include <stdio.h>

void copy_file(FILE *fp1, FILE *fp2) {
  int c;
  while ((c = getc(fp1)) != NULL) {
    putc(c, fp2);
  }
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    copy_file(stdin, stdout);
  }
  else {
    int i;
    FILE *fp;
    for (i = 1; i < argc; i++) {
      if ((fp = fopen(argv[i], "r")) != NULL) {
        copy_file(fp, stdout);
        fclose(fp);
      }
      else {
        fprintf(stderr, "%s: %s: No such file or directory\n", argv[0], argv[i]);
      }
    }
  }
}
