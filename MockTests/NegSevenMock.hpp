#pragma once
#include "../base.hpp"

class NegSevenMock: public Base {

    public:
        NegSevenMock() { }

        virtual double evaluate() { return -7.5; }
        virtual string stringify() { return "-7.5"; }
};

