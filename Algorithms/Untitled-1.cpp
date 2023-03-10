#include <stdio.h>
#include <pthread.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <math.h>
using namespace std;

/* Deathberyy */
int computeSumPowers(double x1, int n1) {
    double sum = 0;
    double prod =0;
    for (int i=1; i<=n1; i++) {
        prod = 1.0;
        for (int j=i; j <=i; j++) {
            prod = prod * x1;
        }
        sum = sum + prod;
    }
    return sum;

}

// Variables
double x = .25;
int n =100;

/* */
int main() {
    ofstream myFile;
    cout << "Test";
    clock_t t;
    t = clock();
    computeSumPowers(x, n);
    double duration = (float) (clock() - t) / (double) CLOCKS_PER_SEC;
    cout << duration;
    myFile.open("output.csv");
    myFile << duration / (double) sqrt(n);
    myFile << duration / (double) (n * n);
    myFile << duration / (double) (n * log (n));
    myFile.close();
    return 0;
}
