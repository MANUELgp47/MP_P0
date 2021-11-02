#include "Fecha.h"

Fecha::Fecha(const int &d,const int &m,const int &a)
{
    //ctor
    dia=d;
    mes=m;
    anio=a;

    if (mes > 12){
        mes =12;
    }else if (mes < 1 ){
        mes = 1;
    }

    ///mes bisiesto

    if (mes == 2 and bisiesto(anio) == true and dia > 28 ){

        dia = 29;
    }else if (dia > 27){
        dia = 28;
    }

    /// mes no bisisesto

    if (mes != 2 and dia > 30 and mes == 1 or mes == 3 or mes == 5 or mes ==7 or mes ==8 or mes ==10 or mes ==12)
    {
        dia = 31;

    }else if (dia > 29){

        dia = 30;
    }

}

Fecha::~Fecha()
{
    //dtor
}

void Fecha::setFecha(const int &d,const int &m,const int &a)
{
    //ctor
    dia=d;
    mes=m;
    anio=a;

}
void Fecha::ver(){

    cout << dia<<"/"<<mes<<"/"<<anio<<endl;

}
bool Fecha::bisiesto(const int &a){

 if((a%4==0 and a%100!=0) or a%400==0)
      return true;
   else
      return false;

}
