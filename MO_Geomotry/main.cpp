#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "molec_geo.h"
#include <cmath>
/*remind:
* all function returned value would be better in pi format
* but not in degree format!!
*/

using namespace std;
 int main(int argc, char const *argv[]) {
  if(argc == 2){
    if(std::string(argv[1]) == "acetal"){
      Molecule obj("acetaldehyde.txt", 0);
      for (int i = 0;  i  < obj.natom; i++) {
      //obj.printfn();
        for (int j = 0; j < i; j++) {
          //obj.bondLength(i, j);
          for (int k = 0; k < j; k++){
              if(obj.bondLength(i, j) < 4 && obj.bondLength(j, k) < 4)
              printf("%20.12f %d-%d-%d\n", (obj.bondAng(i, j, k)*(180.0/acos(-1.0))), i , j, k);
            }
        }
      }
    for(int i=0; i < obj.natom; i++) {
      for(int k=0; k < obj.natom; k++) {
        for(int j=0; j < obj.natom; j++) {
          for(int l=0; l < j; l++) {
          if(i!=j && i!=k && i!=l && j!=k && k!=l && obj.bondLength(i,k) < 4.0 && obj.bondLength(k,j) < 4.0 && obj.bondLength(k,l) < 4.0)
             printf("%20.12f %d-%d-%d-%d\n",(obj.bondplanA(i,j,k,l)*(180.0/acos(-1.0))),i,j,k,l);
        }
      }
    }
  }
}
  }

  return 0;
}
