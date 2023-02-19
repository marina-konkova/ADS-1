// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value <= 1)
    return false;
  for (int k = 2; k <= value/2; k++) {
    if (value % k == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t number = 0;
  uint64_t nearestnumber = 0;
  while (n > 0) {
    if (checkPrime(number) == true) {
      nearestnumber = number;
      --n;
    }
    ++number;
  }
  return nearestnumber;
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summa = 0;
  uint64_t newhbound;
  newhbound = hbound - 1;
  while (newhbound > 0) {
    if (checkPrime(newhbound)==true) {
      summa += newhbound;
    }
    --newhbound;
  }
  return summa;
}
