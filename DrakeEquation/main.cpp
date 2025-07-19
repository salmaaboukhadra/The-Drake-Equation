// drake.cpp
// Salma Aboukhadra, CISP 360
// 06/15/2025

// Specification C3 - Source File Header

#include <iostream>  // For input and output operations
#include <iomanip>   // For setprecision

using namespace std;

// Specification C2 - ProgramGreeting
// Program Greeting
// This program calculates the estimated number of intelligent alien civilizations
// in our galaxy using the Drake Equation.
int main() {
    // Specification C1 - Variable Declaration
    // Specification C4 - Variable Initialization
    // Declare and initialize all variables

    const int RATE_STAR_CREATION = 7;                // Rate of star creation per year
    const double FRACTION_WITH_PLANETS = 0.5;        // Fraction of stars with planets
    const double AVG_PLANETS_SUPPORT_LIFE = 2.0;     // Avg planets per star that could support life
    const double FRACTION_PLANETS_WITH_LIFE = 0.13;  // Fraction of those planets that develop life
    double fraction_with_intelligent_life = 0.42;     // Fraction that develop intelligent life (set to 42%)
    const double FRACTION_WITH_TECH = 0.2;           // Fraction with technology
    const double CIVILIZATION_LIFETIME = 10000.0;    // Years civilization can communicate

    // Specification B1 - Calculation
    // Calculate the number of civilizations
    double etCiv = RATE_STAR_CREATION *
                   FRACTION_WITH_PLANETS *
                   AVG_PLANETS_SUPPORT_LIFE *
                   FRACTION_PLANETS_WITH_LIFE *
                   fraction_with_intelligent_life *
                   FRACTION_WITH_TECH *
                   CIVILIZATION_LIFETIME;

    // Specification C2 - ProgramGreeting (actual output)
    cout << "Drake Equation Calculator" << endl;
    cout << "Author: Salma Aboukhadra" << endl;
    cout << "Class: CISP 360" << endl;
    cout << "Date: 06/15/2025" << endl;
    cout << "--------------------------" << endl;

    // Specification A4 - Drake Equation Heading
    cout << endl;
    cout << "CHANCE OF INTELLIGENT LIFE" << endl;
    cout << "==========================" << endl;

    // Output the result with 3 decimal places
    cout << fixed << setprecision(3);
    cout << "Estimated number of communicative civilizations: " << etCiv << endl;

    // Specification B3 - Double and Half Output and Headings
    cout << endl;
    cout << "SENSITIVITY ANALYSIS" << endl;
    cout << "===================" << endl;
    cout << "Doubled value: " << etCiv * 2 << endl;
    cout << "Halved value: " << etCiv / 2 << endl;

    // Specification A3 - Variable Name Heading
    cout << endl;
    cout << "VARIABLE NAMES AND VALUES" << endl;
    cout << "=========================" << endl;
    cout << "RATE_STAR_CREATION: " << RATE_STAR_CREATION << endl;
    cout << "FRACTION_WITH_PLANETS: " << FRACTION_WITH_PLANETS << endl;
    cout << "AVG_PLANETS_SUPPORT_LIFE: " << AVG_PLANETS_SUPPORT_LIFE << endl;
    cout << "FRACTION_PLANETS_WITH_LIFE: " << FRACTION_PLANETS_WITH_LIFE << endl;
    cout << "fraction_with_intelligent_life: " << fraction_with_intelligent_life << endl;
    cout << "FRACTION_WITH_TECH: " << FRACTION_WITH_TECH << endl;
    cout << "CIVILIZATION_LIFETIME: " << CIVILIZATION_LIFETIME << endl;

    // Specification B4 - Program Ending
    int pEnd;
    cout << endl << "Program finished. Enter any number to exit: ";
    cin >> pEnd;

    // Specification A2 – Comment Output
    /*
    Drake Equation Calculator
    Author: Salma Aboukhadra
    Class: CISP 360
    Date: 06/15/2025
    --------------------------

    CHANCE OF INTELLIGENT LIFE
    ==========================
    Estimated number of communicative civilizations: 764.400

    SENSITIVITY ANALYSIS
    ===================
    Doubled value: 1528.800
    Halved value: 382.200

    VARIABLE NAMES AND VALUES
    =========================
    RATE_STAR_CREATION: 7
    FRACTION_WITH_PLANETS: 0.5
    AVG_PLANETS_SUPPORT_LIFE: 2
    FRACTION_PLANETS_WITH_LIFE: 0.13
    fraction_with_intelligent_life: 0.42
    FRACTION_WITH_TECH: 0.2
    CIVILIZATION_LIFETIME: 10000

    Program finished. Enter any number to exit:
    */
    return 0;
}
