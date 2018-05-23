#ifndef ENCARREGADO_H
#define ENCARREGADO_H
//Begin section for file Encarregado.h
//TODO: Add definitions that you want preserved
//End section for file Encarregado.h
#include "Saída.h"
#include "Usuário.h"



class Ordem_de_Serviço; //Dependency Generated Source:Encarregado Target:Ordem_de_Serviço





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Encarregado : Saída::Usuário, Usuário
{

    //Begin section for Encarregado
    //TODO: Add attributes that you want preserved
    //End section for Encarregado

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Serviço * ordem_de_Serviço;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Encarregado(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Encarregado(); 



        //get ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Serviço * get_ordem_de_Serviço(); 



        //set ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_ordem_de_Serviço(Ordem_de_Serviço * ordem_de_Serviço); 



};  //end class Encarregado



#endif
