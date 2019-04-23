#include <iostream>
#include <cmath>

using namespace std;

void m1(float dt, int w);

int main() 
{
    m1(0.1,4);
    return 0;
}

void m1(float dt, int w){
    int puntos=4/(w*dt);
    float y_n=1,t_n=0;
    float y_n1;
    float f_xy;
    for (int j=0;j<puntos;j++){
        f_xy=-w*y_n;
        y_n1=y_n+f_xy*dt;
        cout << t_n << " " << y_n << endl;
        t_n+=dt,y_n=y_n1;
    }
    

}