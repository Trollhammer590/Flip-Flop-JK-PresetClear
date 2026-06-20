int reset= 13;
int save= 12;
int led= 9;

int saveState;	//Variável para armazenamento de informação.

void setup()
{
  	pinMode(led, OUTPUT);
  	pinMode(save, INPUT);	//configuração básica de uso dos pinos do Arduino
  	pinMode(reset, INPUT);
}

void loop()
{
	//Código simulador do Flip-Flop JK com Entradas Preset(save) e Clear(reset)
  
  if( saveState == 0){
    if(digitalRead(save)==HIGH){
      saveState = 1;					      //Seta em saveState o valor 1.
	  digitalWrite(led, saveState);		//Atribui ao comando o valor informado
    }          							        //pelo saveState.
  } else { 
    
     if(digitalRead(reset)== HIGH){
        saveState = 0;							        //Seta em saveState o valor 0.
	  	digitalWrite(led, !digitalRead(led));	//Atribui ao comando o contrário do valor
     }											                //do led que foi salvo salvo pelo saveState.
    
	  digitalWrite(led, saveState);		//Prescreve o digitalWrite anterior com o valor novo
  }										              //de saveState
}