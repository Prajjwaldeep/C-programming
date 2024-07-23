#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef enum {
    KEYWORD,
    IDENTIFIER,
    OPERATOR
} TokenType;

typedef struct {
    char lexeme[100];
    TokenType type;
} Token;

void analyzeLexical(char *input) {
    const char delimiters[] = " \t\n(){}[],;=<>";
    const char operators[] = "=<>";

    Token tokens[100];
    int tokenCount = 0;

    char *token = strtok(input, delimiters);
    while (token != NULL) {
        Token currentToken;
        strcpy(currentToken.lexeme, token);

        if (isalpha(token[0])) {
            currentToken.type = IDENTIFIER;
        } else if (strchr(operators, token[0]) != NULL) {
            currentToken.type = OPERATOR;
        } else {
            currentToken.type = KEYWORD;
        }

        tokens[tokenCount++] = currentToken;

        token = strtok(NULL, delimiters);
    }

    for (int i = 0; i < tokenCount; i++) {
        printf("%s is ", tokens[i].lexeme);
        switch (tokens[i].type) {
            case KEYWORD:
                printf("keyword\n");
                break;
            case IDENTIFIER:
                printf("identifier\n");
                break;
            case OPERATOR:
                printf("operator\n");
                break;
        }
    }
}

int main() {
    char input[] = "#<stdio.h>\nint main() {\nint n1, n2;\nscanf(\"%d %d\", &n1, &n2);\nif(n1<n2)\n{\nprint(\"%d is smaller\", n1);\n}\nelse if(n2<n1)\n{\nprint(\"%d is smaller\", n2);\n}\nelse\n{\nprintf(\"Equal\");\n}return 0;\n}";

    analyzeLexical(input);

    return 0;
}
