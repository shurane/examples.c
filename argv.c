#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    printf("argc %d\n", argc);
    for (int i=0; i<10; i++){
        if (argc > i){
            printf("argv[%d]:= %s\n", i, argv[i]);
        }
    }
}
