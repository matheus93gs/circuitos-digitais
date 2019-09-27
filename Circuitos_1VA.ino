int AND(int inputA, int inputB){
  return (inputA && inputB);
}

int OR(int inputA, int inputB){
  return (inputA || inputB);
}

int NAND(int inputA, int inputB){
  return !(inputA && inputB);
}

int NOR(int inputA, int inputB){
  return !(inputA || inputB);
}

int XOR(int inputA, int inputB){
  return (inputA ^ inputB);
}

int XNOR(int inputA, int inputB){
  return !(inputA ^ inputB);
}

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{  
  int linhas = 4;
  int colunas = 2;
  int possibilidades[4][2] = {
    {0,0},
    {0,1},
    {1,0},
    {1,1}
  };
  
  int i=0;
  while(i!=-1){
    int inputA = possibilidades[i][0];
    int inputB = possibilidades[i][1];

    digitalWrite(3, inputA);
    digitalWrite(2, inputB); 
    
    // É necessário retirar o comentário para realizar as operações lógicas
    int result = AND(inputA,inputB);
    //int result = OR(inputA,inputB);
    //int result = NAND(inputA,inputB);
    //int result = NOR(inputA,inputB);
    //int result = XOR(inputA,inputB);
    //int result = XNOR(inputA,inputB);
    
    // Exibe o resultado
    digitalWrite(1, result);

    delay(2000);
    
    if(i > linhas)
      i=-1;
    i++;
  }
  
 //Foi usando o https://www.arduino.cc/reference/en/language/structure/boolean-operators/logicaland/ para realizar as operações booleanas

}