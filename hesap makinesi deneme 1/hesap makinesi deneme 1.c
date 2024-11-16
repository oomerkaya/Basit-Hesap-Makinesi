#include <stdio.h>
int main()

{
	int secim;
	float sayi1, sayi2, toplam, fark, carpim, bolum;
	for(;;)
	{
		printf("\n\n*****Hesap Makinesi*****\n\n");
		printf("1. Toplama\n");
		printf("2. Cikarma\n");
		printf("3. Carpma\n");
		printf("4. Bolme\n");
		printf("Cikis icin '0' tusuna basiniz.\n");
		printf("Seciminiz: ");
		scanf_s("%d", &secim);
		if (secim == 0)
			break;
		switch (secim)	
		{

		case 1:
		{
			printf("1. Sayi: ");
			scanf_s("%f", &sayi1),
			printf("2. Sayi: ");
			scanf_s("%f", &sayi2);
			
			toplam = sayi1 + sayi2;
			printf("\nToplam: %.2f", toplam);
			break;
		}
		case 2:
		{
			printf("1. Sayi: ");
			scanf_s("%f", &sayi1),
			printf("2. Sayi: ");
			scanf_s("%f", &sayi2);

			fark = sayi1 - sayi2;
			printf("\nFark: %.2f", fark);
			break;
		}
		case 3:
		{
			printf("1. Sayi: ");
			scanf_s("%f", &sayi1),
			printf("2. Sayi: ");
			scanf_s("%f", &sayi2);

			carpim = sayi1 * sayi2;
			printf("\nCarpim: %.2f", carpim);
			break;
		}
		case 4:
		{
			printf("1. Sayi: ");
			scanf_s("%f", &sayi1),
				printf("2. Sayi: ");
			scanf_s("%f", &sayi2);

			bolum = sayi1 / sayi2;
			printf("\nBolum: %.2f", bolum);
			break;
		}
		default:
		{
			printf("\nHatali secim.");
		}
		}		
	}
}