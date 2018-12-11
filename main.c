#include <lm4f120h5qr.h>
#include <state.h>
#include <led.h>

void wait(void);

int main()
{
   
    LedInit();
    STATE state = STATE_RED;
  while(1)
  {
      switch(state)
      {
            case STATE_RED:
                LedSetRed();
                wait();
            break;
            case STATE_GREEN:
                LedSetGreen();
                wait();
            break;
            case STATE_BLUE:
                LedSetBlue();
                wait();
            break;

      }
         wait();
         LedSetOff();
         wait();
         state = StateGetNext(state);
  }

  
  return 0;
}

void wait()
{
  int clockCounter = 0;
  while(clockCounter++ < 1000000);
}