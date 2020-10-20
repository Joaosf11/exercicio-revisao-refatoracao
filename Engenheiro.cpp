#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

	
	private:
	   int projetos;
        public:  
	  int getprojetos () {return projetos}
	  void setprojetos(int a) {projetos = a}
	
};

