#include <stdio.h>
#include <stdlib.h>

extern char* call_hsm(
    const char* modulo, 
    const char* expoente, 
    char* public_key, 
    char* private_key/*, 
    int* return_code, 
    int* return_reson*/);
extern void save_to_oracle(const char*, const char*);

int main(void) {

    int arg05 = 05;
    int arg06 = 06;
    printf("Progama em C.\n");

    char* chave = call_hsm("Modulo","Expoente","Public Key","Private Key"/*, &arg05, &arg06*/);
    printf("Chave gerada (HSM): %s\n\n", chave);

    const char* label = "LABEL";
    save_to_oracle(label, chave);

    free(chave);
}