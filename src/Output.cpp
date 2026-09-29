#include "../include/Output.hpp"
#include <iostream>
#include <string>

void Output::screen(std::string i, std::string a){
  clear();
  std::cout << format(i, a);
}

std::string Output::format(std::string i, std::string a){
  return i + " -> " + a;
}

void Output::clear(){
  for(int i = 0;i<100; i++) std::cout << "\n";
}
