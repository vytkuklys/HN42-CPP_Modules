#pragma once
#include <iostream>

class A{
    public:
        virtual ~A(){};
        void test();
        virtual void test2() = 0;
};