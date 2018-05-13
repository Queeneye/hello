#include <iostream>

int funkcja(int& referencja1)
{
referencja1=9;
}

int main() {
    int zmienna=5;
    int& referencja1=zmienna;
    funkcja(zmienna);
    std::cout<<"referencja1= "<< referencja1<<std::endl;
}