#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double angleDeg){
    double angleRad1;
    angleRad1 = angleDeg*M_PI/180.0 ;
    return angleRad1;
}
double rad2deg(double angleRad){
    double angleDeg1;
    angleDeg1 = angleRad*180.0/M_PI ;
    return angleDeg1;
}
double findXComponent(double l1,double l2,double rad1,double rad2){
    double x1;
    double x2;
    x1 =l1*cos(rad1);
    x2 =l2*cos(rad2);
    return x1+x2;
}
double findYComponent(double l1,double l2,double rad1,double rad2){
    double y1;
    double y2;
    y1 =l1*sin(rad1);
    y2 =l2*sin(rad2);
    return y1+y2;
}
double pythagoras(double X, double Y){
    double XY;
    XY = sqrt(pow(X,2) + pow(Y,2));
    return XY;
}
void showResult(double ANSside,double ANSangle){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<"\n";
    cout<<"Length of the resultant vector = "<< ANSside <<"\n";
    cout<<"Direction of the resultant vector (deg) = "<< ANSangle<<"\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
