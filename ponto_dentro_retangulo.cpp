#include <iostream>
using namespace std;

bool dentro_ret (int x0, int y0, int x1, int y1, int x, int y){
    bool dentroRet;
    
    if ( (x >= x0) && (x <= x1) && (y >= y0) && (y <= y1) ) {
        dentroRet = true;

    }else{

        dentroRet = false;
   }
   
    return dentroRet;
  }
  
int main (void){
    int x0=0, y0=0, x1=20, y1=15,
        x=7, //ponto teste x
        y=14; //ponto teste y
        
    if (dentro_ret(x0,y0,x1,y1,x,y))
        cout << " Ponto (" << x << "," << y << ") esta dentro do retangulo (" << 
            x0 << "," << y0 << ") e (" << x1 << "," << y1 << ")"  << endl;
    else
        cout << " Ponto (" << x << "," << y << ") esta fora do retangulo (" << 
            x0 << "," << y0 << ") e (" << x1 << "," << y1 << ")"  << endl;

    return 0;
}
