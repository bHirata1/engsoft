#ifndef NOTIFICA��O_H
#define NOTIFICA��O_H
//Begin section for file Notifica��o.h
//TODO: Add definitions that you want preserved
//End section for file Notifica��o.h
#include "java/sql/Time.h"



class Ordem_de_Servi�o; //Dependency Generated Source:Notifica��o Target:Ordem_de_Servi�o


class Cidad�o; //Dependency Generated Source:Notifica��o Target:Cidad�o





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Notifica��o
{

    //Begin section for Notifica��o
    //TODO: Add attributes that you want preserved
    //End section for Notifica��o

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Date data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Time hora;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char status;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o * ordem_de_Servi�o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * notifica��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * notifica��o2;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Cidad�o * cidad�o;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Notifica��o(); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Date get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_data(Date data); 



        //get hora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Time get_hora(); 



        //set hora
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_hora(Time hora); 



        //get status
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline char get_status(); 



        //set status
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_status(char status); 



        //get ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Servi�o * get_ordem_de_Servi�o(); 



        //set ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_ordem_de_Servi�o(Ordem_de_Servi�o * ordem_de_Servi�o); 



        //get notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Notifica��o * get_notifica��o(); 



        //set notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_notifica��o(Notifica��o * notifica��o); 



        //get notifica��o2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Notifica��o * get_notifica��o2(); 



        //set notifica��o2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_notifica��o2(Notifica��o * notifica��o2); 



        //get cidad�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Cidad�o * get_cidad�o(); 



        //set cidad�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_cidad�o(Cidad�o * cidad�o); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void gravar_dados_(); 



};  //end class Notifica��o



#endif
