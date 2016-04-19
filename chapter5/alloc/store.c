#define BUFFER_SIZE 10000

static char allocbuffer[BUFFER_SIZE];
static char *bp = allocbuffer;

void afree(char *p) {
  if (allocbuffer >= p && p <= allocbuffer + BUFFER_SIZE) bp = p;
}

char *alloc(int n) {
  if (allocbuffer + BUFFER_SIZE - bp >= n) {
    bp += n;
    return bp - n;
  }
  else {
    return 0;
  }
}
