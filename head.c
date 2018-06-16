#include <string.h> 
#include <stdio.h>

//вывод первых строк
//чтение из файла
//вывести заголовки файлов v
//information v


int hhelp(char *comp){
		if(strcmp(comp,"--help")==0){
				printf("Использование: head [КЛЮЧ]… [ФАЙЛ]…");
				printf("Печатает первые 10 строк каждого ФАЙЛА на стандартный вывод.\n");
				printf("Если задано несколько ФАЙЛОВ, сначала печатает заголовок с именем файла.\n");

				printf("Если ФАЙЛ не задан или задан как -, читает стандартный ввод.\n");

				  printf("Аргументы, обязательные для длинных ключей, обязательны и для коротких.\n");
				  printf("-c, --bytes=[-]K         напечатать первые K байт каждого файла;\n");
				  printf("                        если перед K стоит «-», напечатать все, кроме K\n");
				  printf("                       последних байт каждого файла\n");
				  printf("-n, --lines=[-]K         напечатать K строк каждого файла, а не первые 10;\n");
				  printf("                         если перед K стоит «-», напечатать все, кроме K\n");
				  printf("                         последних строк каждого файла\n");
				  printf("-q, --quiet, --silent    не печатать заголовки с именами файлов\n");
				  printf("-v, --verbose            всегда печатать заголовки с именами файлов\n");
				  printf(" --help     показать эту справку и выйти\n");
				  printf("--version  показать информацию о версии и выйти\n");
}
	else	
		printf("error\n");
		
		return 0;
	}

int version(char *comp){
			
		
return 0;		
}

int showWK(char *key, char *name[], int k, int f){
	char mass[80];
	int j=0,h=0, count=k+f;
	char *fname;
	
	for(int i=1; i<=count; i++){
		fname=name[i];
		printf("%s \n",fname);
			FILE *fp=fopen(fname, "r");

			if(fp==NULL){
				printf("Net fayla2\n");
				return 0;
			}
			else
				{
					printf("text\n");
					for(int i=0; i<10; i++){
					fscanf(fp, "%s", &mass[i]);
					printf("%s,", &mass[i]);
					}	
				}
				fclose(fp);
		}

return 0;
}

								
int out(int str, char *fname)
{
char mass[100];
FILE *fp=fopen(fname, "r");
		printf("==> %s <== %d\n", fname,str);
				
		if(str>10) str=10;	
				
		int tr=0;
		do{
					fgets(mass, 100, fp);
					printf("%s",mass);
					tr++;
		}while(tr<str);

return 0;								
}

int showK(char *key, char *name[], int k, int f){

	int i,h=0, count=k+f, str=0;
	char *fname;
	int ch, pre=EOF;

	
for(i=1; i<=f+1; i++){
		fname=name[i];
		
		FILE *fp=fopen(fname, "r");

		if(fp==NULL){ 
			printf("Net fayla \n"); 
		}else{

		if(!fp)
			printf(" *\n");
		else{
				int counter=0;
				while((ch=fgetc(fp))!=EOF){
					pre=ch;
					if(ch=='\n') ++counter;
				}
				
				if(pre==EOF)
					puts("fayl pust");
				else 
				if(pre!='\n'){
					++counter;
				}
				
				str=counter;
				printf("counter:%d \n", str);
			
			out(str, fname);
			}
			fclose(fp);
}
}

return 0;	
}

int main(int argc, char *argv[]){

	int i,j=0, k=0, f=0, g=argc-2;
	char *massK[100];
	char *massF[100];
	char *PmassK;
	
	for(i=1; i<argc; i++){
		if((strcmp(argv[i],"--verbose") ==0 ) ||(strcmp(argv[i],"--help") ==0 )|| (strcmp(argv[i],"--version") ==0 )||(strcmp(argv[i],"--quite") ==0 ) || (strcmp(argv[i],"--silent") ==0 )){
				k++;
				massK[i]=argv[i];
				printf("%d %s \n", i, massK[i]);
				PmassK=argv[i];
		}
		//else 
	}
	
	if(PmassK==NULL || massK[i]==NULL) PmassK="--verbose";
	
	
	for(i=1; i<argc; i++){
		if((strcmp(argv[i],"--verbose") ==0 ) ||(strcmp(argv[i],"--help") ==0 )|| (strcmp(argv[i],"--version") ==0 )||(strcmp(argv[i],"--quite") ==0 ) || (strcmp(argv[i],"--silent") ==0 )){
		}else{
			f++;
			massF[i]=argv[i];
			printf("%d) %s \n", i, massF[i]);
			}
	}
			
	printf("k=%d f=%d %d\n", k, f, argc);//count
	printf("PmassK=%s\n", PmassK);


	/*if(massF){
		PmassK="--verbose";
		showK(PmassK, massF, k, f);
	}else */
	if((strcmp(PmassK,"--verbose") ==0 )){
		showK(PmassK, massF, k, f);
		
	}else if((strcmp(PmassK,"--silent") ==0 )){
		showWK(PmassK, massF, k, f);
		
	}else if((strcmp(PmassK,"--help") ==0 )){
		hhelp(PmassK);
		
	}else if((strcmp(PmassK,"--version") ==0 )){
		version(PmassK);	
	}else {
		printf("err");
	}


return 0;	
}
