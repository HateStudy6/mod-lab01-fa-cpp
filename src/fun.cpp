// Copyright 2022 UNN-IASR
#include <iostream>
#include <cstring>
#include <cmath>

#include "fun.h"
unsigned int faStr1(const char* str) {
 int sl1 = 0; int sl2 = 0; int stroka = 0;
  for ( int i = 0; strlen(str) > i; i++ )
  { if (isalpha(str[i]))
  { sl1 += 1;}
  if (isdigit(str[i]))
  { sl2 += 1;}
  if (isspace(str[i]))
  { if ((sl1 > 0) && (sl2 == 0))
  {stroka++;}
  sl1 = 0;
  sl2 = 0;
  }
  }
  return stroka;
}



unsigned int faStr2(const char* str) {
    int sl1 = 0; int sl2 = 0; int stroka = 0;
    for ( int i = 0; strlen(str) > i; i++ )
    { if (isdigit(str[i]) || ispunct(str[i]))
    { sl2+= 1; }
    if (isupper(str[i]) && (sl1 = 0))
    { sl1 = 1;}
    if (isspace(str[i]))
    {if ((sl1 = 1) && (sl2 == 0))
    {stroka++;}
    sl1 = 0;
    sl2 = 0;
    }
    }
    return stroka;
}


unsigned int faStr3(const char* str) {
    int sl1 = 0; int sl2 = 0; int stroka = 0;
    float SrDlina = 0;
    for (int i = 0; strlen(str) > i; i++) {
    if (isalpha(str[i])) { sl2++;
    stroka = 1;
    }
    if (isspace(str[i]) && (stroka == 1)) {
    sl1++;
    stroka = 0;
    }
}
    if (stroka == 1)
    {sl1++;}
    SrDlina = static_cast<double>(sl2)/sl1;
    return round(SrDlina);
}


