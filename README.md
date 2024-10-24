# **Laboratorium 5: Implementacja dziedziczenia, nadpisywania metod oraz klas abstrakcyjnych w C++ i Java**

## **Cele laboratorium:**
W tym laboratorium studenci zdobywają praktyczne doświadczenie z kluczowymi mechanizmami programowania obiektowego w C++ i Java. 
Laboratorium koncentruje się na następujących aspektach:

**Dziedziczenie:** Studenci uczą się różnych typów dziedziczenia — publicznego, chronionego (protected) i prywatnego (private) w C++. Dzięki temu rozumieją, jak dostępność atrybutów i metod zmienia się w zależności od poziomu dostępu.

**Klasy abstrakcyjne:** Studenci implementują klasy abstrakcyjne w C++ i Java. Dowiadują się, jak klasy abstrakcyjne mogą definiować wspólny interfejs dla klas pochodnych, które muszą nadpisywać metody abstrakcyjne.

**Nadpisywanie metod (method overriding):** W laboratorium pokazano, jak klasy dziedziczące mogą nadpisywać metody z klasy bazowej, aby dostosować ich działanie do własnych potrzeb.

## **Zadanie 1: Dziedziczenie publiczne w C++ i Java**
### **Opis zadania:**
Stwórz klasy `Pojazd`, `Samochod` i `Rower` z publicznym dziedziczeniem, gdzie klasa `Samochod` i `Rower` dziedziczą publicznie po `Pojazd`. Nadpisz metodę `przyspiesz()` dla każdej z klas.

#### **Kroki:**
1. Stwórz klasę bazową `Pojazd` z metodami `przyspiesz()` i `zatrzymaj()`.
2. Klasy `Samochod` i `Rower` powinny dziedziczyć po klasie `Pojazd` i nadpisywać metodę `przyspiesz()`.

## **Zadanie 2: Klasa abstrakcyjna w C++ i Java**
### **Opis zadania:**
Zaimplementuj abstrakcyjną klasę `Pojazd`, która będzie miała metodę abstrakcyjną `przyspiesz()`. Klasy `Samochod` i `Rower` będą dziedziczyć po `Pojazd` i nadpisywać metodę abstrakcyjną.

#### **Kroki:**
1. Stwórz abstrakcyjną klasę `Pojazd` z metodą abstrakcyjną `przyspiesz()`.
2. Stwórz klasy `Samochod` i `Rower`, które nadpisują metodę abstrakcyjną.

## **Zadanie 3: Nadpisywanie funkcji (method overriding)**
### **Opis zadania:**
Nadpisz metodę `przyspiesz()` w klasach `Samochod` i `Rower`, aby zachowywały się inaczej w zależności od typu pojazdu.

#### **Kroki:**
1. Użyj dziedziczenia i nadpisz metodę `przyspiesz()` w klasach dziedziczących.
2. W klasie `Samochod`, metoda powinna wyświetlać komunikat specyficzny dla samochodu, a w `Rower` dla roweru.

## **Zadanie 5: Dziedziczenie chronione (Protected Inheritance) w C++**
### **Opis zadania:**
Zaimplementuj dziedziczenie chronione w C++. Sprawdź, jak chroniony dostęp zmienia możliwości używania atrybutów i metod w klasach pochodnych.

#### **Kroki:**
1. Stwórz klasę `Pojazd` z chronionymi atrybutami marka i model.
2. Zastosuj chronione dziedziczenie w klasie `Samochod` i sprawdź dostępność tych atrybutów.

## **Zadanie 6: Dziedziczenie prywatne (Private Inheritance) w C++**
### **Opis zadania:**
Zaimplementuj dziedziczenie prywatne w C++. Sprawdź, jak dziedziczenie prywatne ogranicza dostęp do atrybutów klasy bazowej.

#### **Kroki:**
1. Stwórz klasę `Pojazd` i zastosuj dziedziczenie prywatne w klasie `Samochod`.
2. Sprawdź, jak zmienia się dostęp do metod i atrybutów klasy `Pojazd` w klasie pochodnej.

## **Oczekiwane rezultaty:**
Po zakończeniu tego laboratorium studenci będą w stanie:
Implementować różne typy dziedziczenia w C++ i Java.
Stosować klasy abstrakcyjne oraz nadpisywać metody abstrakcyjne w klasach dziedziczących.
Rozróżniać między dziedziczeniem publicznym, chronionym i prywatnym oraz rozumieć, jak każdy z tych typów wpływa na dostępność metod i atrybutów w klasach pochodnych.

## **Zadanie 7: Dziedziczenie wielokrotne (Multiple Inheritance) w C++**
### **Opis zadania:**
W C++ można dziedziczyć po wielu klasach bazowych, co nazywa się dziedziczeniem wielokrotnym (multiple inheritance). W tym zadaniu utworzymy dwie klasy bazowe, a następnie utworzymy klasę dziedziczącą po obu z nich.

#### **Kroki:**
1. Stwórz klasę `Silnikowy` z metodą `przyspiesz()`.
2. Stwórz klasę `Elektryczny` z metodą `ladowanie()`.
3. Stwórz klasę `Hybryda`, która dziedziczy po obu klasach bazowych i łączy ich funkcjonalność.
   
**Wyjaśnienie:**
W przykładzie klasa `Hybryda` dziedziczy po dwóch klasach: `Silnikowy` i `Elektryczny`. Ma dostęp do metod obu klas bazowych oraz nadpisuje metodę `przyspiesz()`, aby łączyć obie funkcjonalności.

## **Zadanie 8: Dziedziczenie wielokrotne (Multiple Inheritance) w Java za pomocą interfejsów**
### **Opis zadania:**
Java nie obsługuje bezpośrednio dziedziczenia wielokrotnego dla klas, ale pozwala na dziedziczenie wielokrotne za pomocą interfejsów. W tym zadaniu utworzymy dwa interfejsy, a następnie klasę, która implementuje oba z nich.

#### **Kroki:**
1. Stwórz interfejs `Silnikowy` z metodą `przyspiesz()`.
2. Stwórz interfejs `Elektryczny` z metodą `ladowanie()`.
3. Stwórz klasę `Hybryda`, która implementuje oba interfejsy.

**Wyjaśnienie:**
W przykładzie klasa `Hybryda` implementuje dwa interfejsy: `Silnikowy` i `Elektryczny`, co pozwala na dziedziczenie wielokrotne funkcjonalności z różnych źródeł, zachowując czystość obiektową w Java.

## **Zadanie 9: Dziedziczenie wielopoziomowe (Multilevel Inheritance)**
### **Opis zadania:**
W dziedziczeniu wielopoziomowym jedna klasa dziedziczy po innej, a następnie kolejna klasa dziedziczy po klasie pochodnej, tworząc łańcuch dziedziczenia.

#### **Kroki:**
1. Stwórz klasę `Pojazd` z podstawowymi metodami.
2. Stwórz klasę `Samochod`, która dziedziczy po `Pojazd`.
3. Stwórz klasę `ElektrycznySamochod`, która dziedziczy po `Samochod` i nadpisuje metodę `przyspiesz()`.

## **Zadanie 10: Dziedziczenie hybrydowe i wielościeżkowe (Hybrid/Multipath Inheritance)**
### **Opis zadania:**
Dziedziczenie hybrydowe (wielościeżkowe) łączy różne typy dziedziczenia, np. dziedziczenie wielopoziomowe i hierarchiczne. W wielościeżkowym dziedziczeniu może wystąpić problem diamentu, który można rozwiązać za pomocą funkcji wirtualnych w C++.

#### **Kroki:**
1. Stwórz klasę bazową `Pojazd` z metodą `przyspiesz()`.
2. Stwórz dwie klasy pośrednie: `Silnikowy` i `Elektryczny`, które dziedziczą po `Pojazd`.
3. Stwórz klasę `Hybryda`, która dziedziczy zarówno po `Silnikowy`, jak i `Elektryczny`. Zastosuj funkcje wirtualne, aby rozwiązać problem diamentu.

**Kod w Java:**
W Java dziedziczenie wielościeżkowe nie jest bezpośrednio obsługiwane. Możemy jednak użyć interfejsów, aby symulować podobne zachowanie.

## **Podsumowanie**
Podczas tego laboratorium studenci:
Nauczyli się implementować dziedziczenie w językach C++ i Java.
Zrozumieli mechanizm nadpisywania metod, który pozwala na dostosowanie zachowania klas dziedziczących.
Przetestowali swoje programy, tworząc obiekty klas dziedziczących i wywołując nadpisane metody.
