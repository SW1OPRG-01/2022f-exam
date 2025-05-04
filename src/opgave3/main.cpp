#include <iostream>
#include "Adresse.h"
#include "Kontakt.h"

int main() {
    // Adresse med bogstav
    Adresse adr1("Frejasgade", 2, 'D', 8200);
    adr1.print();

    // Adresse uden bogstav
    Adresse adr2("Valhalsvej", 5, 9000);
    adr2.print();

    // Brug set-metoder til at ændre adr2
    adr2.setGadenavn("Odinsgade");
    adr2.setHusnummer(10);
    adr2.setBogstav('B');
    adr2.setPostnummer(8210);

    adr2.print();

    std::cout << "----- Kontakt Test -----" << std::endl;

    // Kontakt med bogstav
    Kontakt kontakt1("Sigurd Hansen", 23242526, "Frejasgade", 1, ' ', 8200);
    kontakt1.print();

    std::cout << std::endl;

    // Kontakt uden bogstav
    Kontakt kontakt2("Liv Nielsen", 99887766, "Asgardsvej", 7, 8210);
    kontakt2.print();

    return 0;
}
