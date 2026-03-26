const int altoVerde = 13;
const int altoGiallo = 12;
const int altoRosso = 11;

const int sinistraVerde = 10;
const int sinistraGiallo = 9;
const int sinistraRosso = 8;

const int destraVerde = 7;
const int destraGiallo = 6;
const int destraRosso = 5;

const int bassoVerde = 4;
const int bassoGiallo = 3;
const int bassoRosso = 2;

void setup()
{
  pinMode(altoVerde, OUTPUT);
  pinMode(altoGiallo, OUTPUT);
  pinMode(altoRosso, OUTPUT);

  pinMode(sinistraVerde, OUTPUT);
  pinMode(sinistraGiallo, OUTPUT);
  pinMode(sinistraRosso, OUTPUT);

  pinMode(destraVerde, OUTPUT);
  pinMode(destraGiallo, OUTPUT);
  pinMode(destraRosso, OUTPUT);

  pinMode(bassoVerde, OUTPUT);
  pinMode(bassoGiallo, OUTPUT);
  pinMode(bassoRosso, OUTPUT);
}

void impostaSemaforo(int verde, int giallo, int rosso, bool v, bool g, bool r)
{
  digitalWrite(verde, v);
  digitalWrite(giallo, g);
  digitalWrite(rosso, r);
}

void loop()
{
  impostaSemaforo(altoVerde, altoGiallo, altoRosso, HIGH, LOW, LOW);
  impostaSemaforo(bassoVerde, bassoGiallo, bassoRosso, HIGH, LOW, LOW);

  impostaSemaforo(sinistraVerde, sinistraGiallo, sinistraRosso, LOW, LOW, HIGH);
  impostaSemaforo(destraVerde, destraGiallo, destraRosso, LOW, LOW, HIGH);

  delay(3000);

  impostaSemaforo(altoVerde, altoGiallo, altoRosso, LOW, HIGH, LOW);
  impostaSemaforo(bassoVerde, bassoGiallo, bassoRosso, LOW, HIGH, LOW);

  delay(1000);

  impostaSemaforo(altoVerde, altoGiallo, altoRosso, LOW, LOW, HIGH);
  impostaSemaforo(bassoVerde, bassoGiallo, bassoRosso, LOW, LOW, HIGH);

  impostaSemaforo(sinistraVerde, sinistraGiallo, sinistraRosso, HIGH, LOW, LOW);
  impostaSemaforo(destraVerde, destraGiallo, destraRosso, HIGH, LOW, LOW);

  delay(3000);

  impostaSemaforo(sinistraVerde, sinistraGiallo, sinistraRosso, LOW, HIGH, LOW);
  impostaSemaforo(destraVerde, destraGiallo, destraRosso, LOW, HIGH, LOW);

  delay(1000);
}