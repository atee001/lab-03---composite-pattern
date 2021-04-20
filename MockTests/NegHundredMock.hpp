#include "../base.hpp"
#pragma once


class NegHundredMock: public Base {
    public:
        NegHundredMock() { }

        virtual double evaluate() { return 100.0; }
        virtual string stringify() { return "100"; }
};

