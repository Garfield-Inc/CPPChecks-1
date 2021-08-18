#include <iostream>

class X{
    /* custom copy and move constructors defined */
};
void foo_vulnerable(){
    const X bar;
    X quux = std::move(bar); //copy constructor is silently called here instead of expected move constructor
}

void foo_fix1(){
    X bar;										//Remove const
    X quux{std::move(bar)};                     //Compliant
}

void foo_fix2(){
    const X bar;
    X quux{bar};								//Remove std::move() --Compliant
}
