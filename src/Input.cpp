#include "../include/Input.hpp"
#include<iostream>

std::string Input::read(){
  std::string r;
  std::getline(std::cin, r);
  if(sintaxValidate(r)){
  }else{
    //TODO: make kernel and kernel needs to call output
    //Kernel::error("Press enter to exit");
  }
  return r;
}

//need some like create name and validate, but it doesn't seems hard

//what


/*
 * man my comments are dogshit
 * after 2 hours of thinking and seeing my notebook i've remember what i need
 * basicly i need a logic to validate "command" "*space*" "argument" 
 */

bool sintaxValidate(std::string i){
  if(i == "help" || i == "exit") return true;
  return false;
}

