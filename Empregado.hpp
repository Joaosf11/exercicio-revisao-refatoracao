#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  private:
	 double salarioHora;  
         std::string nome;  
  public:
	double getslarioHora () {return salarioHora}
	void setsalarioHora (double a) {salarioHora = a}
	
	std::string getnome (){ return nome }
        void setnome (std::string a) { nome = a }
   


    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif
