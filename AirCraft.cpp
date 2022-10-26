/*#include "AirCraft.h"
#include<math.h>

AirCraft::AirCraft() {
  // default constructor does nothing
}

AirCraft::AirCraft(int w) {  // creates an Aircraft with weight w
  weight = w;
  fuel = 0;
  numberOfFlights = 0;
}

void AirCraft::refuel() {  // Resets fuel back to 100%
  fuel = 1;
}

void AirCraft::set_weight(int weigh) { weight = weigh; }

int AirCraft::get_weight() { return weight; }

float AirCraft::get_fuel() { return fuel; }

void AirCraft::set_fuel(float fue) { fuel = fue; }

int AirCraft::get_numberOfFlights() { return numberOfFlights; }

void AirCraft::set_numberOfFlights(int flightno) { numberOfFlights = flightno; }

void AirCraft::fly(int headwind, int minutes) {

    float sub = headwind;
  numberOfFlights++;
  sub *= (minutes / 60);

  fuel -= sub;
}

*/