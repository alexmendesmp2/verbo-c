#include <stdio.h>
#include <stdlib.h>

extern char* call_hsm(char*);
extern void save_to_oracle(char*);

int main(void) {
    printf("Progama em C.\n");

    char* chave = call_hsm("Teste 01");
    printf("Chave gerada (HSM): %s\n\n", chave);

    save_to_oracle(chave);

    free(chave);
}