#include "Kontakt.h"
#include <iostream>

Kontakt::Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, char bogstav, int postnummer)
    : adresse_(gadenavn, husnummer, bogstav, postnummer) {
    setNavn(navn);
    setTelefonnummer(telefonnummer);
}

Kontakt::Kontakt(std::string navn, int telefonnummer, std::string gadenavn, int husnummer, int postnummer)
    : adresse_(gadenavn, husnummer, postnummer) {
    setNavn(navn);
    setTelefonnummer(telefonnummer);
}

void Kontakt::setNavn(std::string navn) {
    navn_ = navn;
}

void Kontakt::setTelefonnummer(int nummer) {
    if (nummer >= 10000000 && nummer <= 99999999)
        telefonnummer_ = nummer;
    else
        telefonnummer_ = 0;
}

void Kontakt::setAdresse(Adresse adresse) {
    adresse_ = adresse;
}

std::string Kontakt::getNavn() const {
    return navn_;
}

int Kontakt::getTelefonnummer() const {
    return telefonnummer_;
}

Adresse Kontakt::getAdresse() const {
    return adresse_;
}

void Kontakt::print() const {
    std::cout << "Kontakt: " << navn_ << std::endl;
    std::cout << "Telefonnummer: " << telefonnummer_ << std::endl;
    std::cout << "Adresse: ";
    adresse_.print();
}