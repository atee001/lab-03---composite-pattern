
#include "../base.hpp"
#pragma once
#include <string>

class ZeroOpMock: public Base {
        public:
                ZeroOpMock() { }


                virtual double evaluate() { return 0.0; }
                virtual string stringify() { return "0"; }

};


