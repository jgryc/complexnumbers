#include <conio.h>
#include <iostream>
#include "Complex.h"
#include "ComplexTrigonometric.h"

int main()
{
    using namespace CPPComplex;
    
        /* Complex complex1(-25.f, -25.f);
         Complex complex2(-55.f, 40.f);

         Complex complex3 = complex1 / complex2;

         complex1.print();
         complex2.print();
         complex3.print();*/




         /*Complex complex1(25.f, 100.f);
         Complex complex2(14.f, 172.f);

         Complex complex3 = complex1 + complex2;
         Complex complex4 = complex1 - complex2;
         Complex complex5 = complex1 * complex2;
         Complex complex6 = complex1 / complex2;
         
         complex3.print();
         complex4.print();
         complex5.print();
         complex6.print();

         std::cout << complex3.abs() << " absolute value " << complex3.arg() << " degree";*/

    /*
    while (1) {
        std::cout << "Trygonometryczne czy normalne:" << std::endl;
        std::cout << "1. Normalne" << std::endl;
        std::cout << "2. Trygonometryczne" << std::endl;
        std::cout << "ESC - wyjdź" << std::endl;
        while (1) {
            if (_kbhit) {

                char choice = _getch();
                if (choice == '1') {
                    std::cout << "1. wykonaj kolejna operacje" << std::endl;
                    std::cout << "2. pokaz wartosc bezwzgledna" << std::endl;
                    std::cout << "3. pokaz argument" << std::endl;
                    std::cout << "ESC - cofnij" << std::endl;
                    if ((int)choice == 27)
                        break;
                }
                else if (choice == '2') {

                    std::cout << "1. wykonaj kolejna operacje" << std::endl;
                    std::cout << "2. pokaz wartosc bezwzgledna" << std::endl;
                    std::cout << "3. pokaz argument" << std::endl;
                    std::cout << "ESC - cofnij" << std::endl;
                    if ((int)choice == 27)
                        break;

                }

                if ((int)choice == 27)
                    break;

            }
            
        }
        
    }*/


         /*Complex complex2(25.f, true);
         Complex complex3(25.f, false);

        Complex complex1(25.f, true);
        complex1.print();
        complex2.print();
        complex3.print();

        
    */

    //TESTY DO ZWYKLEJ COMPLEX
    /*
    Complex complexNormal1(25.0, -24.0); // 34.66 mod 316.2 arg
    Complex complexNormal2(123.0, true); // 123 mod 0 arg
    Complex complexNormal3(127.0, false); // 127 mod 90 arg
	Complex complexNormal4; // 0 mod 0 arg
    
	Complex complexSum = complexNormal2 + complexNormal3; // 123 + 127i mod 176.8 arg 45.92
    Complex complexSubtraction = complexNormal1 - complexNormal3; // 25-151i mod 153.1 arg 279.4
    Complex complexDivision = complexNormal1 / complexNormal3; // 0.189+0.1969i mod 0.2729 arg 46.17
    Complex complexMultiply = complexNormal1 * complexNormal2; // 3075-2952i mod 4263 arg 316.2

   

 
    complexNormal1.print();
    complexNormal2.print();
    complexNormal3.print();
    complexNormal4.print();

    std::cout << "OPERATIONS ==========================================" << std::endl;
    complexSum.print();
    complexSubtraction.print();
    complexDivision.print();
    complexMultiply.print();
    */
    //

   /*
    ComplexTrygonometric cp1(2.0);
	ComplexTrygonometric cp2(296.6, 2.236);
    ComplexTrygonometric cp3(0);
    
    
   // std::cout << cp2.getRadius() << std::endl;
   // std::cout << cp2.getArgument() << std::endl;
    
    cp1.print();
    cp2.print();
    cp3.print();

    std::cout << "================================================" << std::endl;
    
    Complex complex(288.0, 34.0);
    complex.print();
    ComplexTrygonometric complexToTryg(complex);
    complexToTryg.print();

	std::cout << "=============================================== = " << std::endl;
    
    std::cout << (cp1 == cp2) << std::endl;

    cp1 = cp2;
    std::cout << (cp1 == cp2) << std::endl;
    
    std::cout << "===============================================" << std::endl;
    
    ComplexTrygonometric comp = complexToTryg;
	comp.print();
    */

    ComplexTrigonometric complex;
    std::cin >> complex;
    std::cout << complex;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
