#include <stdio.h>
#include <stdlib.h>

static int all_files; //compile error

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    getchar();
    return 0;
} 
