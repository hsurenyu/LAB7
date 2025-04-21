# ifndef CYLINDER_CPP
# define CYLINDER_CPP
 
# include "Cylinder.h"
const double pi=3.14159265358979323846;
double Cylinder :: SurfaceArea(){
    double surface;
    surface=2*pi*radius*(radius+height);
    return surface;
}

double Cylinder :: Volume(){
    double vol;
    vol=pi*radius*radius*height;
    return vol;
}

double Cylinder :: Circumference(){
    double circle;
    circle=2*pi*radius;
    return circle;
}

istream & operator>>(istream & in, Cylinder & cyl)
{
    in>>cyl.radius>>cyl.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cyl)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cyl.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cyl.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<setprecision(3)<<cyl.Volume()<<endl;
    return out;
}

# endif
