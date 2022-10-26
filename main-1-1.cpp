#include <iostream>
#include <string>

//#include "AirCraft.cpp"
#include "AirCraft.cpp"

using namespace std;

int main() {
  AirCraft *craft;

  int we = 50;
  craft = new AirCraft(we);

  cout << "Current weight: " << craft->get_weight() << endl
       << "Current fuel: " << craft->get_fuel() << endl
       << "Current flights: " << craft->get_numberOfFlights() << endl;

  cout << "Making changes" << endl;

  int cWeight = 30;

  craft->set_weight(cWeight);
  cout << "Current weight: " << craft->get_weight() << endl;

  float cFuel = 0.95;
  craft->set_fuel(cFuel);
  cout << "Current fuel: " << craft->get_fuel() << endl;

  int cflight = 1;
  craft->set_numberOfFlights(cflight);
  cout << "Current flights: " << craft->get_numberOfFlights() << endl;

cout << "flying" <<endl;

int speed = 5;
int min = 61;
craft->fly(speed, min);

cout << "Current weight: " << craft->get_weight() << endl
       << "Current fuel: " << craft->get_fuel() << endl
       << "Current flights: " << craft->get_numberOfFlights() << endl;

       cout << "refueling" << endl;
       craft->refuel();
       cout << "Current weight: " << craft->get_weight() << endl
       << "Current fuel: " << craft->get_fuel() << endl
       << "Current flights: " << craft->get_numberOfFlights() << endl;
       cout<< "end" << endl;


}