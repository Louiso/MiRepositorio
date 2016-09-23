#include<iostream>

int suma(const int &a,const int &b,const int  &c){
  return a+b+c;
}
int mult(const int &a,const int &b){
  return a*b;
}
int main(int argc, char const *argv[]) {
  std::cout << "Hola" << std::endl;
  //std::cout << "La suma de 1+2 es:"<< suma(1,2)<< std::endl;
  std::cout << "La suma de 1+2+3 es: "<<suma(1,2,3) << std::endl;
  std::cout << "La multiplicacion de 1*2 es:"<< mult(1,2) << std::endl;
  return 0;
}
