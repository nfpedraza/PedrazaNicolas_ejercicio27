#include <iostream>
#include <cmath>
using namespace std;

float deltaT;
float w=4.0;
float t_0=0.0;

void Euler_scheme(float deltaT,float w, float t_0);
void Implicit_scheme(float deltaT,float w, float t_0);

void Euler_scheme(float deltaT,float w, float t_0){
  float yn=1.0;
  for(t_0;t_0<=(4/w);deltaT){
      yn= yn-(deltaT * w * yn);
      t_0+=deltaT;
      cout<<"[ "<<t_0<<"-->"<<yn<<"]"<<"\n";
  }  
}

void Implicit_scheme(float deltaT,float w, float t_0){
    float yn2=1.0;
    for(t_0;t_0<=(4/w);deltaT){
      yn2=yn2/(1 + deltaT*w*yn2);
      t_0+=deltaT;
      cout<<"[ "<<t_0<<"-->"<<yn2<<"]"<<"\n";
  }
}

int main(){
    
    cout<<"Fractional error with 0.1 using Euler Scheme  "; Euler_scheme(0.1,4.0,0.0);
    cout<<"Fractional error with 0.01 using Euler Scheme ";Euler_scheme(0.01,4.0,0.0);
    cout<<"Fractional error with 1 using Euler Scheme "; Euler_scheme(1.0,4.0,0.0);
    cout<<"Fractional error with 0.1 using Implicit Scheme "; Implicit_scheme(0.1,4.0,0.0);
    cout<<"Fractional error with 0.01 using Implicit Scheme "; Implicit_scheme(0.01,4.0,0.0);
    cout<<"Fractional error with 1 using Implicit Scheme "; Implicit_scheme(1.0,4.0,0.0);
    
    return 0;
}