#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[])
{
    char* tmp = NULL;
    tmp = strrchr(argv[1], '/');
    tmp[strlen(tmp)-5] = '\0';
    printf("%s", tmp+1);
    return 0;
}
