int i;// 定义全局变量并初始化，当同名的时候，局部优先
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  i=451;
  Serial.println("i=");
  Serial.print("百位");
  Serial.println(i/100);
  Serial.print("十位");
  Serial.println(i/10%10);
  Serial.print("个位");
  Serial.println(i%10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
