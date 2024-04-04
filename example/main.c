#define HR_DRIVER
#include "../hr.h"

int main() {
    hr_init(".", "libmodule.so");

    while (true) {
        hr_update();
        sleep(1);
    }

    hr_close();
}
