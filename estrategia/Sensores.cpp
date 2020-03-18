#include "robo_hardware2.h"
#include "Sensores.h"

bool Sensores::BPBBB(){
    
    return (logica.bValorMaisEsq() && logica.pValorEsq()&& logica.bValorMeio() && logica.bValorDir() && logica.bValorMaisDir());
}
bool Sensores::BBBPB(){
    
    return (logica.bValorMaisEsq() && logica.bValorEsq()&& logica.bValorMeio() && logica.pValorDir() && logica.bValorMaisDir());
}
  bool Sensores::BBBBB(){
    
    return (logica.bValorMaisEsq() && logica.bValorEsq()&& logica.bValorMeio() && logica.bValorDir() && logica.bValorMaisDir());
}
bool Sensores::BBPBB(){
    
    return (logica.bValorMaisEsq() && logica.bValorEsq()&& logica.pValorMeio() && logica.bValorDir() && logica.bValorMaisDir());
}
 bool Sensores::PPBBB(){
    
    return (logica.pValorMaisEsq() && logica.pValorEsq()&& logica.bValorMeio() && logica.bValorDir() && logica.bValorMaisDir());
}
 bool Sensores::BBBPP(){
    
    return (logica.bValorMaisEsq() && logica.bValorEsq()&& logica.bValorMeio() && logica.pValorDir() && logica.pValorMaisDir());
}
  bool Sensores::BBPPP(){
    
    return (logica.bValorMaisEsq() && logica.bValorEsq()&& logica.pValorMeio() && logica.pValorDir() && logica.pValorMaisDir());
}
  bool Sensores::PPPBB(){
    
    return (logica.pValorMaisEsq() && logica.pValorEsq()&& logica.pValorMeio() && logica.bValorDir() && logica.bValorMaisDir());
}
  bool Sensores::PPPE(){

    return (logica.pValorMaisEsq() && logica.pValorEsq() && logica.pValorMeio());
}
  bool Sensores::PPPD(){

    return (logica.pValorMeio() && logica.pValorDir() && logica.pValorMaisDir());
}
  bool Sensores:: MB(){
    
    return (logica.bValorMeio());
}
  bool Sensores:: pretoMesq(){

    return (logica.pValorMaisEsq());
}
  bool Sensores:: PB(){

    return (logica.pValorMeio());
}
  bool Sensores:: BBBB() {

    return (logica.bValorMaisEsq() && logica.bValorEsq() && logica.bValorDir() && logica.bValorMaisDir());
}

  bool Sensores:: BBBP() {

    return (logica.bValorMaisEsq() && logica.bValorEsq() && logica.bValorDir() && logica.pValorMaisDir());

}

  bool Sensores:: BBPB() {

    return (logica.bValorMaisEsq() && logica.bValorEsq() && logica.pValorDir() && logica.bValorMaisDir());

}

  bool Sensores:: BBPP() {

    return (logica.bValorMaisEsq() && logica.bValorEsq() && logica.pValorDir() && logica.pValorMaisDir());

}

  bool Sensores:: BPBB() {

    return (logica.bValorMaisEsq() && logica.pValorEsq() && logica.bValorDir() && logica.bValorMaisDir());

}

  bool Sensores:: BPPB() {

    return (logica.bValorMaisDir() && logica.pValorEsq() && logica.pValorDir() && logica.bValorMaisDir());

}
  
  bool Sensores:: PBBB() {

    return (logica.pValorMaisEsq() && logica.bValorEsq() && logica.bValorDir() && logica.bValorMaisDir());

}

  bool Sensores:: PPPP() {

    return (logica.pValorMaisEsq() && logica.pValorEsq() && logica.pValorDir() && logica.pValorMaisDir());

}
  bool Sensores:: PPPB() {

    return (logica.pValorMaisEsq() && logica.pValorEsq() && logica.pValorDir() && logica.bValorMaisDir());

} 
  bool Sensores:: BPPP() {

    return (logica.bValorMaisEsq() && logica.pValorEsq() && logica.pValorDir() && logica.pValorMaisDir());

} 
  bool Sensores:: PPBB() {

    return (logica.pValorMaisEsq() && logica.pValorEsq() && logica.bValorDir() && logica.bValorMaisDir());

}
  bool Sensores:: brancoMesq (){

    return (logica.bValorMaisEsq());
}

   bool Sensores:: superBrancoME(){

    return (logica.superBrancoME());
}
  
  
  bool Sensores:: brancoMdir (){

    return (logica.bValorMaisDir());
}
  
  bool Sensores:: brancoDir (){

    return (logica.bValorDir());
}
  
  bool Sensores:: brancoEsq (){

    return (logica.bValorEsq()); 
}

  bool Sensores:: pretoMdir (){

    return (logica.pValorMaisDir());
}

  bool Sensores:: BBB (){

    return (logica.bValorDir() && logica.bValorEsq() && logica.bValorMaisDir());
}

  bool Sensores:: PPP (){

    return (logica.pValorDir() && logica.pValorEsq() && logica.pValorMaisDir());
    
}
  bool Sensores:: BPBP() {

    return (logica.bValorMaisEsq() && logica.pValorEsq() && logica.bValorDir() && logica.pValorMaisDir());

}
	bool Sensores:: entSala3(){
		
		return ((PPPP()) || (BPPP()) || (PPPB()));
}
