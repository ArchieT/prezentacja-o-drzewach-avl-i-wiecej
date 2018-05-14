#include <stdlib.h>
#include <string.h>
#define E 1
#define EM (E + 1)
#define EMP (EM + 1)
#define D (1 << E)
#define DP (D + 1)
#define DM (1 << EM)
#define DMP (DM + 1)
typedef struct Val {
	short unsigned len;
	char *s;
} V;
typedef unsigned K;
