#include <iostream>

int funkcja(int n,int m)
{
    if(m==0)  return n;
    else if(n==0)  return m;
    else if(n>0&&m>0)return funkcja(n-1,m)+funkcja(n,m-1)+funkcja(n-1,m-1);
}

int main() {
    int n,m;
    std::cout<<"Podaj parametry funkcji n,m "<<std::endl;
    std::cin>>n;
    std::cin>>m;
    std::cout<< "f(n,m)= " << funkcja(n,m) <<std::endl;
}