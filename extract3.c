#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char* tmp = NULL;
    
    tmp = strrchr(argv[1], '/');
    
    printf("%s", tmp+1);
    
    return 0;
}
    
