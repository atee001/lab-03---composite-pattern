#include "../base.hpp"
#pragma once


class HundredMock: public Base {
    public:
        HundredMock() { }

        virtual double evaluate() { return 100.0; }
        virtual string stringify() { return "100"; }
};

