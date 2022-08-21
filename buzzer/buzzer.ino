#define DO 256 //4옥타브 기준의 피아노 음계 주파수 선언
#define RE 288
#define MI 320
#define FA 341
#define SO 384
#define LA 427
#define TI 480

int buzzerPin = 2;
int music[] = {SO,SO,LA,LA,SO,SO,MI,SO,SO,MI,MI,RE,SO,SO,LA,LA,SO,SO,MI,SO,MI,RE,MI,DO};

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sizeof(music) / sizeof(int); i++)
  {
    tone(buzzerPin, music[i] * 2, 100);
    delay(300);
  }
}
