#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
	private:
           double quotaMensalVendas;
        public:
	double getquotaMensalVendas() { return quotaMensalVendas }
        void setquotaMensalVendas (double a) {quotaMesalVendas = a }
	  
          	  
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	
};

