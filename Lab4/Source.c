#include <stdio.h>
#include <stdlib.h>

typedef struct ogrenci {
	char* ad;
	char* soyad;
	long long no;
	long long tel;
	char* email;
}ogrenci;

int main()
{
	while (1)
	{
		system("CLS");
		int secim,listmenu=1,aramenu=1;
		printf("Ogrenci Islem Menusu\n----------------------------");
		printf("\n1-) Yeni Ogrenci Kaydi Ekle\n2-) Kayitlilari Listele\n3-) Ogrenci Ara\n4-) Cikis\n\nSecim:");
		scanf_s("%d", &secim);
		switch (secim)
		{
		case 1:
			system("CLS");
			//yenikayit();
			break;
		case 2:
			while (listmenu != 0) 
			{
				system("CLS");
				int sirasecim;
				printf("1-) Isme gore sirala\n2-) No ya gore sirala\n3-) Ust menuye don\n\n");
				printf("Lutfen istediginiz islemi secin:");
				scanf_s("%d", &sirasecim);
				switch (sirasecim)
				{
				case 1:
					system("CLS");
					//ismeg�re();
					break;
				case 2:
					system("CLS");
					//noyag�re();
					break;
				case 3:
					system("CLS");
					listmenu = 0;
					break;
				default:
					printf("Lutfen menude belirtilen islem numaralarindan secin !");
					getchar();
					break;
				}
			}
			break;
		case 3:
			while (aramenu != 0)
			{	
				int arasecim;
				system("CLS");
				printf("1-) Isme gore arama\n2-) No ya gore arama\n3-) Ust menuye don\n\n");
				printf("Lutfen istediginiz islemi secin:");
				scanf_s("%d", &arasecim);
				switch (arasecim)
				{
				case 1:
					system("CLS");
					//isimle();
					break;
				case 2:
					system("CLS");
					//noile();
					break;
				case 3:
					system("CLS");
					aramenu = 0;
					break;
				default:
					printf("Lutfen menude belirtilen islem numaralar�ndan secin !");
					getchar();
					break;
				}
			}
			break;
		case 4:
			exit(EXIT_SUCCESS);
		default:
			printf("Lutfen menudeki numaralardan secin ! (Devam etmek icin herhangi bir tusa basin..)");
			getchar();
			break;
		}
	}
	return 0;
}

/*
1-) Yeni ��renci Ekle  f1
2-) ��renci Ara
	a-)�sme g�re f2
	b-)No ya g�re  f3
	c-)��k��
3-) ��rencileri S�rala
	a-)�sme g�re  f4
	b-)No ya g�re  f5
	c-)��k��
4-)��k��
*/