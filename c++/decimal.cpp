//Leibniz formula for pi/4
#include<stdio.h>
typedef float fp;

fp LeibnizForward(unsigned n) {
  volatile fp sum = 0.0;
  fp sign = 1.0;
  unsigned i = 1;
  while (n-- > 0) {
    sum += sign / i;
    sign = -sign;
    i = (i + 2);
  }
  return sum;
}

fp LeibnizReverse(unsigned n) {
  volatile fp sum = 0.0;
  fp sign = 1.0;
  unsigned i = 2 * n - 1;
  if (n % 2 == 0)
    sign = -sign;
  while (n-- > 0) {
    sum += sign / i;
    sign = -sign;
    i = (i - 2);
  }
  return sum;
}

void PiTest(unsigned n) {
  printf("%u\n", n);
  static const fp pic = 3.1415926535897932384626433832795;
  const char *format = "%s %0.9f\n";
  printf(format, "pi-", nextafterf(pic,0));
  printf(format, "pi ", pic);
  printf(format, "pi+", nextafterf(pic,4));
  fp pif = LeibnizForward(n) * 4;
  printf(format, "pif", pif);
  fflush(stdout);
  fp pir = LeibnizReverse(n) * 4;
  printf(format, "pir", pir);
  fflush(stdout);
}

int main(void) {
  PiTest(0);
  PiTest(1);
  PiTest(10);
  PiTest(100);
  PiTest(1000);
  PiTest(10000);
  PiTest(100000);
  PiTest(1000000);
  PiTest(10000000);
  PiTest(100000000);

  return 0;
}
