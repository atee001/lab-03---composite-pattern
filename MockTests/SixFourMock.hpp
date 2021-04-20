#include "../base.hpp"
#pragma once
#include "../op.hpp"

class SixFourMock: public Base {
    public:
        SixFourMock() { }

        virtual double evaluate() { return 64; }
        virtual string stringify() {
                return "64";
         }
};

