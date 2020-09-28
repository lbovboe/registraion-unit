#include "Registration.h"
#include "Unit.h"

#ifndef OPERATOROVERLOAD_H
#define OPERATOROVERLOAD_H

ostream &operator<<(ostream &stream, const Unit &u);

istream &operator>>(istream &input, Unit &u);

ostream &operator<<(ostream &stream, const Registration &r);

istream &operator>>(istream &input, Registration &R);

#endif