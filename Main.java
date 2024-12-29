// Java Implementation for the lab tasks

// Zadanie 1: Dziedziczenie publiczne
class Pojazd {
    public void przyspiesz() {
        System.out.println("Pojazd zwiększa prędkość.");
    }

    public void zatrzymaj() {
        System.out.println("Pojazd został zatrzymany.");
    }
}

class Auto extends Pojazd {
    @Override
    public void przyspiesz() {
        System.out.println("Auto zwiększa prędkość.");
    }
}

class Rower extends Pojazd {
    @Override
    public void przyspiesz() {
        System.out.println("Rower przyspiesza pedałując.");
    }
}

// Zadanie 2: Klasa abstrakcyjna
abstract class AbstrakcyjnyPojazd {
    public abstract void przyspiesz();
}

class AbstrakcyjneAuto extends AbstrakcyjnyPojazd {
    @Override
    public void przyspiesz() {
        System.out.println("Abstrakcyjny samochód przyspiesza.");
    }
}

class AbstrakcyjnyRower extends AbstrakcyjnyPojazd {
    @Override
    public void przyspiesz() {
        System.out.println("Abstrakcyjny rower zwiększa tempo.");
    }
}

// Zadanie 7: Dziedziczenie wielokrotne za pomocą interfejsów
interface Silnikowy {
    void uruchomSilnik();
}

interface Elektryczny {
    void naladujBaterie();
}

class Hybryda implements Silnikowy, Elektryczny {
    @Override
    public void uruchomSilnik() {
        System.out.println("Silnik hybrydowy został uruchomiony.");
    }

    @Override
    public void naladujBaterie() {
        System.out.println("Ładowanie baterii pojazdu hybrydowego.");
    }

    public void przyspiesz() {
        System.out.println("Hybryda przyspiesza dzięki obu napędom.");
    }
}

// Zadanie 9: Dziedziczenie wielopoziomowe
class ElektryczneAuto extends Auto {
    @Override
    public void przyspiesz() {
        System.out.println("Elektryczne auto szybko nabiera prędkości.");
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println("Zadanie 1: Dziedziczenie publiczne");
        Pojazd pojazd = new Pojazd();
        Auto auto = new Auto();
        Rower rower = new Rower();
        pojazd.przyspiesz();
        auto.przyspiesz();
        rower.przyspiesz();

        System.out.println("\nZadanie 2: Klasa abstrakcyjna");
        AbstrakcyjnyPojazd absAuto = new AbstrakcyjneAuto();
        AbstrakcyjnyPojazd absRower = new AbstrakcyjnyRower();
        absAuto.przyspiesz();
        absRower.przyspiesz();

        System.out.println("\nZadanie 7: Dziedziczenie wielokrotne za pomocą interfejsów");
        Hybryda hybryda = new Hybryda();
        hybryda.uruchomSilnik();
        hybryda.naladujBaterie();
        hybryda.przyspiesz();

        System.out.println("\nZadanie 9: Dziedziczenie wielopoziomowe");
        ElektryczneAuto eAuto = new ElektryczneAuto();
        eAuto.przyspiesz();
    }
}

