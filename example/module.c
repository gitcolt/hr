#include "../hr.h"

#include <stdio.h>

void on_load() {
    printf("on_load\n");
}

void on_unload() {
    printf("on_unload\n");
}

void on_update() {
    printf("on_update\n");
}

void on_close() {
    printf("on_close\n");
}

HR_HOOK_UPDATE(on_update);
HR_HOOK_LOAD(on_load);
HR_HOOK_UNLOAD(on_unload);
HR_HOOK_CLOSE(on_close);
