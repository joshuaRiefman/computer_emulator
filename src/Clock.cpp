//
// Created by Joshua Riefman on 2023-09-04.
//

#include "../include/Clock.h"

void Clock::subscribe(Component* component) {
    Clock::components.push_back(component);
}

void Clock::tick() {
    for (Component* component : components) {
        component->onClock();
    }
}
