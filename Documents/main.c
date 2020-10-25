#include <stdio.h>
float function(float x, float z)
{
  float y;
  y=x+z;
  return(y);
  printf (y);
}
 float function(float x, float z)
{
  float y;
  y=x*z;
  return(y);
  printf (y);
} 
 float function(float x, float z)
{
  float y;
  y=x-z;
  return(y);
  printf (y);
} 
 float function(float x, float z)
{
  float y;
  y=x/z;
  return(y);
  printf (y);
}
//следующий кусок кода был гордо позаимствован у Константина т.к. я так и не смог самостоятельно синженерить ничего нормального вследствие низкого уровня знаний си 
//также в этом коммите я поправил все опечатки которые я проглядел в коде ранее 
void test()
{
	int a, b, c;
	cout << "~Testing addition~\n>>";
	scanf("%d + %d = %d", &a, &b, &c);
	if(addition(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing subtraction~\n>>";
	scanf("%d - %d = %d", &a, &b, &c);
	if(subtraction(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing multiplication~\n>>";
	scanf("%d * %d = %d", &a, &b, &c);
	if(multiplication(a,b) == c) cout << "Successful!\n\n";
	
	cout << "~Testing division~\n>>";
	scanf("%d / %d = %d", &a, &b, &c);
	if(division(a,b) == c) cout << "Successful!\n\n";

} 
int main () {

printf ("Hello, world!\n")

	return 0
}

