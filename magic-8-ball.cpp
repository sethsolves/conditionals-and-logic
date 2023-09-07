#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
  srand(time(NULL));
  int num = rand() % 10;

  std::cout << "MAGIC 8-BALL:\n";

  switch (num){
    case 0:
    std::cout << "Yes.";
    break;

    case 1:
    std::cout << "Cannot predict now.";
    break;

    case 2:
    std::cout << "Reply hazy, try again.";
    break;

    case 3:
    std::cout << "My sources say no.";
    break;

    case 4:
    std::cout << "Don't count on it." ;
    break;

    case 5:
    std::cout << "Ask again later." ;
    break;

    case 6:
    std::cout << "Most likely.";
    break;

    case 7:
    std::cout << "It is certain." ;
    break;


  }

  return 0;

}
