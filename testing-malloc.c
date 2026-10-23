#include <stdio.h>

void *malloc (size_t size);

int main() {
    printf("Testing alokasi memori\n");

    char *str = (char *)malloc(50);
    if (str == NULL) {
        printf("Gagal mengalokasikan memori\n");
        return 1;
    }

    printf("Berhasil mengalokasikan memori\n");

    snprintf(str, 50, "Alokasi memori ini dibuat di WSL Linux!\n");
    printf("%s", str);

    printf("Testing alokasi memori selesai\n");
    return 0;
}