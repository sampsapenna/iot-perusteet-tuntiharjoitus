/*
IoT ja sulautetut järjestelmät – perusteet

Tuntiharjoitus:

Kirjoita lyhyt C-ohjelma, joka laskee napinpainalluksia GPIO-pinniin
kytketystä painonapista, ja tulostaa arvon muuttuessa uuden arvon
terminaaliin (stdout)

Huomioikaa, että mallikytkennässä luettavan pinnin tila on käännetty,
eli kun nappia painetaan, tila on 0, ei 1.
*/


#include <stdio.h>
#include "pico/stdlib.h"

#define GPIO_PIN_BUTTON 22


// Relevant setup functions
void setup()
{
  stdio_init_all();

  gpio_init(PICO_DEFAULT_LED_PIN);
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);

  gpio_init(GPIO_PIN_BUTTON);
  gpio_set_dir(GPIO_PIN_BUTTON, GPIO_IN);
  gpio_set_input_hysteresis_enabled(GPIO_PIN_BUTTON, 1);

  printf("Initialization done\n");
}


// Main program
int main()
{
    setup();

    // Suoritettava ohjelma tähän

    return 0;
}
