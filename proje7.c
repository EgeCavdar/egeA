#include <stdio.h>
#include <stdlib.h>
int yas=0,dogum_gunu=0,tc_kimlik_no=0;
int x(int y) {
	
	int toplam = 0;
	for(yas = 1; yas <= y; yas++)
	{
	    toplam = yas % 10 + 1;          /* dogum yýlýnýn son basamaðýna 1 ekleyip deðer dönmesini saðlýyor */
	}
	return toplam;
}
int a (int b){
	int toplam1 = 0;
	for(dogum_gunu  = 1; dogum_gunu <= b; dogum_gunu++){

	    toplam1 = dogum_gunu % 10 + 1; /* dogum gununun son basamaðýna 1 ekleyip deðer dönmesini saðlýyor */
	}
	return toplam1;
}
int m(int n) {
	int toplam2 = 0;
	for(tc_kimlik_no = 1; tc_kimlik_no <= n; tc_kimlik_no++){
	    toplam2 = tc_kimlik_no % 10 + 1; /* kimlik nonun 8. basamaðýna 1 ekleyip deðer dönmesini saðlýyor */
	}
	return toplam2;
}
int main()
{

int exit=0;
int igne=0;
int randevu=0;
int sayi,sayi1,sayi2,sayi3=0;
int asi [3] = {5,11,17};
int y;
int b;
int n,i,k;  

while(1)
{
FILE *dosya;

	char kelime[100];

	int c=0;
	
	dosya=fopen("proje.txt","r");
	
	if(dosya==NULL){
		printf("!!!DOSYA BULUNAMADI!!!\n");
		break;
}		
 	else 
		{
			do
			{
				c=fscanf(dosya," %s",kelime);//karakter okuma
				printf("%s ",kelime);// ekrana yazma
			}
			while(c!=EOF);
		}
	fclose(dosya);

printf("\nSistemden cikis yapmak icin 0(sifir), devam etmek icin herhangi bir rakami tuslayiniz \n");
	scanf("%d",&exit);
	if(exit==0){
 	break;
 }
else{

}
char isim[20];
    printf("\nAdinizi giriniz:\n");
    scanf("%s",isim);

	printf ("%s kimlik numaranizin ilk 8(sekiz) basamagini giriniz : \n",isim); // 8 basamak almamýn sebebi herhangi int deðerinde en fazla 8 basamakta saðlýklý iþlem yapýlabiliyor olmasý 
	scanf("%d",&n);
int sonra = m(n);
if(n>10000000 && n<99999999 ){
	printf("%s dogum yilinizi giriniz :\n",isim); 
	scanf("%d",&y);	}
else{
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
		
int gun = x(y);
if(y>1881 && y<2023 ){
	printf ("%s dogum gununuzu giriniz : \n",isim);
	scanf("%d",&b);}
else{
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}

int takvim = a(b);
 if(b<=31){
 	printf ("%s kronik hastaliginiz var  ise 1'i (bir) alerjiniz varsa 0'i (sifir) tuslayiniz\n",isim);
	scanf("%d",&randevu);}
else{	
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
if(randevu==1){
	printf("%s hastalik turunu giriniz Secenekler: kalp icin 1'i (bir) solunum icin 0'i (sifir) tuslayiniz''\n",isim);
	scanf("%d",&sayi);}
else if(randevu>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
if(sayi<=1 && randevu==1){
	printf("%s doktor tarafindan antibiyotik onerisi var mi Var ise 1'i (bir) yoksa 0'i (sifir) tuslayiniz\n",isim);
	scanf("%d",&sayi1);}
else if(sayi>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
		
if(sayi1==1 && sayi==1) {
 	printf("%s kalp1 ilaci ve antibiyotik yazilmistir, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n\n",isim , takvim); 
continue;
}
else if(sayi1>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}

if (sayi==1 && sayi1==0){
	printf("%s kalp1 ilaci yazilmistir, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n",isim, takvim);
continue;
}
else if(sayi1>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
if (sayi==0 && sayi1==1) {
	printf("%s solunum1 ilaci ve antibiyotik yazilmistir, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n",isim , gun);
	continue;
}
else if(sayi1>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
if (randevu==1 && sayi==0 && sayi1==0){
	printf("%s solunum1 ilaci yazilmistir, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n",isim , gun);
continue;
}
else if(sayi1>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
if(randevu==0){
 	printf("Polen alerjiniz varsa 0'i(sifir) Evcil hayvan alerjiniz varsa 1'i (bir) tuslayiniz  \n",isim);
 	scanf("%d",&sayi2);
}
if(sayi2>1){
	printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
	
else if(sayi2==1){
	printf("%d Ocak'ta asi olmalisiniz\n",asi[0]);
  	printf("%d Ocak'ta asi olmalisiniz\n",asi[1]);
	printf("%d Ocak'ta asi olmalisiniz, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n",asi[2] ,sonra );
continue;}

if (sayi2==0 && randevu==0 ){
  	printf("Ocak ayi ilac takviminiz\n");
int ilac[3][4] = { 1 ,4 ,7 ,10, 13, 16, 19, 22, 25, 28, 31};      	
	for (i = 0; i < 3; ++i) {
    for ( k = 0; k < 4; ++k)	
    printf("%2d ", ilac[i][k]);
    printf("\n");
} 
} 
if(sayi2==0 && randevu==0){
	printf("Igne takviminizi gormek icin 0'i (sifir) tuslayiniz\n");
    scanf("%d",&sayi3);}
    if(sayi3>0){
		printf ("Yanlis tuslama,tekrar deneyiniz...\n");
	break;}
    
if(sayi3==0&&randevu==0&&sayi2==0){
	printf("Ocak ayi igne takviminiz\n");
}
    while(igne<31){
if(sayi2==0 && randevu==0  && igne%6 == 2){  
    printf("%d Ocak\n",igne);
}
    igne++;
}
if(sayi2==0&&randevu==0){
    printf("%s Ilac ve igne takviminiz yazilmistir, %d gun sonra hastaneye gitmelisiniz. Saglikli gunler\n",isim , gun);
break;}
}
return 0;
}
