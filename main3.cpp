#include <iostream>

int funkcja(int n,int m)
{
    int nwd;
    if(n%m==0) {
        nwd = m;
        return nwd;
    }
    else
    {

        return funkcja(m,n%m);
    }

}

int main() {
    int n,m;
    std::cout<<"Podaj parametry funkcji n,m "<<std::endl;
    std::cin>>n;
    std::cin>>m;
    std::cout<<" NWD= " << funkcja(n,m) <<std::endl;
}//
// Created by user_2 on 13.05.2018.
//

