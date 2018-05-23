#ifndef ORDEM_DE_SERVI�O_H
#define ORDEM_DE_SERVI�O_H
//Begin section for file Ordem_de_Servi�o.h
//TODO: Add definitions that you want preserved
//End section for file Ordem_de_Servi�o.h
#include "XSDDataTypes/time.h"
#include "Material.h"
#include "java/sql/Time.h"



class Notifica��o; //Dependency Generated Source:Ordem_de_Servi�o Target:Notifica��o


class Sa�da; //Dependency Generated Source:Ordem_de_Servi�o Target:Sa�da


class Encarregado; //Dependency Generated Source:Ordem_de_Servi�o Target:Encarregado





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Ordem_de_Servi�o
{

    //Begin section for Ordem_de_Servi�o
    //TODO: Add attributes that you want preserved
    //End section for Ordem_de_Servi�o

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        time horaPessoal;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Time horaEquipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Date data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char prioridade;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int estimativaPessoal;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int estimativaEquipamento;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int estimativaMaterial;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int estimativaCusto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char status;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notifica��o * notifica��o;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Sa�da * sa�da;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Encarregado * encarregado;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servi�o(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Ordem_de_Servi�o(); 



        //get id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_id(); 



        //set id
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_id(int id); 



        //get horaPessoal
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline time get_horaPessoal(); 



        //set horaPessoal
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_horaPessoal(time horaPessoal); 



        //get material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Material get_material(); 



        //set material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_material(Material material); 



        //get horaEquipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Time get_horaEquipamento(); 



        //set horaEquipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_horaEquipamento(Time horaEquipamento); 



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Date get_data(); 



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_data(Date data); 



        //get prioridade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline char get_prioridade(); 



        //set prioridade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_prioridade(char prioridade); 



        //get estimativaPessoal
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_estimativaPessoal(); 



        //set estimativaPessoal
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_estimativaPessoal(int estimativaPessoal); 



        //get estimativaEquipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_estimativaEquipamento(); 



        //set estimativaEquipamento
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_estimativaEquipamento(int estimativaEquipamento); 



        //get estimativaMaterial
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_estimativaMaterial(); 



        //set estimativaMaterial
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_estimativaMaterial(int estimativaMaterial); 



        //get estimativaCusto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_estimativaCusto(); 



        //set estimativaCusto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_estimativaCusto(int estimativaCusto); 



        //get status
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline char get_status(); 



        //set status
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_status(char status); 



        //get notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Notifica��o * get_notifica��o(); 



        //set notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_notifica��o(Notifica��o * notifica��o); 



        //get sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Sa�da * get_sa�da(); 



        //set sa�da
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_sa�da(Sa�da * sa�da); 



        //get encarregado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Encarregado * get_encarregado(); 



        //set encarregado
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_encarregado(Encarregado * encarregado); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void obterOSFinalizada(); 



};  //end class Ordem_de_Servi�o



#endif
