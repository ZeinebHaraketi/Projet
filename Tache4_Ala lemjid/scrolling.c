#include "scrolling.h"

int scrolling(int z,int camera,int perso)
{

if (camera<=4000&&camera>=0)
	{
	printf("(%d)\n",perso );		
if(z==0&&perso>=800)
{
camera+=10;

printf("(%d))\n",camera );
}

if(z==1&&perso<=200)
{
camera-=10;


}
printf("(%d)\n",camera );
}
if (camera>4000)
{
	camera=4000;
}
if (camera<0)
{
	camera=0;
	//printf("(%d)\n",camera.x );
}
return camera ;
}
