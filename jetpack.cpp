#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
#define RAD_MARS  3387300 // en m
// 10 a la 24 kg
#define CONST_U 42827725400000 // CONST_UNIVERSAL * MASA -->  0.00000000006674  * 641710000000000000000000    
using namespace std;

/*
 * 
 */
double calculate_grav(double altitud) {
    // unsigned  long int MASS = ;
    return ((CONST_U) / ((RAD_MARS + altitud) * (RAD_MARS + altitud)));
}

int main(int argc, char** argv) {
    double altitud, gravity;
    cin >> altitud;
    gravity = calculate_grav(altitud);
    cout << fixed;
    cout << left << setprecision(40);
    cout << endl << endl << " La gravedad en este punto es de: " << gravity << endl;
    double temp, presion, densidad;
    if (altitud > 7000) {
        temp = -23.4 - (0.00222 * altitud);
        presion = 0.699 * (exp((-0.00009) * altitud));

    } else {
        temp = -31 - ((0.000998) * altitud);
        presion = 0.699 * (exp((-0.00009) * altitud));
    }
    densidad = presion / (0.1921 * (temp + 273.1));
    cout << " Temperatura = " << temp << endl << "Presion = " << presion << endl << "Densidad = " << densidad << endl;
    return 0;
}

