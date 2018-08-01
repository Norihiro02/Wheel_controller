#include<cmath>
#include<vector>
class OmniWheelPose{
    double rad;
    double l;
    double radWheel;
    void setPose_xy(double x,double y,double radWheel){
        l=sqrt(pow(x,2)+pow(y,2));
        rad=atan(y/x);
        this.setPose_rl(rad,l,radWheel);
    }
    void setPose_rl(double rad,double l,double radWheel){
        this.rad=rad;
        this.l=l;
        this.radWheel=radWheel;
    }
}
class Omni_vel{
    std::vector<OmniWheelPose> wheel;
    Omni_vel(){

    }
    void setV(double x,double y,double yo){
        int i=0;
        omni=Omni_Wheel();
        v1=x*sin(rad)+y*cos(rad);
    }
}