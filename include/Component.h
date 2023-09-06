//
// Created by Joshua Riefman on 2023-09-06.
//

#ifndef COMPUTER_EMULATOR_COMPONENT_H
#define COMPUTER_EMULATOR_COMPONENT_H

#include <vector>

class Component {
public:
    virtual void onClock();
    explicit Component();
};


#endif //COMPUTER_EMULATOR_COMPONENT_H
