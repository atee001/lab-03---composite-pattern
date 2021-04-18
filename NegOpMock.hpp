#pragma once

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -10.0; }
        virtual string stringify() { return "-10.0"; }
}

