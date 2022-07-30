#define ALLOCSIZE 1000000

static char allocbuf[ALLOCSIZE];
static char *alloc_p = allocbuf;

char *alloc(int n) {
  if (allocbuf + ALLOCSIZE - alloc_p >= n) {
    alloc_p += n;
    return alloc_p - n;
  } else
    return 0;
}

void afree(char *p) {
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    alloc_p = p;
}
