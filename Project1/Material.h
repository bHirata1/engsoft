
#define MATERIAL_H
#include <stdio.h>
using namespace std;
//Begin section for file Material.h
//TODO: Add definitions that you want preserved
//End section for file Material.h


class Saída; //Dependency Generated Source:Material Target:Saída





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Material
{

    //Begin section for Material
    //TODO: Add attributes that you want preserved
    //End section for Material

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        char unidademedidaMedida;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int custo;	



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Saída * saída;

		string nomematerial;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material(); 
		virtual ~Material();
		Material(string nomematerial, int unidademedida, int custo);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Material(); 



        //get nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline char get_nome(); 



        //set nome
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_nome(char nome); 



        //get unidademedidaMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline char get_unidademedidaMedida(); 



        //set unidademedidaMedida
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_unidademedidaMedida(char unidademedidaMedida); 



        //get custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline int get_custo(); 



        //set custo
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_custo(int custo); 



        //get saída
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline Saída * get_saída(); 



        //set saída
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        inline void set_saída(Saída * saída); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void obterMateriais__(); 



};  //end class Material



#endif
