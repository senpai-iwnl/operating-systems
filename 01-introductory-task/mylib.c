#include <stdio.h>

void print_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Błąd przy otwieraniu pliku");
        return;
    }
    
    char buffer[1024];
    while (fgets(buffer, 1024, file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
}
