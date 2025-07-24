#include <LedControl.h> 
String message ="welcome"; 
const int numDevices = 4; 
const long scrollDelay = 60; 
unsigned long bufferLong [14] = {0}; 
int initial = 0; 
LedControl lc=LedControl(11,13,10,numDevices); 
const unsigned char initialText[] PROGMEM ={"Open App and send text "}; 
const unsigned char scrollText0[] PROGMEM ={" "}; 
const unsigned char scrollText1[] PROGMEM ={"!"}; 
const unsigned char scrollText2[] PROGMEM ={"''"}; 
const unsigned char scrollText3[] PROGMEM ={"#"}; 
const unsigned char scrollText4[] PROGMEM ={"$"}; 
const unsigned char scrollText5[] PROGMEM ={"%"}; 
const unsigned char scrollText6[] PROGMEM ={"&"}; 
const unsigned char scrollText7[] PROGMEM ={"'"}; 
const unsigned char scrollText8[] PROGMEM ={"("}; 
const unsigned char scrollText9[] PROGMEM ={")"}; 
const unsigned char scrollText10[] PROGMEM ={"*"}; 
const unsigned char scrollText11[] PROGMEM ={"+"}; 
const unsigned char scrollText12[] PROGMEM ={","}; 
const unsigned char scrollText13[] PROGMEM ={"-"}; 
const unsigned char scrollText14[] PROGMEM ={"."}; 
const unsigned char scrollText15[] PROGMEM ={"/"}; 
const unsigned char scrollText16[] PROGMEM ={"0"}; 
const unsigned char scrollText17[] PROGMEM ={"1"}; 
const unsigned char scrollText18[] PROGMEM ={"2"}; 
const unsigned char scrollText19[] PROGMEM ={"3"}; 
const unsigned char scrollText20[] PROGMEM ={"4"}; 
const unsigned char scrollText21[] PROGMEM ={"5"}; 
const unsigned char scrollText22[] PROGMEM ={"6"}; 
const unsigned char scrollText23[] PROGMEM ={"7"}; 
const unsigned char scrollText24[] PROGMEM ={"8"}; 
const unsigned char scrollText25[] PROGMEM ={"9"}; 
const unsigned char scrollText26[] PROGMEM ={":"}; 
const unsigned char scrollText27[] PROGMEM ={"<"}; 
const unsigned char scrollText28[] PROGMEM ={"="}; 
const unsigned char scrollText29[] PROGMEM ={">"}; 
const unsigned char scrollText30[] PROGMEM ={"?"}; 
const unsigned char scrollText31[] PROGMEM ={"@"}; 
const unsigned char scrollText32[] PROGMEM ={"A"}; 
const unsigned char scrollText33[] PROGMEM ={"B"}; 
const unsigned char scrollText34[] PROGMEM ={"C"}; 
const unsigned char scrollText35[] PROGMEM ={"D"}; 
const unsigned char scrollText36[] PROGMEM ={"E"}; 
const unsigned char scrollText37[] PROGMEM ={"F"}; 
const unsigned char scrollText38[] PROGMEM ={"G"}; 
const unsigned char scrollText39[] PROGMEM ={"H"}; 
const unsigned char scrollText40[] PROGMEM ={"I"}; 
const unsigned char scrollText41[] PROGMEM ={"J"}; 
const unsigned char scrollText42[] PROGMEM ={"K"}; 
const unsigned char scrollText43[] PROGMEM ={"L"}; 
const unsigned char scrollText44[] PROGMEM ={"M"}; 
const unsigned char scrollText45[] PROGMEM ={"N"}; 
const unsigned char scrollText46[] PROGMEM ={"O"}; 
const unsigned char scrollText47[] PROGMEM ={"P"}; 
const unsigned char scrollText48[] PROGMEM ={"Q"}; 
const unsigned char scrollText49[] PROGMEM ={"R"}; 
const unsigned char scrollText50[] PROGMEM ={"S"}; 
const unsigned char scrollText51[] PROGMEM ={"T"}; 
const unsigned char scrollText52[] PROGMEM ={"U"}; 
const unsigned char scrollText53[] PROGMEM ={"V"}; 
const unsigned char scrollText54[] PROGMEM ={"W"}; 
const unsigned char scrollText55[] PROGMEM ={"X"}; 
const unsigned char scrollText56[] PROGMEM ={"Y"}; 
const unsigned char scrollText57[] PROGMEM ={"Z"}; 
const unsigned char scrollText58[] PROGMEM ={"["}; 
const unsigned char scrollText59[] PROGMEM ={"]"}; 
const unsigned char scrollText60[] PROGMEM ={"^"}; 
const unsigned char scrollText61[] PROGMEM ={"_"}; 
const unsigned char scrollText62[] PROGMEM ={" "}; 
const unsigned char scrollText63[] PROGMEM ={"a"}; 
const unsigned char scrollText64[] PROGMEM ={"b"}; 
const unsigned char scrollText65[] PROGMEM ={"c"}; 
const unsigned char scrollText66[] PROGMEM ={"d"}; 
const unsigned char scrollText67[] PROGMEM ={"e"}; 
const unsigned char scrollText68[] PROGMEM ={"f"}; 
const unsigned char scrollText69[] PROGMEM ={"g"}; 
const unsigned char scrollText70[] PROGMEM ={"h"}; 
const unsigned char scrollText71[] PROGMEM ={"i"}; 
const unsigned char scrollText72[] PROGMEM ={"j"}; 
const unsigned char scrollText73[] PROGMEM ={"k"}; 
const unsigned char scrollText74[] PROGMEM ={"l"}; 
const unsigned char scrollText75[] PROGMEM ={"m"}; 
const unsigned char scrollText76[] PROGMEM ={"n"}; 
const unsigned char scrollText77[] PROGMEM ={"o"}; 
const unsigned char scrollText78[] PROGMEM ={"p"}; 
const unsigned char scrollText79[] PROGMEM ={"q"}; 
const unsigned char scrollText80[] PROGMEM ={"r"}; 
const unsigned char scrollText81[] PROGMEM ={"s"}; 
const unsigned char scrollText82[] PROGMEM ={"t"}; 
const unsigned char scrollText83[] PROGMEM ={"u"}; 
const unsigned char scrollText84[] PROGMEM ={"v"}; 
const unsigned char scrollText85[] PROGMEM ={"w"}; 
const unsigned char scrollText86[] PROGMEM ={"x"}; 
const unsigned char scrollText87[] PROGMEM ={"y"}; 
const unsigned char scrollText88[] PROGMEM ={"z"}; 
const unsigned char scrollText89[] PROGMEM ={"{"}; 
const unsigned char scrollText90[] PROGMEM ={"|"}; 
const unsigned char scrollText91[] PROGMEM ={"}"}; 
const unsigned char scrollText92[] PROGMEM ={"~"}; 
void setup(){ 
Serial.begin(9600); 
for (int x=0; x<numDevices; x++){ 
lc.shutdown(x,false); 
lc.setIntensity(x,8); 
lc.clearDisplay(x); 
} 
} 
void loop(){ 
if(initial==0) 
{ 
} 
scrollMessage(initialText); 
while(Serial.available() > 0)  
{ 
} 
message = Serial.readString(); //Store the bluetooth received text 
initial=1; 
for (int i=0; i < message.length(); i++) 
{ 
if (message[i] == ' ') 
{ 
scrollMessage(scrollText0); 
} 
if (message[i] == '!') 
{ 
scrollMessage(scrollText1); 
} 
if (message[i] == '"') 
{ 
scrollMessage(scrollText2); 
}if (message[i] == '#') 
{scrollMessage(scrollText3); 
} 
if (message[i] == '&') 
{scrollMessage(scrollText4); 
} 
if (message[i] == '%') 
{ 
scrollMessage(scrollText5); 
} 
if (message[i] == '&') 
{ 
scrollMessage(scrollText5); 
} 
if (message[i] == '(') 
{ 
scrollMessage(scrollText8); 
} 
if (message[i] == ')') 
{ 
scrollMessage(scrollText9); 
} 
if (message[i] == '*') 
{ 
scrollMessage(scrollText10); 
} 
if (message[i] == '+') 
{ 
scrollMessage(scrollText11); 
} 
if (message[i] == ',') 
{ 
scrollMessage(scrollText12); 
} 
if (message[i] == '-') 
{ 
scrollMessage(scrollText13); 
} 
if (message[i] == '.') 
{ 
scrollMessage(scrollText14); 
} 
if (message[i] == '/') 
{ 
scrollMessage(scrollText15); 
} 
if (message[i] == '0') 
{ 
scrollMessage(scrollText16); 
} 
if (message[i] == '1') 
{ 
scrollMessage(scrollText17); 
} 
if (message[i] == '2') 
{ 
scrollMessage(scrollText18); 
} 
if (message[i] == '3') 
{ 
scrollMessage(scrollText19); 
} 
if (message[i] == '4') 
{ 
scrollMessage(scrollText20); 
} 
if (message[i] == '5') 
{ 
scrollMessage(scrollText21); 
} 
if (message[i] == '6') 
{ 
scrollMessage(scrollText22); 
} 
if (message[i] == '7') 
{ 
scrollMessage(scrollText23); 
} 
if (message[i] == '8') 
{ 
scrollMessage(scrollText24); 
} 
if (message[i] == '9') 
{ 
scrollMessage(scrollText25); 
} 
if (message[i] == ':') 
{ 
scrollMessage(scrollText26); 
} 
if (message[i] == '<') 
{ 
scrollMessage(scrollText27); 
} 
if (message[i] == '=') 
{ 
scrollMessage(scrollText28); 
} 
if (message[i] == '>') 
{ 
scrollMessage(scrollText29); 
} 
if (message[i] == '?') 
{ 
scrollMessage(scrollText30); 
} 
if (message[i] == '@') 
{ 
scrollMessage(scrollText31); 
} 
if (message[i] == 'A') 
{ 
scrollMessage(scrollText32); 
} 
if (message[i] == 'B') 
{ 
scrollMessage(scrollText33); 
} 
if (message[i] == 'C') 
{ 
scrollMessage(scrollText34); 
} 
if (message[i] == 'D') 
{ 
scrollMessage(scrollText35); 
} 
if (message[i] == 'E') 
{ 
scrollMessage(scrollText36); 
} 
if (message[i] == 'F') 
{ 
scrollMessage(scrollText37); 
 
} 
if (message[i] == 'G') 
{ 
scrollMessage(scrollText38); 
} 
if (message[i] == 'H') 
{ 
scrollMessage(scrollText39); 
} 
if (message[i] == 'I') 
{ 
scrollMessage(scrollText40); 
} if (message[i] == 'J') 
{ 
scrollMessage(scrollText41); 
} if (message[i] == 'K') 
{ 
scrollMessage(scrollText42); 
} if (message[i] == 'L') 
{ 
scrollMessage(scrollText43); 
} 
if (message[i] == 'M') 
{ 
scrollMessage(scrollText44); 
} 
if (message[i] == 'N') 
{ 
scrollMessage(scrollText45); 
} 
if (message[i] == 'O') 
{ 
scrollMessage(scrollText46); 
} 
if (message[i] == 'P') 
{ 
scrollMessage(scrollText47); 
} 
if (message[i] == 'Q') 
{ 
scrollMessage(scrollText48); 
} 
if (message[i] == 'R') 
{ 
scrollMessage(scrollText49); 
} 
if (message[i] == 'S') 
{ 
scrollMessage(scrollText50); 
} 
if (message[i] == 'T') 
{ 
scrollMessage(scrollText51); 
} 
if (message[i] == 'U') 
{ 
scrollMessage(scrollText52); 
} 
if (message[i] == 'V') 
{ 
scrollMessage(scrollText53); 
} 
if (message[i] == 'W') 
{ 
scrollMessage(scrollText54); 
} 
if (message[i] == 'X') 
{ 
scrollMessage(scrollText55); 
} 
if (message[i] == 'Y') 
{ 
scrollMessage(scrollText56); 
} 
if (message[i] == 'Z') 
{ 
scrollMessage(scrollText57); 
} 
if (message[i] == '[') 
{ 
scrollMessage(scrollText58); 
} 
if (message[i] == '[') 
{ 
scrollMessage(scrollText59); 
} 
if (message[i] == '^') 
{ 
scrollMessage(scrollText60); 
} 
if (message[i] == '_') 
{ 
scrollMessage(scrollText61); 
} 
if (message[i] == 'a') 
{ 
scrollMessage(scrollText63); 
} 
if (message[i] == 'b') 
{ 
scrollMessage(scrollText64); 
} 
if (message[i] == 'c') 
{ 
scrollMessage(scrollText65); 
} 
if (message[i] == 'd') 
{ 
scrollMessage(scrollText66); 
} 
if (message[i] == 'e') 
{ 
scrollMessage(scrollText67); 
} 
if (message[i] == 'f') 
{ 
scrollMessage(scrollText68); 
} 
if (message[i] == 'g') 
{ 
scrollMessage(scrollText69); 
} 
if (message[i] == 'h') 
{ 
scrollMessage(scrollText70); 
} 
if (message[i] == 'i') 
{ 
scrollMessage(scrollText71); 
} 
if (message[i] == 'j') 
{ 
scrollMessage(scrollText72); 
} 
if (message[i] == 'k') 
{ 
scrollMessage(scrollText73); 
} 
if (message[i] == 'l') 
{ 
scrollMessage(scrollText74); 
} 
if (message[i] == 'm') 
{ 
scrollMessage(scrollText75); 
} 
if (message[i] == 'n') 
{ 
scrollMessage(scrollText76); 
} 
if (message[i] == 'o') 
{ 
scrollMessage(scrollText77); 
} 
if (message[i] == 'p') 
{ 
scrollMessage(scrollText78); 
} 
if (message[i] == 'q') 
{ 
scrollMessage(scrollText79); 
} 
if (message[i] == 'r') 
{ 
scrollMessage(scrollText80); 
} 
if (message[i] == 's') 
{ 
scrollMessage(scrollText81); 
} 
if (message[i] == 't') 
{ 
scrollMessage(scrollText82); 
} 
if (message[i] == 'u') 
{ 
scrollMessage(scrollText83); 
} 
if (message[i] == 'v') 
{ 
scrollMessage(scrollText84); 
} 
if (message[i] == 'w') 
{ 
scrollMessage(scrollText85); 
} 
if (message[i] == 'x') 
{ 
scrollMessage(scrollText86); 
} 
if (message[i] == 'y') 
{ 
scrollMessage(scrollText87); 
} 
if (message[i] == 'z') 
{ 
scrollMessage(scrollText88); 
} 
if (message[i] == '{') 
{ 
scrollMessage(scrollText89); 
} 
if (message[i] == '|') 
{ 
scrollMessage(scrollText90); 
} 
if (message[i] == '}') 
{ 
scrollMessage(scrollText91); 
} 
if (message[i] == '~') 
{ 
scrollMessage(scrollText92); 
} 
} 
} 
const unsigned char font5x7 [] PROGMEM = { 
void scrollFont() { 
for (int counter=0x20;counter<0x80;counter++){ 
loadBufferLong(counter); 
delay(500); 
} 
} 
void scrollMessage(const unsigned char * messageString) { 
int counter = 0; 
int myChar=0; 
do { 
// read back a char 
myChar = pgm_read_byte_near(messageString + counter); 
if (myChar != 0){ 
loadBufferLong(myChar);  
} 
counter++; 
} 
while (myChar != 0); 
} 
void loadBufferLong(int ascii){ 
if (ascii >= 0x20 && ascii <=0x7f){ 
for (int a=0;a<7;a++){ 
unsigned long c = pgm_read_byte_near(font5x7 + ((ascii - 0x20) * 8) + a 
unsigned long x = bufferLong [a*2]; 
x = x | c; 
bufferLong [a*2] = x; 
} 
byte count = pgm_read_byte_near(font5x7 +((ascii - 0x20) * 8) + 7); 
for (byte x=0; x<count;x++){ 
rotateBufferLong(); 
printBufferLong(); 
delay(scrollDelay); 
} 
} 
void rotateBufferLong(){ 
for (int a=0;a<7;a++){ 
unsigned long x = bufferLong [a*2]; 
byte b = bitRead(x,31); 
x = x<<1; 
bufferLong [a*2] = x; 
x = bufferLong [a*2+1]; 
x = x<<1; 
bitWrite(x,0,b); 
bufferLong [a*2+1] = x; 
} 
} 
void printBufferLong(){ 
for (int a=0;a<7;a++){ 
unsigned long x = bufferLong [a*2+1]; 
byte y = x; 
lc.setRow(3,a,y); 
x = bufferLong [a*2]; 
y = (x>>24); 
lc.setRow(2,a,y); 
y = (x>>16); 
lc.setRow(1,a,y); 
y = (x>>8); 
lc.setRow(0,a,y); 
} 
} 
