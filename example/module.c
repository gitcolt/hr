#include "../hr.h"
#include "persistent_state.h"

#include <stdio.h>

void on_load(void *ctx) {
    printf("on_load\n");
}

void on_unload(void *ctx) {
    printf("on_unload\n");
}

void on_update(void *ctx) {
    PersistentState *state = (PersistentState *)ctx;
    printf("on_update %d\n", state->tick++);
}

void on_close(void *ctx) {
    printf("on_close\n");
}

HR_HOOK_UPDATE(on_update);
HR_HOOK_LOAD(on_load);
HR_HOOK_UNLOAD(on_unload);
HR_HOOK_CLOSE(on_close);
