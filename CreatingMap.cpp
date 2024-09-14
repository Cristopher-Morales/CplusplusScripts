#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

string ScalarToString(int n, double *val_scalars, string *gas_composition){
    string final;
    for (int i=0;i<n;i++){
        if (i==n-1){
          final.append(gas_composition[i]+":"+to_string(val_scalars[i]));
        }else{
          final.append(gas_composition[i]+":"+to_string(val_scalars[i])+", ");
        }
    }
    return final;
}

int main() {
    int n=2;
    double *val_scalars = new double;
    val_scalars[0]=0.4;
    val_scalars[1]=1.0-val_scalars[0];
    string *composition = new string[2];
    composition[0]="H2O";
    composition[1]="H2";
    std::cout << ScalarToString(n, val_scalars,composition)<<std::endl;

    return 0;
}