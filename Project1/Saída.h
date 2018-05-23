#ifndef SAÍDA_H
#define SAÍDA_H
using namespace std;
#include <string>
//Begin section for file Saída.h
//TODO: Add definitions that you want preserved
//End section for file Saída.h
#include "Equipe.h"
#include "Equipamento.h"
#include "Material.h"
#include "Custo.h"
#include "Encarregado.h"



class Ordem_de_Serviço; //Dependency Generated Source:Saída Target:Ordem_de_Serviço





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Saída
{

    //Begin section for Saída
    //TODO: Add attributes that you want preserved
    //End section for Saída

    public:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        class Usuário : Encarregado
        {

            //Begin section for Saída::Usuário
            //TODO: Add attributes that you want preserved
            //End section for Saída::Usuário

            private:


                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                 login;



                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                 senha;




            public:

                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                Usuário(); 



                //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
                virtual ~Usuário(); 



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



        };  //end class Usuário


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
        Ordem_de_Serviço * ordem_de_Serviço;



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
        Saída(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Saída(); 



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



        //get ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Ordem_de_Serviço * get_ordem_de_Serviço(); 



        //set ordem_de_Serviço
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_ordem_de_Serviço(Ordem_de_Serviço * ordem_de_Serviço); 



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



};  //end class Saída



#endif
