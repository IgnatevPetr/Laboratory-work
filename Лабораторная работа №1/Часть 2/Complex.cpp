#include "Complex.h"
#include <iostream>
#include <math.h>


using namespace std;


void complexes::get_complex() {
	cout << re << " + i*(" << im << ")" << endl;
}

double complexes::modul() {
	double s;
	s = sqrt(pow(re, 2) + pow(im, 2));
	return s;
}