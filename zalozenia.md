## Projekt "Symulacja centrum operacyjnego stacji badawczej"

Założeniem projektu jest zasymulowanie dzialałności *fikcyjnej* stacji badawczej opartej na programie badań naukowych University of Alaska Fairbanks pod nazwą HAARP (High-frequency Active Auroral Research Program). Zakres symulacji ogranicza się do *uproszczonych* modeli narzędzi diagnostycznych i nadawczych takich jak macierze anten (phased array), jonosondy, radary UHF/VHF, fotometry.


# Architektura projektu

Projekt dzieli się na:
* plik main.cpp, gdzie wykonuje się program,
* plik nagłówkowy instruments.h, w którym znajdują się deklaracje klas i metod modeli narzędzi badawczych oraz plik wykonawczy instruments.cpp z definicjami metod,
* plik nagłówkowy komunikacja.h oraz jego plik wykonawczy komunikacja.cpp, które modelują jajo niespodzianke zawierające (de)kodery kodu Morsa (Fractionated? może) i szyfr Vernama (referencja do teorii spiskowych nt. HAARP).
