#include <iostream>
#include <cmath>

using namespace std;

void m2(float dt, int w);

int main() 
{
    m2(0.1,4);
    return 0;
}

void m2(float dt, int w){
    int puntos=4/(w*dt);
    float y_n=1,t_n=0;
    float y_n1;
    for (int j=0;j<puntos;j++){
        y_n1=pow(1+w*dt,-1)*y_n;
        cout << t_n << " " << y_n << endl;
        t_n+=dt,y_n=y_n1;
    }
    

}
