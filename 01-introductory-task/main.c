#include <stdio.h>
#include "mylib.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Użycie: %s nazwa_pliku [nazwa_pliku...]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        printf("Zawartość pliku %s:\n", argv[i]);
        print_file_content(argv[i]);
    }

    return 0;
}
