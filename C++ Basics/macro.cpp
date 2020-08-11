#include <iostream>

#define divide(a,b) (a / b)
#define add(a,b)  (a + b)
#define number int
#define insert std::cin
#define print std::cout
#define end return 0;
#define period std::endl
#define connect <<
#define get >>
#define level 3

number main(){
  number a, b;

  insert get a get b;

  print connect divide(a,b) connect "|" connect add(a,b) connect period;

  #if level == 2
    #undef level
    #define level 999999
  #elif level == 1
    #undef level
    #define level 8888
  #endif

  #if level == 3
    #undef level
    #define level "Naruto!"
  #endif

  print << level;

  end;
}
