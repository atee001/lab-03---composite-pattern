#include "../base.hpp"
#pragma once


class PiMock: public Base {
    public:
        PiMock() { }

        virtual double evaluate() { return 3.14159265358979323846; }
        virtual string stringify() { return "3.14159265358979323846"; }
};

