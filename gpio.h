#pragma once
#include <stdio.h>
#include "hardware/gpio.h"
#include "pico/stdlib.h"

class Gpio {
   public:
    Gpio(int pin,int mode);
    void init();
    void write(bool val);
    bool read();
    void toggle();

   private:
    int pin;
    int mode;
    bool state;
};

const int INPUT = 0;
const int OUTPUT = 1;
const int INPUT_PU = 2;
const int INPUT_PD = 3;