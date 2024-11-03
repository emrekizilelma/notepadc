#include <stdio.h>
#include <app_info.h>

const char* version = "v-0.0.1";

void app_info(void) {
    printf("Version: %s\n", version);
}