#ifndef ENCARREGADO_H
#define ENCARREGADO_H
//Begin section for file Encarregado.h
//TODO: Add definitions that you want preserved
//End section for file Encarregado.h
#include "Sa�da.h"
#include "Usu�rio.h"



class Ordem_de_Servi�o; //Dependency Generated Source:Encarregado Target:Ordem_de_Servi�o





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Encarregado : Sa�da::Usu�rio, Usu�rio
{

    //Begin section for Encarregado
    //TODO: Add attributes that you want preserved
    //End section for Encarregado

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o * ordem_de_Servi�o;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Encarregado(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Encarregado(); 



        //get ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Servi�o * get_ordem_de_Servi�o(); 



        //set ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_ordem_de_Servi�o(Ordem_de_Servi�o * ordem_de_Servi�o); 



};  //end class Encarregado



#endif
