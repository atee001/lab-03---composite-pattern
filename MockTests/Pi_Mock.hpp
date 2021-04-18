#include "../base.hpp"
#pragma once
#include "../op.hpp"
#define M_PI 3.14159265358979323846 

class PiMock: public Base {
    public:
        PiMock() { }

        virtual double evaluate() { return M_PI; }
        virtual string stringify() {
		return "3.1415927";
	 }
};

