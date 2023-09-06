//
// Created by Joshua Riefman on 2023-09-04.
//

#ifndef COMPUTER_EMULATOR_COMPUTER_H
#define COMPUTER_EMULATOR_COMPUTER_H

#include "Clock.h"
#include "components/CPU.h"

class Computer {
public:
    static int value;
    static Clock clock;
    static CPU cpu;
};


#endif //COMPUTER_EMULATOR_COMPUTER_H
