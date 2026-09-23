#ifndef MAIN_H
#define MAIN_H

#include <string>
using namespace std;

void fun(string str);
void fun2(string const &str);
void callValue(string const &prog);
void callRef(string const &prog);

#endif