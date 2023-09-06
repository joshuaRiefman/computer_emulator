#include "../include/Computer.h"

int main() {
    Computer::clock = Clock();
    Computer::cpu = CPU();

    Computer::clock.tick();

    return 0;
}
