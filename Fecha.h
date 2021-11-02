#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;

class Fecha
{

    private:
        int dia, mes, anio;
    public:
        Fecha(const int &d, const int &m, const int &a);
        virtual ~Fecha();
        int getDia()const{return dia;}
        int getMes()const{return mes;}
        int getAnio()const{return anio;}
        void setFecha(const int &d, const int &m, const int &a);
        void ver();
        bool bisiesto(const int &a);


     /*

        Fecha operator++;
        Fecha operator++(int i);
        Fecha operator++(const int i)const;
        friend Fecha operator+(const int &i, const Fecha &f);
    */
    //protected:


};

#endif // FECHA_H
