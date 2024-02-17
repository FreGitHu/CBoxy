#include "tokenizer.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

struct Token* tokenize(const char* text) {
    struct Token* tokens = malloc(0);
    int numtokens = 0;
    if (tokens == NULL)
    {
        printf("Fatal Error: Failed to Allocate Memory for Tokenizer (or this was compiled with the wrong compiler)");
        exit(1);
    }
    
    int i = 0;
    while (i < strlen(text))
    {
        if (isdigit(text[i]))
        {
            int start = i;
            i++;
            while (isdigit(text[i]))
            {
                i++;
            }
            int end = i;

            struct Token numtoken = {0};
            numtoken.type = IntType;
            numtoken.data = "int";
            numtoken.column = i;
            numtoken.line = 0;
            numtokens++;
            tokens = realloc(tokens, numtokens*sizeof(struct Token));
            if (tokens == NULL)
            {
                printf("Fatal Error: Failed to Allocate Memory for Tokenizer");
                exit(1);
            }
                
            tokens[numtokens-1] = numtoken;
        } else {
            if (strlen(text) > i + 3 && strncmp(text + i, "int", 3) == 0)
            {
                struct Token inttoken = {0};
                inttoken.type = IntType;
                inttoken.data = "int";
                inttoken.column = i;
                inttoken.line = 0;
                numtokens++;
                tokens = realloc(tokens, numtokens*sizeof(struct Token));
                if (tokens == NULL)
                {
                    printf("Fatal Error: Failed to Allocate Memory for Tokenizer");
                    exit(1);
                }
                
                tokens[numtokens-1] = inttoken;
                i = i + 3;
            }
            
        }
        
    }
    
}