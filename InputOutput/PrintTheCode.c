#include <stdio.h>
#include <string.h>

int main() {
    char input[101];  
    
    if (fgets(input, sizeof(input), stdin) != NULL) {
        int len = strlen(input);
        if (len > 0 && input[len-1] == '\n') {
            input[len-1] = '\0';
        }
        
        printf("#include <stdio.h>\n");
        printf("int main()\n");
        printf("{\n");
        printf("    printf(\"%%s\\n\",\"%s\");\n", input);
        printf("    return 0;\n");
        printf("}\n");
    }
    
    return 0;
}