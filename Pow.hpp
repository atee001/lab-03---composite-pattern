#pragma once 
#include "base.hpp"

#include <cmath>
#include <string>

using namespace std;

	class Pow: public Base {
		public:
			Pow(Base* const x, Base* const y) {

				lhs = x;
				rhs = y;

			}


			double evaluate() {
				double r = 0.0;
				double l = 0.0;

				r = rhs->evaluate();
				l = lhs->evaluate(); 

				double val = 0.0;
				val = pow(l, r);

				return val;
			}

			string stringify() {
				return "(" + lhs->stringify() + "**" + rhs->stringify() + ")";
			}


		private:

			Base* lhs;
			Base* rhs;



	};
