#include "configuration.h"

int main(void)
{
   TRISCbits.TRISC0 = 0;         /* Set RC0 as output */
   PORTCbits.RC0 = 1;
   while(1)
   {}
}