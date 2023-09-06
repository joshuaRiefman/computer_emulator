//
// Created by Joshua Riefman on 2023-09-06.
//

#ifndef COMPUTER_EMULATOR_CPU_H
#define COMPUTER_EMULATOR_CPU_H

#include "../Component.h"

class CPU : public Component {
public:
    void onClock() override;
};


#endif //COMPUTER_EMULATOR_CPU_H
