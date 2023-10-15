#include <iostream>

// Deklariere den Datentyp
struct CarPart {
    int serialNumber;
    int packageVolume;
};

int main() {
    // Verwende CarPart Typ und initialisiere die Member Variablen
    CarPart part;
    part.serialNumber = 10017;
    part.packageVolume = 1;
    std::cout << "Serial number " << part.serialNumber << " Volume " << part.packageVolume << std::endl;
    return 0;
}
