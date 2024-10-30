#include <stdio.h>

int main() {
    char s[100+1];

    fgets(s, sizeof(s), stdin);

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\", \"%s\");\n", s);
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}