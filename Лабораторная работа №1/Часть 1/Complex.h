#pragma once

struct complexes {
	double re, im;
	void put_complex_real();
	void put_complex_im();
	void get_complex();
};
void add(complexes *a, complexes *b, complexes *c);
void sub(complexes *a, complexes *b, complexes *c);
void mult(complexes *a, complexes *b, complexes *c);
void div(complexes *a, complexes *b, complexes *c);