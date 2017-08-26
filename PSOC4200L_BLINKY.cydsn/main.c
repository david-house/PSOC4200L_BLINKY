#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */



    for(;;)
    {
        // Set High (LED = OFF)
        LED_PIN_Write(1);
        CyDelay(1000);
        
        for (uint8_t i = 0; i < 8; i++)
        {
            // Toggle pin state
            LED_PIN_Write(~LED_PIN_Read());
            CyDelay(250);
        }
    }
}

