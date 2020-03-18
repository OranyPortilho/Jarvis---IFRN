#include <Adafruit_TCS34725.h>
#include <cor.h>
#include <CorHardware.h>
#include <CorTcs23.h>
#include <CorTcs34.h>
#include <EEPROM2.h>
#include <pinagem.h>
#include <robo_hardware2.h>
#include <SensoresCor.h>
#include <Ultrasonic.h>

#ifndef LOGICA_H
#define LOGICA_H

#include "Calibrador.h"
  
class Logica{
  private:

    Calibrador calibrador;
    float sRME;
    float sRE;
    float sRD;
    float sRMD;
    float sM;
    float valorMaisEsq;
    float valorEsq;
    float valorDir;
    float valorMaisDir;
    float valorMeio;

  public:

    bool superBrancoME();
    
    bool bValorMaisEsq();
    bool pValorMaisEsq();
    
    bool bValorEsq();
    bool pValorEsq();

    bool verdeEsq();
    
    bool bValorDir();
    bool pValorDir();
    
    bool bValorMaisDir();
    bool pValorMaisDir();
    
    bool pValorMeio();
    bool bValorMeio(); 

    void valores();
    
    void atualizarVME();
    void atualizarVE();
    void atualizarVD();
    void atualizarVMD();

    void atualizarMeio();

    void setValoresCalibracao(Calibrador c);

};

#endif
