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

## **Podsumowanie**
Podczas tego laboratorium studenci:
Nauczyli się implementować dziedziczenie w językach C++ i Java.
Zrozumieli mechanizm nadpisywania metod, który pozwala na dostosowanie zachowania klas dziedziczących.
Przetestowali swoje programy, tworząc obiekty klas dziedziczących i wywołując nadpisane metody.
