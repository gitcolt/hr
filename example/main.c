#define HR_DRIVER
#include "../hr.h"
#include "persistent_state.h"

int main() {
    PersistentState state = { .tick = 0 };
    HR_CTX(state);

    hr_init(".", "libmodule.so");

    while (true) {
        hr_update();
        sleep(1);
    }

    hr_close();
}
