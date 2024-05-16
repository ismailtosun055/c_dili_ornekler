#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int toplam_hesap(int a1){
	
	int icecekler,adet,toplam;
	icecekler=a1;
	
	switch(icecekler){
				case 1:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*5;
			        break;
			    case 2:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*14;
			        break;
			    case 3:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*11;
			        break;
			    case 4:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*12;
			        break;
			    case 5:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*17;
			        break;
					
		    }
	return(toplam);
}

int toplam_hesap1(int a1){
	
	int yiyecekler,adet,hesap,toplam;
	yiyecekler=a1;
	
	switch(yiyecekler){
				case 1:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*30;
			        break;
			    case 2:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*45;
			        break;
			    case 3:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*25;
			        break;
			    case 4:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*60;
			        break;
			    case 5:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*50;
			        break;
					
		    }
	return(toplam);
}

int toplam_hesap2(int a1){
	
	int meyveler,kilo,hesap,toplam;
	meyveler=a1;
	
	switch(meyveler){
				case 1:
					printf("Kac kilo alacaksiniz:");
			        scanf("%d",&kilo);
			        toplam=kilo*40;
			        break;
			    case 2:
					printf("Kac kilo alacaksiniz:");
			        scanf("%d",&kilo);
			        toplam=kilo*8;
			        break;
			    case 3:
					printf("Kac kilo alacaksiniz:");
			        scanf("%d",&kilo);
			        toplam=kilo*7;
			        break;
			    case 4:
					printf("Kac kilo alacaksiniz:");
			        scanf("%d",&kilo);
			        toplam=kilo*15;
			        break;
			    case 5:
					printf("Kac kilo alacaksiniz:");
			        scanf("%d",&kilo);
			        toplam=kilo*12;
			        break;
					
		    }
	return(toplam);
}

int toplam_hesap3(int a1){
	
	int evbakim,adet,hesap,toplam;
	evbakim=a1;
	
	switch(evbakim){
				case 1:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*45;
			        break;
			    case 2:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*65;
			        break;
			    case 3:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*40;
			        break;
			    case 4:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*50;
			        break;
			    case 5:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*55;
			        break;
					
		    }
	return(toplam);
}

int toplam_hesap4(int a1){
	
	int teknoloji,adet,hesap,toplam;
	teknoloji=a1;
	
	switch(teknoloji){
				case 1:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*200;
			        break;
			    case 2:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*10000;
			        break;
			    case 3:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*90;
			        break;
			    case 4:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*150;
			        break;
			    case 5:
					printf("Kac adet alacaksiniz:");
			        scanf("%d",&adet);
			        toplam=adet*180;
			        break;
		    }
	return(toplam);
}

int main(){
	char dizi_icecek[100]={"1.su=5tl\n2.kola=14tl\n3.ayran=11tl\n4.soguk cay=12tl\n5.soguk kahve=17tl"};
	char dizi_yiyecek[100]={"1.sandvic=30tl\n2.durum=45tl\n3.cig kofte=25tl\n4.pizza=60tl\n5.hamburger=50tl"};
	char dizi_meyve_sebze[100]={"1.muz=40tl\n2.kavun=8tl\n3.karpuz=7tl\n4.domates=15tl\n5.biber=12tl"};
	char dizi_ev_bakim[100]={"1.camasir tozu=45tl\n2.tuvalet kagýdý=65tl\n3.sabun=40tl\n4.oda kokusu=50tl\n5.deterjan=55tl"};
	char dizi_teknoloji[100]={"1.sarj aleti=200tl\n2.bilgisayar=10000tl\n3.kulaklik=90tl\n4.klavye=150tl\n5.hoparlor=180tl"};
	int i,a,b,kategori,adet,toplam,ucret,icecekler,hesap1=0,hesap2=0,hesap3=0,hesap4=0,hesap5=0;
	do{
	printf("Kategoriler:\n1.icecek\n2.yiyecek\n3.meyve&sebze\n4.ev bakim\n5.teknoloji aletleri\nNe almak isterdiniz.Sayilari yazmaniz yeterli:");
	scanf("%d",&kategori);
	switch(kategori)
	{
		case 1:
			printf("a)ICECEKLER BOLUMU;\n%s",dizi_icecek);
			printf("\nNe almak isterdiniz:");
			scanf("%d",&a);
			hesap1=toplam_hesap(a);
			break;
	    case 2:
	    	printf("b)YIYECEKLER BOLUMU;\n%s",dizi_yiyecek);
	    	printf("\nNe almak isterdiniz:");
			scanf("%d",&a);
			hesap2=toplam_hesap1(a);
			break;
		case 3:
			printf("c)MEYVE & SEBZE BOLUMU;\n%s",dizi_meyve_sebze);
			printf("\nNe almak isterdiniz:");
			scanf("%d",&a);
			hesap3=toplam_hesap2(a);
			break;
		case 4:
			printf("d)EV BAKÝM BOLUMU;\n%s",dizi_ev_bakim);
			printf("\nNe almak isterdiniz:");
			scanf("%d",&a);
			hesap4=toplam_hesap3(a);
			break;
		case 5:
			printf("e)TEKNOLOJI BOLUMU;\n%s",dizi_teknoloji);
			printf("\nNe almak isterdiniz:");
			scanf("%d",&a);
			hesap5=toplam_hesap4(a);
			break;
		default :
			printf("yanlis numarayi girdiniz!!!tekrar deneyin... :)");
    }
            printf("Hesabinizi mi yoksa Kategoriler kismina mi gecmek istersiniz?\n1.Hesap\n2.Kategoriler\nSayilari yazmaniz yeterli:");
            scanf("%d",&b);
    }while(b==2);
        printf("hesabiniz hesaplaniyor...\n");
        toplam=hesap1+hesap2+hesap3+hesap4+hesap5;
		printf("Borcunuz:%d tl'dir.Odeme miktari giriniz:",toplam);
		scanf("%d",&ucret);
		toplam=ucret-toplam;
	    printf("Para ustunuz:%d tl'dir\nIyi gunler..:=)",toplam);
	    return 0;
}
