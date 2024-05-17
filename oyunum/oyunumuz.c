#include<stdio.h>                     
#include<stdlib.h>       
#include <conio.h>
#include <math.h>
#include <time.h>

/*HAZIRLAYANLAR:MUHAMMED YUSUF TOSUN, Ýsmail Tosun.....*/


int main()
{
	char *tahta[12][12];//burada deðiþkenleri tanýmladýk
	char yon;
	int satir,sutun,i,can=3;
	int avcisatir=2,avcisutun=4;
    int elmaskonum,elmaskonum1,elmaskonum2,elmaskonum3,elmaskonum4;
    int elmassatir,elmassutun,elmassatir1,elmassutun1,elmassatir2,elmassutun2,elmassatir3,elmassutun3,elmassatir4,elmassutun4;
    int mhfzsatir,mhfzsutun,mhfzsatir1,mhfzsutun1,mhfzsatir2,mhfzsutun2,mhfzsatir3,mhfzsutun3,mhfzsatir4,mhfzsutun4;
   
	srand(time(NULL));//her çalýþtýrdýðýnda farklý sayý üretmesi için...ve elmas ve muhafýzlarýn rastgele konumu atýyoruz..
	elmassatir=1+rand()%10;
    elmassutun=1+rand()%10;
    
	elmassatir1=1+rand()%10;
    elmassutun1=1+rand()%10;
    
    elmassatir2=1+rand()%10;
    elmassutun2=1+rand()%10;
    
    elmassatir3=1+rand()%10;
    elmassutun3=1+rand()%10;
    
    elmassatir4=1+rand()%10;
    elmassutun4=1+rand()%10;
    
    mhfzsatir=elmassatir+rand()%2;
    mhfzsutun=elmassutun+rand()%2;
    mhfzsatir=elmassatir-rand()%2;
    mhfzsutun=elmassutun-rand()%2;
    
    mhfzsatir1=elmassatir1+rand()%2;
    mhfzsutun1=elmassutun1+rand()%2;
    mhfzsatir1=elmassatir1-rand()%2;
    mhfzsutun1=elmassutun1-rand()%2;
    
    mhfzsatir2=elmassatir2+rand()%2;
    mhfzsutun2=elmassutun2+rand()%2;
    mhfzsatir2=elmassatir2-rand()%2;
    mhfzsutun2=elmassutun2-rand()%2;
    
    mhfzsatir3=elmassatir3+rand()%2;
    mhfzsutun3=elmassutun3+rand()%2;
    mhfzsatir3=elmassatir3-rand()%2;
    mhfzsutun3=elmassutun3-rand()%2;
    
    mhfzsatir4=elmassatir4+rand()%2;
    mhfzsutun4=elmassutun4+rand()%2;
    mhfzsatir4=elmassatir4-rand()%2;
    mhfzsutun4=elmassutun4-rand()%2;
//while de birbirinin üst üste gelmemesini saðladýk
	while(avcisatir==mhfzsatir&&avcisutun==mhfzsutun||avcisatir==mhfzsatir1&&avcisutun==mhfzsutun1||avcisatir==mhfzsatir2&&avcisutun==mhfzsutun2||avcisatir==mhfzsatir3&&avcisutun==mhfzsutun3||avcisatir==mhfzsatir4&&avcisutun==mhfzsutun4||mhfzsutun1==elmassutun&&mhfzsatir1==elmassatir||mhfzsutun2==elmassutun&&mhfzsatir2==elmassatir||mhfzsutun2==elmassutun1&&mhfzsatir2==elmassatir1||mhfzsutun2==elmassutun2&&mhfzsatir2==elmassatir2||mhfzsutun3==elmassutun&&mhfzsatir3==elmassatir||mhfzsutun3==elmassutun1&&mhfzsatir3==elmassatir1||mhfzsutun3==elmassutun2&&mhfzsatir3==elmassatir2||mhfzsutun3==elmassutun3&&mhfzsatir3==elmassatir3||
	      avcisatir==elmassatir&&avcisutun==elmassutun||avcisatir==elmassatir1&&avcisatir==elmassutun1||avcisatir==elmassatir2&&avcisutun==elmassutun2||avcisatir==elmassatir3&&avcisatir==elmassutun3||avcisatir==elmassatir4&&avcisutun==elmassutun4||mhfzsutun4==elmassutun&&mhfzsatir4==elmassatir||mhfzsutun4==elmassutun1&&mhfzsatir4==elmassatir1||mhfzsutun4==elmassutun2&&mhfzsatir4==elmassatir2||mhfzsutun4==elmassutun3&&mhfzsatir4==elmassatir3||
		  mhfzsatir==elmassatir1&&mhfzsutun==elmassutun1||mhfzsatir==elmassatir2&&mhfzsutun==elmassutun2||mhfzsatir==elmassatir3&&mhfzsutun==elmassutun3||mhfzsatir==elmassatir4&&mhfzsutun==elmassutun4||mhfzsatir1==elmassatir2&&mhfzsutun1==elmassutun2||mhfzsatir1==elmassatir3&&mhfzsutun1==elmassutun3||mhfzsatir1==elmassatir4&&mhfzsutun1==elmassutun4||mhfzsatir2==elmassatir3&&mhfzsutun2==elmassutun3||mhfzsatir2==elmassatir4&&mhfzsutun2==elmassutun4||mhfzsatir3==elmassatir4&&mhfzsutun3==elmassutun4||
		  elmassatir==elmassatir1&&elmassutun==elmassutun1||elmassatir==elmassatir2&&elmassutun==elmassutun2||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir4&&elmassutun==elmassutun4||elmassatir1==elmassatir2&&elmassutun1==elmassutun2||elmassatir1==elmassatir3&&elmassutun1==elmassutun3||elmassatir1==elmassatir4&&elmassutun1==elmassutun4||elmassatir2==elmassatir3&&elmassutun2==elmassutun3||elmassatir2==elmassatir4&&elmassutun2==elmassutun4||elmassatir3==elmassatir4&&elmassutun3==elmassutun4||
		  mhfzsatir==elmassatir&&mhfzsutun==elmassutun||mhfzsatir1==elmassatir1&&mhfzsutun1==elmassutun1||mhfzsatir2==elmassatir2&&mhfzsutun2==elmassutun2||mhfzsatir3==elmassatir3&&mhfzsutun3==elmassutun3||mhfzsatir4==elmassatir4&&mhfzsutun4==elmassutun4||
		  mhfzsatir==0||mhfzsatir==12||mhfzsutun==0||mhfzsutun==12||mhfzsatir1==0||mhfzsatir1==12||mhfzsutun1==0||mhfzsutun1==12||mhfzsatir2==0||mhfzsatir2==12||mhfzsutun2==0||mhfzsutun2==12||mhfzsatir3==0||mhfzsatir3==12||mhfzsutun3==0||mhfzsutun3==12||mhfzsatir4==0||mhfzsatir4==12||mhfzsutun4==0||mhfzsutun4==12||
		  mhfzsatir==mhfzsatir1&&mhfzsutun==mhfzsutun1||mhfzsatir==mhfzsatir2&&mhfzsutun==mhfzsutun2||mhfzsatir==mhfzsatir3&&mhfzsutun==mhfzsutun3||mhfzsatir==mhfzsatir4&&mhfzsutun==mhfzsutun4||mhfzsatir1==mhfzsatir2&&mhfzsutun1==mhfzsutun2||mhfzsatir1==mhfzsatir3&&mhfzsutun1==mhfzsutun3||mhfzsatir1==mhfzsatir4&&mhfzsutun1==mhfzsutun4||mhfzsatir2==mhfzsatir3&&mhfzsutun2==mhfzsutun3||mhfzsatir2==mhfzsatir4&&mhfzsutun2==mhfzsutun4||mhfzsatir3==mhfzsatir4&&mhfzsutun3==mhfzsutun4)
	{
		elmassatir=1+rand()%10;
        elmassutun=1+rand()%10;
    
        elmassatir1=1+rand()%10;
        elmassutun1=1+rand()%10;

        elmassatir2=1+rand()%10;
        elmassutun2=1+rand()%10;
    
        elmassatir3=1+rand()%10;
        elmassutun3=1+rand()%10;
    
        elmassatir4=1+rand()%10;
        elmassutun4=1+rand()%10;
    
		mhfzsatir=elmassatir+rand()%2;
        mhfzsutun=elmassutun+rand()%2;
        mhfzsatir=elmassatir-rand()%2;
        mhfzsutun=elmassutun-rand()%2;

		mhfzsatir1=elmassatir1+rand()%2;
        mhfzsutun1=elmassutun1+rand()%2;
        mhfzsatir1=elmassatir1-rand()%2;
        mhfzsutun1=elmassutun1-rand()%2;

		mhfzsatir2=elmassatir2+rand()%2;
        mhfzsutun2=elmassutun2+rand()%2;
        mhfzsatir2=elmassatir2-rand()%2;
        mhfzsutun2=elmassutun2-rand()%2;  

		mhfzsatir3=elmassatir3+rand()%2;
        mhfzsutun3=elmassutun3+rand()%2;
        mhfzsatir3=elmassatir3-rand()%2;
        mhfzsutun3=elmassutun3-rand()%2;

		mhfzsatir4=elmassatir4+rand()%2;
        mhfzsutun4=elmassutun4+rand()%2;
        mhfzsatir4=elmassatir4-rand()%2;
        mhfzsutun4=elmassutun4-rand()%2;
   }
   
    if(avcisatir==mhfzsatir&&avcisutun==mhfzsutun||avcisatir==mhfzsatir1&&avcisutun==mhfzsutun1||avcisatir==mhfzsatir2&&avcisutun==mhfzsutun2||avcisatir==mhfzsatir3&&avcisutun==mhfzsutun3||avcisatir==mhfzsatir4&&avcisutun==mhfzsutun4||mhfzsutun1==elmassutun&&mhfzsatir1==elmassatir||mhfzsutun2==elmassutun&&mhfzsatir2==elmassatir||mhfzsutun2==elmassutun1&&mhfzsatir2==elmassatir1||mhfzsutun2==elmassutun2&&mhfzsatir2==elmassatir2||mhfzsutun3==elmassutun&&mhfzsatir3==elmassatir||mhfzsutun3==elmassutun1&&mhfzsatir3==elmassatir1||mhfzsutun3==elmassutun2&&mhfzsatir3==elmassatir2||mhfzsutun3==elmassutun3&&mhfzsatir3==elmassatir3||
	      avcisatir==elmassatir&&avcisutun==elmassutun||avcisatir==elmassatir1&&avcisatir==elmassutun1||avcisatir==elmassatir2&&avcisutun==elmassutun2||avcisatir==elmassatir3&&avcisatir==elmassutun3||avcisatir==elmassatir4&&avcisutun==elmassutun4||mhfzsutun4==elmassutun&&mhfzsatir4==elmassatir||mhfzsutun4==elmassutun1&&mhfzsatir4==elmassatir1||mhfzsutun4==elmassutun2&&mhfzsatir4==elmassatir2||mhfzsutun4==elmassutun3&&mhfzsatir4==elmassatir3||
		  mhfzsatir==elmassatir1&&mhfzsutun==elmassutun1||mhfzsatir==elmassatir2&&mhfzsutun==elmassutun2||mhfzsatir==elmassatir3&&mhfzsutun==elmassutun3||mhfzsatir==elmassatir4&&mhfzsutun==elmassutun4||mhfzsatir1==elmassatir2&&mhfzsutun1==elmassutun2||mhfzsatir1==elmassatir3&&mhfzsutun1==elmassutun3||mhfzsatir1==elmassatir4&&mhfzsutun1==elmassutun4||mhfzsatir2==elmassatir3&&mhfzsutun2==elmassutun3||mhfzsatir2==elmassatir4&&mhfzsutun2==elmassutun4||mhfzsatir3==elmassatir4&&mhfzsutun3==elmassutun4||
		  elmassatir==elmassatir1&&elmassutun==elmassutun1||elmassatir==elmassatir2&&elmassutun==elmassutun2||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir4&&elmassutun==elmassutun4||elmassatir1==elmassatir2&&elmassutun1==elmassutun2||elmassatir1==elmassatir3&&elmassutun1==elmassutun3||elmassatir1==elmassatir4&&elmassutun1==elmassutun4||elmassatir2==elmassatir3&&elmassutun2==elmassutun3||elmassatir2==elmassatir4&&elmassutun2==elmassutun4||elmassatir3==elmassatir4&&elmassutun3==elmassutun4||
		  mhfzsatir==elmassatir&&mhfzsutun==elmassutun||mhfzsatir1==elmassatir1&&mhfzsutun1==elmassutun1||mhfzsatir2==elmassatir2&&mhfzsutun2==elmassutun2||mhfzsatir3==elmassatir3&&mhfzsutun3==elmassutun3||mhfzsatir4==elmassatir4&&mhfzsutun4==elmassutun4||
		  mhfzsatir==0||mhfzsatir==12||mhfzsutun==0||mhfzsutun==12||mhfzsatir1==0||mhfzsatir1==12||mhfzsutun1==0||mhfzsutun1==12||mhfzsatir2==0||mhfzsatir2==12||mhfzsutun2==0||mhfzsutun2==12||mhfzsatir3==0||mhfzsatir3==12||mhfzsutun3==0||mhfzsutun3==12||mhfzsatir4==0||mhfzsatir4==12||mhfzsutun4==0||mhfzsutun4==12||
		  mhfzsatir==mhfzsatir1&&mhfzsutun==mhfzsutun1||mhfzsatir==mhfzsatir2&&mhfzsutun==mhfzsutun2||mhfzsatir==mhfzsatir3&&mhfzsutun==mhfzsutun3||mhfzsatir==mhfzsatir4&&mhfzsutun==mhfzsutun4||mhfzsatir1==mhfzsatir2&&mhfzsutun1==mhfzsutun2||mhfzsatir1==mhfzsatir3&&mhfzsutun1==mhfzsutun3||mhfzsatir1==mhfzsatir4&&mhfzsutun1==mhfzsutun4||mhfzsatir2==mhfzsatir3&&mhfzsutun2==mhfzsutun3||mhfzsatir2==mhfzsatir4&&mhfzsutun2==mhfzsutun4||mhfzsatir3==mhfzsatir4&&mhfzsutun3==mhfzsutun4)
	{
		printf("Kod yazilim Bug olustu.Lutfen tekrardan oyunu baslatin!!!!!");
	}

   
   //konumu atamasý
if(avcisatir==2||avcisutun==4)
	{ 
	  elmaskonum=abs(avcisatir-elmassatir)+abs(avcisutun-elmassutun);
	  elmaskonum1=abs(avcisatir-elmassatir1)+abs(avcisutun-elmassutun1);
	  elmaskonum2=abs(avcisatir-elmassatir2)+abs(avcisutun-elmassutun2);
	  elmaskonum3=abs(avcisatir-elmassatir3)+abs(avcisutun-elmassutun3);
	  elmaskonum4=abs(avcisatir-elmassatir4)+abs(avcisutun-elmassutun4);
	
      printf("\navcinin 1.elmasa konumu:%d\n",elmaskonum);	
	  printf("avcinin 2.elmasa konumu:%d\n",elmaskonum1);
	  printf("avcinin 3.elmasa konumu:%d\n",elmaskonum2);	
	  printf("avcinin 4.elmasa konumu:%d\n",elmaskonum3);
	  printf("avcinin 5.elmasa konumu:%d\n",elmaskonum4);
	  
	  printf("\nKalan Caniniz: %d\n",can);
}
   
for(;can>0;){//canýn bitme durumunda oyunun sonlanmasý

while(1){//tablomuzu gösterdik
	for(satir=0;satir<12;satir++)
	{
		for(sutun=0;sutun<12;sutun++)
		{
		    if(satir==0 || satir==11)
			{
			   tahta[satir][sutun]="-";
		    }
		    else if(sutun==0 || sutun==11)
			{
				tahta[satir][sutun]="|";
			}
			else
			{
			  tahta[satir][sutun]=".";
			  tahta[avcisatir][avcisutun]="A";
			}
			printf("%s",tahta[satir][sutun]);
	   }

	   printf("\n");  
	}

	yon=getch();//w,a,s,d kontrol etmek isteyenler için
	system("CLS");
	switch(yon)
	{
		case 'w':
		    avcisatir -= 1;
		break;
		case 'a':
			avcisutun -= 1;
		break;
		case 's':
		    avcisatir += 1;
		break;
		case 'd':
		    avcisutun += 1;
	    break;	
	    case 'W':
		    avcisatir -= 1;
		break;
		case 'A':
			avcisutun -= 1;
		break;
		case 'S':
		    avcisatir += 1;
		break;
		case 'D':
		    avcisutun += 1;
	    break;	
	}

	if(avcisatir==0||avcisatir==11||avcisutun==0||avcisutun==11)//avcinin duvardan çýkmama durumu
	{
		if(avcisatir==0){
			avcisatir=1;	
		}
		else if(avcisatir==11){
			avcisatir=10;	
		}
		else if(avcisutun==0){
			avcisutun=1;			
		}
		else if(avcisutun==11){
			avcisutun=10;			
		}
	}
	//muhafaza yakalanma durumu
    if(avcisatir==mhfzsatir&&avcisutun==mhfzsutun||avcisatir==mhfzsatir1&&avcisutun==mhfzsutun1||avcisatir==mhfzsatir2&&avcisutun==mhfzsutun2||avcisatir==mhfzsatir3&&avcisutun==mhfzsutun3||avcisatir==mhfzsatir4&&avcisutun==mhfzsutun4)
    {
    	printf("Muhafiza Yakalandiniz\n");
    	avcisatir=2;
    	avcisutun=4;
    	can--;
}
	if(can==0)
	{
		printf("\nCaniniz Kalmadi\n\nOyun Sona Erdi\n");
		return 0;
	}
   
	if(avcisatir<=2||avcisatir>=2||avcisutun>=4||avcisutun<=4)//elmas konumu belirleme
	{
	  if(elmassatir!=0&&elmassutun!=0){
	  elmaskonum=abs(avcisatir-elmassatir)+abs(avcisutun-elmassutun);
      printf("\navcinin 1.elmasa konumu:%d\n",elmaskonum);
}
if(elmassatir==0&&elmassutun==0){
	printf("\n1. Elmas bulundu!!!!");
}


if(elmassatir1!=0&&elmassutun1!=0){
	  elmaskonum1=abs(avcisatir-elmassatir1)+abs(avcisutun-elmassutun1);
      printf("\navcinin 2.elmasa konumu:%d\n",elmaskonum1);
}
if(elmassatir1==0&&elmassutun1==0){
	printf("\n2. Elmas bulundu!!!!");
}
if(elmassatir2!=0&&elmassutun2!=0){
	  elmaskonum2=abs(avcisatir-elmassatir2)+abs(avcisutun-elmassutun2);
      printf("\navcinin 3.elmasa konumu:%d\n",elmaskonum2);
}
if(elmassatir2==0&&elmassutun2==0){
	printf("\n3. Elmas bulundu!!!!");
}
if(elmassatir3!=0&&elmassutun3!=0){
	  elmaskonum3=abs(avcisatir-elmassatir3)+abs(avcisutun-elmassutun3);
      printf("\navcinin 4.elmasa konumu:%d\n",elmaskonum3);
}
if(elmassatir3==0&&elmassutun3==0){
	printf("\n4. Elmas bulundu!!!!");
}
if(elmassatir4!=0&&elmassutun4!=0){
	  elmaskonum4=abs(avcisatir-elmassatir4)+abs(avcisutun-elmassutun4);
      printf("\navcinin 5.elmasa konumu:%d\n",elmaskonum4);
}
if(elmassatir4==0&&elmassutun4==0){
	printf("\n5. Elmas bulundu!!!!");
}
  printf("\nKalan Caniniz: %d\n",can);
  if(elmassatir==0&&elmassutun==0&&elmassatir1==0&&elmassutun1==0&&elmassatir2==0&&elmassutun2==0&&elmassatir3==0&&elmassutun3==0&&elmassatir4==0&&elmassutun4==0)
  {
  	printf("BUTUN ELMASLARI TOPLADINIZ..****TEBRIKLER OYUNU KAZANDINIZ*****");
  	exit(0);
  }
}

//avcý elmasý yiyince elmasýn kaybolma durumu
		if(avcisatir==elmassatir&&avcisutun==elmassutun){
			printf("\nTebrikler 1.Elmasi buldunuz...\n\nDiger elmaslari aramaya DEVAM!!!!\n");
		elmassatir=0;
		elmassutun=0;
		mhfzsatir=0;
		mhfzsutun=0;
	    }
		else if(avcisatir==elmassatir1&&avcisutun==elmassutun1){
			printf("\nTebrikler 2.Elmasi buldunuz...\n\nDiger elmaslari aramaya DEVAM!!!!\n");
		elmassatir1=0;
		elmassutun1=0;
		mhfzsatir1=0;
		mhfzsutun1=0;
	    }
	    	else if(avcisatir==elmassatir2&&avcisutun==elmassutun2){
	    		printf("\nTebrikler 3.Elmasi buldunuz...\n\nDiger elmaslari aramaya DEVAM!!!!\n");
		elmassatir2=0;
		elmassutun2=0;
		mhfzsatir2=0;
		mhfzsutun2=0;
	    }
	    else if(avcisatir==elmassatir3&&avcisutun==elmassutun3){
	    	printf("\nTebrikler 4.Elmasi buldunuz...\n\nDiger elmaslari aramaya DEVAM!!!!\n");
		elmassatir3=0;
		elmassutun3=0;
		mhfzsatir3=0;
		mhfzsutun3=0;
	    }
	    else if(avcisatir==elmassatir4&&avcisutun==elmassutun4){
	    	printf("\nTebrikler 5.Elmasi buldunuz...\n\nDiger elmaslari aramaya DEVAM!!!!\n");
		elmassatir4=0;
		elmassutun4=0;
		mhfzsatir4=0;
		mhfzsutun4=0;
	    }
}
}
	return 0;
}
