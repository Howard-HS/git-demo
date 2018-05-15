#ifndef PRINT_MESSAGE_H
#define PRINT_MESSAGE_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;

namespace Output {

  using Message = std::string;

  void printMessage(Message);

};


#endif /* PRINT_MESSAGE_H */