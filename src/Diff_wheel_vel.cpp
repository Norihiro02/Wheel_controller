#include <math.h>
class deff_wheel{
    double vMotorR,vMotorL;
    double R;
    deff_wheel(double d){
        vMotorR=0;
        MotorL=0;
        R=d/2;
    }
    void MotorSpead(double v,double rads){
        vMotorR=vMotorL=v;
        vMotorR += rads*R;
        vMotorL -= rads*R;
    }
    double getVMotorR(){
        return vMotorR;
    }
    double getVMotorL(){
        return vMotorL;
    }

}