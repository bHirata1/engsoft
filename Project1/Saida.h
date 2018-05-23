#ifndef SAIDA_H
#define SAIDA_H
using namespace std;
#include <string>
//Begin section for file Saida.h
//TODO: Add definitions that you want preserved
//End section for file Saida.h
#include "Equipe.h"
#include "Equipamento.h"
#include "Material.h"
#include "Custo.h"
#include "Encarregado.h"



class Ordem_de_Servico; //Dependency Generated Source:Saida Target:Ordem_de_Servico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Saida
{

    //Begin section for Saida
    //TODO: Add attributes that you want preserved
    //End section for Saida

    public:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        class Usuario : Encarregado
        {

            //Begin section for Saida::Usuario
            //TODO: Add attributes that you want preserved
            //End section for Saida::Usuario

            private:


                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
            string     login;



                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                 senha;




            public:

                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                Usuario(); 



                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                virtual ~Usuario(); 



                //get login
                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                inline string get_login(); 



                //set login
                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                inline void set_login(string login); 



                //get senha
                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                inline string get_senha(); 



                //set senha
                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                inline void set_senha(int senha); 



        };  //end class Usuario


    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe equipe;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        string data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento equipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Custo custo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servico * Ordem_de_Servico;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipe * equipe2;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Equipamento * equipamento2;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * material2;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Custo * custo2;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saida(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Saida(); 



        //get equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipe get_equipe(); 



        //set equipe
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipe(Equipe equipe); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline string get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_data(string data); 



        //get equipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipamento get_equipamento(); 



        //set equipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipamento(Equipamento equipamento); 



        //get material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Material get_material(); 



        //set material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_material(Material material); 



        //get custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Custo get_custo(); 



        //set custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custo(Custo custo); 



        //get Ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Servico * get_Ordem_de_Servico(); 



        //set Ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_Ordem_de_Servico(Ordem_de_Servico * Ordem_de_Servico); 



        //get equipe2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipe * get_equipe2(); 



        //set equipe2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipe2(Equipe * equipe2); 



        //get equipamento2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Equipamento * get_equipamento2(); 



        //set equipamento2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_equipamento2(Equipamento * equipamento2); 



        //get material2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Material * get_material2(); 



        //set material2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_material2(Material * material2); 



        //get custo2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Custo * get_custo2(); 



        //set custo2
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custo2(Custo * custo2); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void data(); 



};  //end class Saida



#endif
