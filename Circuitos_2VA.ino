#define sA 3
#define sB 2
#define sC 4
#define sD 5
#define sE 6
#define sF 7
#define sG 8
#define botaoA A0
#define botaoB A1
#define botaoC A2
#define botaoD A3

void setup()
{
	pinMode(sA, OUTPUT); 
	pinMode(sB, OUTPUT);  
	pinMode(sC, OUTPUT);  
	pinMode(sD, OUTPUT); 
	pinMode(sE, OUTPUT);  
	pinMode(sF, OUTPUT); 
	pinMode(sG, OUTPUT); 
    pinMode(botaoA, INPUT);
  	pinMode(botaoB, INPUT);
 	pinMode(botaoC, INPUT);
  	pinMode(botaoD, INPUT);
}

void loop()
{
	bool A = digitalRead(botaoA); 
  	bool B = digitalRead(botaoB); 
  	bool C = digitalRead(botaoC); 
  	bool D = digitalRead(botaoD); 
  
  acendeA(A, B, C, D);
  acendeB(A, B, C, D);
  acendeC(A, B, C, D);
  acendeD(A, B, C, D);
  acendeE(A, B, C, D);
  acendeF(A, B, C, D);
  acendeG(A, B, C, D);

}

void acendeA(int A, int B, int C, int D){
  bool liga = (B&&C) || (A&&!C&&!D) || (!B&&!D) || (!A&&B&&D) || (!A&&C&&D) || (A&&!B&&!C);
  digitalWrite(sA, liga);
}
void acendeB(int A, int B, int C, int D){
  bool liga = (!A&&!B) || (!A&&!C&&!D) || (A&&!C&&D) || (!A&&C&&D) || (!B&&!D);
  digitalWrite(sB, liga);
}
void acendeC(int A, int B, int C, int D){
  bool liga = (!A&&!C) || (A&&!B) || (!A&&C&&D) || (A&&!C&&D) || (!A&&B&&C);
  digitalWrite(sC, liga);
}
void acendeD(int A, int B, int C, int D){
  bool liga = (A&&!C) || (!A&&!B&&!D) || (!A&&!B&&C) || (A&&C&&!D) || (A&&!B&&D) || (B&&!C&&D);
  digitalWrite(sD, liga);
}
void acendeE(int A, int B, int C, int D){
  bool liga = (!A&&!B&&!D) || (A&&C) || (A&&!B&&!D) || (A&&B&&!C) || (!A&&C&&!D);
  digitalWrite(sE, liga);
}
void acendeF(int A, int B, int C, int D){
  bool liga = (!C&&!D) || (!A&&B&&!C) || (B&&C&&!D) || (A&&!B&&D) || (A&&C);
  digitalWrite(sF, liga);
}
void acendeG(int A, int B, int C, int D){
  bool liga = (!A&&B&&!C) || (A&&!B) || (!A&&!B&&C) || (A&&D) || (C&&!D);
  digitalWrite(sG, liga);
}