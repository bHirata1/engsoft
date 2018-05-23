#ifndef ENCARREGADO_H
#define ENCARREGADO_H
//Begin section for file Encarregado.h
//TODO: Add definitions that you want preserved
//End section for file Encarregado.h
#include "Saida.h"
#include "Usuario.h"



class Ordem_de_Servico; //Dependency Generated Source:Encarregado Target:Ordem_de_Servico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Encarregado : Saida::Usuario, Usuario
{

    //Begin section for Encarregado
    //TODO: Add attributes that you want preserved
    //End section for Encarregado

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servico * Ordem_de_Servico;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Encarregado(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Encarregado(); 



        //get Ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Servico * get_Ordem_de_Servico(); 



        //set Ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_Ordem_de_Servico(Ordem_de_Servico * Ordem_de_Servico); 



};  //end class Encarregado



#endif
