#include <stdio.h>

int main() {
    
    FILE* fp;
    fp = fopen("kinda_large_file.txt","w");

    while (1){
        fprintf(fp, "000000000000000000000000000000000000000000000000000000000000000000000\n");
        fprintf(fp, "nice");
    }
    fclose(fp);
    return 0;
}
