#include <stdio.h>
#include "task.h"

int main(){
    char delmiters[] = "., ";
    char buf[100];
    printf("Enter a string\n");
    if(fgets(buf, 100,  stdin)!= NULL){
        char **words = task(buf, delmiters);
        for(char** i = words; *i!= NULL; i++){
            printf("%s ", *i);
        }
    }

    return 0;
}
