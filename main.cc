#include <string>
#include <iostream>


class Pojazd {
public:
    virtual void przyspiesz() { std::cout << "Przyśpieszanie..." << std::endl; }
    void zatrzymaj() { std::cout << "Zatrzymywanie..." << std::endl; }
};

class Samochod : public Pojazd {
public:
    void przyspiesz() override { std::cout << "Przyspieszanie samochodu." << std::endl; }
};

class Rower : public Pojazd {
public:
    void przyspiesz() override { std::cout << "Przyspieszanie roweru..." << std::endl; }
};



class AbstractPojazd {
public:
    virtual void przyspiesz() = 0;
};



class AbstractSamochod : public AbstractPojazd {
public:
    void przyspiesz() override { std::cout << "Przyspieszanie samochodu..." << std::endl; }
};

class AbstractRower : public AbstractPojazd {
public:
    void przyspiesz() override { std::cout << "Przyspieszanie roweru..." << std::endl; }
};



class ProtectedPojazd {
protected:
    std::string marka = "Audi <protected>";
    std::string model = "R8 <protected>";
};

class ProtectedSamochod : protected ProtectedPojazd {
public:
    void pokazInformacje() { std::cout << "Marka: " << this->marka << std::endl << "Model: " << this->model << std::endl; }
};





class PrivatePojazd {
protected:
    std::string historia_pojazdu = "2018 - wypadek";
};

class PrivateSamochod : private PrivatePojazd {
public:
    void pokazDane() { std::cout << "Dane: " << this->historia_pojazdu << "\n"; }
};




// Task 7: Multiple Inheritance
class Silnikowy {
public:
    virtual void przyspiesz() { std::cout << "Przyspieszanie..." << std::endl; }
};

class Elektryczny {
public:
    void ladowanie() { std::cout << "Ładowanie..." << std::endl; }
};

class Hybryda : public Silnikowy, public Elektryczny {
public:
    void przyspiesz() override { std::cout << "Przyspieszanie auta z funkcjonalnością spalinowa i elektryczną..." << std::endl; }
};


// Task 9: Multilevel Inheritance
class ElektrycznySamochod : public Samochod {
public:
    void przyspiesz() override { std::cout << "Przyspiesznie z wykorzystaniem silnika elektrycznego..." << std::endl; }
};


int main() {


    
    std::cout << "Zadanie 1" << std::endl;
	Pojazd pojazd;
    Samochod samochod;
    Rower rower;
    
	pojazd.przyspiesz();
    samochod.przyspiesz();
    rower.przyspiesz();

    std::cout << std::endl << "Zadanie 2 (Klasa abstrakcyjna)" << std::endl;
	AbstractSamochod abstract_samochod;
    AbstractRower abstract_rower;

    abstract_samochod.przyspiesz();
    abstract_rower.przyspiesz();

    std::cout << std::endl << "Zadanie 5" << std::endl;
    ProtectedSamochod protected_samochod;
    protected_samochod.pokazInformacje();

    std::cout << std::endl << "Zadanie 6" << std::endl;
    PrivateSamochod private_samochod;
    private_samochod.pokazDane();

    std::cout << std::endl << "Zadanie 7" << std::endl;
    Hybryda hybryda;
    hybryda.przyspiesz();
    hybryda.ladowanie();

    std::cout << std::endl << "Task 9" << std::endl;
    ElektrycznySamochod elektryczny_samochod;
    elektryczny_samochod.przyspiesz();

    return 0;
}

