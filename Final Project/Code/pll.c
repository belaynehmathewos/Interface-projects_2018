
#include <LPC214X.H>
#include "pll.h"

void pll_init(void){
  PLL0CON=0x01;//enable PLL
  PLL0CFG=0x24;//multipler and divider setup M is (5-1=4) because we need CCLK=60MHz and we have 12 so 5 is multipler
               //P is 2 it satsfies the valid range for Fcco
  PLL0FEED=0xAA;//feed sequence
  PLL0FEED=0x55;//feed sequence
  //PLLFEED_bit.FEED = 0xAA;
  //PLLFEED_bit.FEED = 0x55;

  while(!(PLL0STAT & 0x00000400));//is locked? /checks wether
                        //this means/is equivalent with (PLLSTAT !=0x00000400)/or PLLSTAT_bit.PLOCK == 0 to ckech PLL lock status if PLL is locked to requested frequency(bit 10 is used for this purpose)

  PLL0CON=0x03;        //connect PLL after PLL is locked //but connect and enable b/c bits 0,1 are high
  PLL0FEED=0xAA;//feed sequence
  PLL0FEED=0x55;//feed sequence
  //PLLFEED_bit.FEED = 0xAA;
  //PLLFEED_bit.FEED = 0x55;
}