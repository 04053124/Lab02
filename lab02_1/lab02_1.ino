const byte NUM=8;
const byte led[]={17,16,15,14,11,10,9,8};
const int delaytime=200;
int ii;
void setup()
{
 for(ii=0;ii<NUM;ii++)
{
 pinMode(led[ii],OUTPUT);
 digitalWrite(led[ii],LOW);
}
}
void loop()
{
 for(ii=0;ii<NUM;ii++) /* 從左邊第一個燈開始亮*/
{
 digitalWrite(led[ii],HIGH);
 delay(delaytime);
 digitalWrite(led[ii],LOW); /*暗*/
}
 for(ii=0;ii<NUM;ii++) /*設定全暗*/
{
 pinMode(led[ii],OUTPUT);
 digitalWrite(led[ii],LOW);
}
 delay(delaytime);

for(ii=NUM-1;ii>=0;ii--) /*從右邊第一個開始亮*/
{
 digitalWrite(led[ii],HIGH);
 delay(delaytime);
 digitalWrite(led[ii],LOW); /*亮完暗掉*/
}
for(ii=0;ii<NUM;ii++)
{
 pinMode(led[ii],OUTPUT);
 digitalWrite(led[ii],LOW);
}
delay(delaytime);
}
