//
// Created by Joshua Riefman on 2023-09-06.
//

#include "../include/Component.h"
#include "../include/Computer.h"

Component::Component() {
    Computer::clock.subscribe(this);
}

void Component::onClock() {

}
