#include <math.h>
class deff_wheel{
    double vMotorR,vMotorL;
    double R;
    //車輪の間隔を入力
    deff_wheel(double l){
        vMotorR=0;
        vMotorL=0;
        R=l/2;
    }
    // v:ロボットの移動速度
    // rads:ロボットの回転速度
    void MotorSpead(double v,double rads){
        vMotorR=vMotorL=v/2;
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