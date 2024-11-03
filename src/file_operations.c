#include <stdio.h>

void create_file(const char* file_name) {
    FILE* file = fopen(file_name, "w");

    if (file == NULL) {
        printf("Failed to create file: %s\n", file);
        return;
    }
}

void delete_file(const char* file) {
    if(remove(file) == 0) {
        printf("The file is succesfully deleted: %s\n", file);
    }

    else {
        printf("Failed to delete file or cannot found: %s\n", file);
    }
}

/*void read_to_file(const char* file) {

}

void write_to_file(const char* file) {

}*/