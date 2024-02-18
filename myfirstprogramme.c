//////////////////////////////
//////////Extension in c/////////////////////////////
/*
#include <stdio.h>

// learning c
// extension
int main()
{
  /*
  short a = 9;
  int ia = a;
  printf("%d\n", a);  // 9
  printf("%d\n", ia); // 9
  printf("%u\n", a);  // 9
  printf("%u\n", ia); // 9

  //
  unsigned short c = 9;
  int ic = c;
  printf("%d\n", c);  // 9
  printf("%d\n", ic); // 9
  printf("%u\n", c);  // 9
  printf("%u\n", ic); // 9

  //
  signed short d = 9;
  int id = d;
  printf("%d\n", d);  // 9
  printf("%d\n", id); // 9
  printf("%u\n", d);  // 9
  printf("%u\n", id); // 9

  //
  short b = -9;
  int ib = b;
  printf("%d\n", b);  // -9
  printf("%d\n", ib); // -9
  printf("%u\n", b);  // huge number
  printf("%u\n", ib); // huge number

  //
  signed short e = -9;
  int ie = e;
  printf("%d\n", e);  // 9
  printf("%d\n", ie); // -9
  printf("%u\n", e);  // huge nu
  printf("%u\n", ie); // huge nu

  //
  unsigned short x = -9; // 111111111(11bits)10111
  int ix = x;            // 00000000000000(till 16bits)1111111111(11bits)1011
  // here integer promotion makes x===-9 as 00000000000000(till 16bits)1111111111(11bits)10111
  printf("%d\n", x);  // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
  printf("%d\n", ix); // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
  printf("%u\n", x);  // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527
  printf("%u\n", ix); // 00000000000000(till 16bits)1111111111(11bits)1011 is basically 65527



  //
  unsigned short p = -1;
  unsigned  int u = p;
  printf("%d\n", p);  // -1
  printf("%d\n", u); // -1
  printf("%u\n", p);  // huge
  printf("%u\n", u); // huges
}

*/

///////////////////
////INTEGER PROMOTION

// #include <stdio.h>

// int main()
// {
//   char a = -9;
//   int ia = a;
//   short b = -9;
//   int ib = b;
//   int c = -9;
//   int ic = c;

//   printf('%u', a);
//   printf('%u', b);
//   printf('%u', c);
// }
/*

////////////type conversion
#include <stdio.h>

int main()
{
  /*
  int a = 10;
  int b = 3;
  float result;
  result = a / b;
  printf("%f", result);
  ///////
  int a = 10;
  float b = 3;
  float result;
  result = a / b;
  printf("%f", result);
  ////////////////////
  int a = 10;
  int b = 3;
  float result;
  result = (float)(a / b);
  printf("%f", result);
 ////////////////////
  int a = 10;
  int b = 3;
  float result;
  result = (float)a / b;
  printf("%f", result);
  ////////////////
  int a = 10;
  int b = 3;
  float result;
  result = a / (float)b;
  printf("%f", result);
  //////////////////
  unsigned int a = 1000;
  printf("%d", a);
  printf("%u", a);
  int b = -1;
  if (a > b)
    printf("a is BIG");
  else
    printf("a is small");
  //////////////////
  unsigned int a = 1000;
  unsigned int b = -1;
  if (a > -1)
    printf("a is BIG\n");
  else
    printf("a is small\n");
  //////////////////
  int a = 1000;
  int b = -1;
  if (a > -1U)
    printf("a is BIG\n");
  else
    printf("a is small\n");
  */
/*
}
///////////////////////
// CONDITIONAL STATEMENTS///////////////
#include <stdio.h>

int main()
{
  int target = 10;
  if (target == 10)
  {
    printf("Target is equal to 10");
  }
}

#include <stdio.h>
int main()
{
  int grade;
  scanf("%d", &grade);
  if (grade < 10)
  {
    printf("You did not study.\n");
  }

    printf("You like this course.\n");
}
#include <stdio.h>
int main()
{
  int grade;
  scanf("%d", &grade);
  if (grade < 10)
  printf("You did not study.\n");
  printf("You like this course.\n");
}

#include <stdio.h>
int main()
{
  if (0)
    printf("Statement-1\n");
    printf("Statement-2\n");
    printf("Statement-3\n");
}
#include <stdio.h>
int main()
{
  if (1)
    printf("Statement-1\n");
    printf("Statement-2\n");
    printf("Statement-3\n");
}

#include <stdio.h>
int main()
{
  int i;
  scanf("%d", &i);
  if (i < 15)
  {
    printf("i is smaller than 15");
  }
  else
  {
    printf("i is greater than 15");
  }
  return 0;
}
////if-else[nesting]

#include <stdio.h>
int main()
{
  int num = 15;
  if (num > 0)
    if (num < 10)
      printf("num is between 0 and 10");
  // these are all not part of if block statements so u can see them print everytime
  printf("no its greater than 0 and 15 as well\n");
  // printf("no its greater than 0 and 15 as well\n");
  // printf("no its greater than 0 and 15 as well\n");
}
#include <stdio.h>
int main()
{
  int num = 85;
  if (num > 90)
  {
    printf("You earned an A");
  }
  else
  {
    if (num > 80)
    {
      printf("You earned B");
    }
  }
}
///irrespective of indentation,else is associated with closest if[no matter what]
#include <stdio.h>
int main()
{
  int a = 5;
  if (a < 10)
    if (a % 2 == 0)
      printf("a is even and less than 10");

    else
      printf("mystery");
}

#include <stdio.h>
int main()
{
  int a = 5;
  if (a < 10)
  {

    if (a % 2 == 0)
      printf("a is even and less than 10");
  }
  else
    printf("mystery");
}
/// lets create a  programme to find greatest number from given without using curlies

#include <stdio.h>
int main()
{
  int i = 1, j = 2, k = 3, number;
  if (i > j)
    if (i > k)
      number = i;
    else
      number = k;
  else if (j > k)
    number = j;
  else
    number = k;
  printf("%d", k);
  return 0;
}
//////////////////////
// switch statment

#include <stdio.h>
int main()
{
  int num = 8;
  switch (num)
  {
  case 7:
    printf("value is 7\n");
    break;
  default:
    printf("Out of range\n");
    break;
  case 8:
    printf("value is 8\n");
    break;
  }
  return 0;
}


#include <stdio.h>
int main()
{
  int x=10;
  switch (x)
  {
  case 1:
    printf("hi");
    break;

  default:
    printf("hiDefault");
    break;
  }
}
#include <stdio.h>
int main()
{
  int month = 2;
  switch (month)
  {
  case month:
    printf("hi");

    break;

  default:
    break;
  }
}
#include <stdio.h>
int main()
{

  char inChar = 'A';

  switch (inChar)
  {
  case "A":
    printf("Choice A\n");
  case "B":
  case "C":
    printf("Choice B");
  case "D":
  case "E":
  default:
    printf("No choice");
  default:
    break;
  }
}
*/
#include <stdio.h>
int main()
{
  int num = 3;
  switch (num)
  {
  case 1:
    printf("case 1:\n");

  case 3:
    printf("case 3:\n");
  default:
    printf("default");
  case 2:
    printf("case 2:\n");
    break;
  }
}