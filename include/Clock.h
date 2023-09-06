//
// Created by Joshua Riefman on 2023-09-04.
//

#ifndef COMPUTER_EMULATOR_CLOCK_H
#define COMPUTER_EMULATOR_CLOCK_H
#include "Component.h"

class Clock {
private:
    std::vector<Component*> components;
public:
    explicit Clock() = default;
    void subscribe(Component* component);
    void tick();
};


#endif //COMPUTER_EMULATOR_CLOCK_H
