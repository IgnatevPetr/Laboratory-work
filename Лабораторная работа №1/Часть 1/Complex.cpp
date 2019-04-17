#include "Complex.h"
#include <iostream>


using namespace std;

void complexes::put_complex_real() {
	cin >> re;
}

void complexes::put_complex_im() {
	cin >> im;
}

void complexes::get_complex() {
	cout << re << " + i*(" << im << ")" << endl;
}

void add(complexes *a, complexes *b, complexes *c) {
	c->re = a->re + b->re;
	c->im = a->im + b->im;
}

void sub(complexes *a, complexes *b, complexes *c) {
	c->re = a->re - b->re;
	c->im = a->im - b->im;
}

void mult(complexes *a, complexes *b, complexes *c) {
	c->re = a->re*b->re - a->im*b->im;
	c->im = a->re*b->im + a->im*b->re;
}

void div(complexes *a, complexes *b, complexes *c) {
	c->re = (a->re*b->re + a->im*b->im) / (b->re*b->re + b->im*b->im);
	c->im = (b->re*a->im - a->re*b->im) / (b->re*b->re + b->im*b->im);
}