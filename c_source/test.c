#include <stdio.h>
#include <string.h>

#define BASE 65535
#define NEW 4294967295
#define ABC 2147483648
#define _GUARD_H 1
typedef unsigned int uint32;
typedef unsigned short int uint16;
typedef unsigned char uint8;
struct {
		uint32 First4Bytes;
		uint16 Next2Bytes;
		uint8   Next1Bytes;
		uint8    Padding1Bytes;
   } strA;

  struct {
		uint32 First4Bytes;
		uint32 Padding4Bytes;
   } strB;

 struct {
		uint32   First4Bytes;
		uint16   Next15Bits: 15;
		uint16   Next7BIts  :   7;
		uint16   Padding10Bits: 10;
   } strC;
 struct {
		uint32   First4Bytes;
		uint32   Next4Bytes;
   } strD;
	
void GetVal(unsigned char *p)
{
	* p = 200;
}

#define SUM(A,B) (A) + (B)
unsigned char Sum_up(unsigned char a, unsigned char b)
{
	return (a+b);
}
	
void main(void)
{
	FILE *fp = fopen ("anyfile.txt","r");
	(void) fprintf (fp, "What happen?");
	(void) fclose (fp);
	unsigned char x = 100;
	unsigned char y = SUM(5,10);
	unsigned char z = Sum_up(10,20);
	
	x+1;
	printf(" x= %d\r\n",x);
	GetVal(&x);
	printf(" x= %d\r\n",x);
	printf(" y= %d\r\n",y);
	printf(" z= %d\r\n",z);
	
	printf(" Test Git Hub 0 \r\n");
	printf(" Test Git Hub 678 \r\n");
	printf(" Test Git Hub 2 \r\n");
	printf(" Test Git Hub 3 Baobao_1stbr \r\n");
	
	
}
	
	
