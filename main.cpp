#include <iostream>
#include "algo/Points/Point.h"
#include "algo/FLS/FLS.h"
#include "algo/GLS/GLS.h"
#include "algo/TSPSolver.h"
#include <set>
using namespace std;

int main() {

    string filename = "filename";

    TSPSolver solver(48,filename);
    GLS gls = solver.GLS_FLS_solver(0.125,100);
    gls.optimise();
    cout<<gls.optDistance();

    return 0;
}
