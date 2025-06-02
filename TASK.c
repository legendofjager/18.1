#include "task.h"


char **task(char *string, char *delmiters){

    char **words = malloc(sizeof(char *));
    if(words == NULL){
        exit(1);
    }

    char* token = strtok(string, delmiters);
    for(size_t i = 1; token != NULL; i++){
        char **temp = realloc(words, sizeof(char*)*(i+1));
        if(temp == NULL){
            free(words);
            exit(1);
        }
        words[i-1] = token;
        words[i] = NULL;
        token = strtok(NULL, delmiters);

    }
    return words;
}



