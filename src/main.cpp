// Copyright 2022 UNN-IASR
#include<iostream>
#include "fun.h"



int main() 
{
    const char *str = "                     ";
    std::cout << faStr1(str) << std::endl;
    str= "Hello;)";
    std::cout << faStr2(str) << std::endl;
    str= "Hello;)";
    std::cout << faStr3(str) << std::endl;
    str= "Hello;)";
    return 0;
}
