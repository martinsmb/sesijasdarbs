#include <stdio.h>

int main() {
    FILE *file = fopen("sesija.txt", "w");

    if (file == NULL) {
        printf("Error!\n");
        return 1; 
    }

    fprintf(file, "es pildu sesijas darbu.\n");

    fclose(file);

    printf("files strādā!\n");

    return 0;
}
