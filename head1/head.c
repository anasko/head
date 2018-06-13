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
			
	if(strcmp(comp,"--version")==0){
		printf("version\n");
	}
	else	
		printf("error2\n");
		
return 0;		
}

int showWK(char *key, char *name){
	
	char mass[80];
	int i=0,h=0;
	FILE *fp=fopen(name, "r");

	//prosto vivodit' bez zagolovkov

	
return 0;	
}


int showK(char *key[], char *name[], int k, int f){
	char mass[80];
	int i,h=0, count=k+f;

	printf("\nFiles: \n");
	for(i=1; i<=f;i++){
		if(name[i]==" " || name[i]=="" || name[i]==NULL ){
			printf(" ");
		}else
			printf("%s \n", name[i]);
		}
	
	printf("\nKeys: \n");
	for(i=1; i<=k;i++){
		if((strcmp(key[i],"--verbose") ==0 ) || (strcmp(key[i],"--quite") ==0 ) || (strcmp(key[i],"--silent") ==0 )){
			printf("%s\n", key[i]);
		}
		else printf(" ");
		}

	/*
	FILE *fp=fopen(name, "r");
		//printf("\nsegment error\n");
	if((strcmp(key,"--verbose") ==0 ) || (strcmp(key,"-v") ==0)){
		printf(" ==> %s <==\n", name);
			if(!fp)
			printf("error\n");
		else
			{

			}

			fclose(fp);
	}

	else	
		printf("File does not exist or else \n");
	*/
return 0;	
}

int main(int argc, char *argv[]){

	int i,j=0, k=0, f=0, g=argc-2;
	char *massK[100];
	char *massF[100];
	
	
	/*printf("count files= %d \n",g);
	for(i; i<argc; i++){
		printf(" %d = %s \n", i, argv[i]);
	}*/
	
	/*for(i=1; i<argc; i++){//key
		if((strcmp(argv[i],"--verbose") ==0 ) || (strcmp(argv[i],"--quite") ==0 ) || (strcmp(argv[i],"--silent") ==0 )){
				k++;
				massK[i]=argv[i];
				printf("%d %s \n", i, massK[i]);
		/*hhelp(argv[1]);
		version(argv[1]); //switch
		}
		else {
			f++;
			massF[i]=argv[i];
			printf("%d) %s \n", i, massF[i]);
		}}*/
	

		/*for(i=1; i<argc; i++){
			if(argv[i]==" " || argv[i]=="" || argv[i]=="--verbose" || argv[i]==NULL ){
				printf(" *");
			}else{
				
				f++;
				for(int j=1; j<argc; j++){
					massF[j]=argv[i];
					printf("%d) %s \n", i, massF[j]);
				}
			}
		}*/
	
		for(i=1; i<argc; i++){
			if((strcmp(argv[i],"--verbose") ==0 ) || (strcmp(argv[i],"--quite") ==0 ) || (strcmp(argv[i],"--silent") ==0 )){
				k++;
				for(int j=1; j<=i; j++){
					massK[j]=argv[i];
					printf("%d %s \n", i, massK[j]);
				}
				/*hhelp(argv[1]);
				version(argv[1]); *///switch
			}
			else printf(" ");
		}

	
	printf("k=%d f=%d\n", k, f);//count
	
	//if(1){
		showK(massK, massF, k, f);
	/*}
	else{
		printf(" Empty keys ");
		//showWK(massK[i], massF[i]);// key files //standart output
	}*/
	
	/*for(i=2; i<=g+1;i++)
	show(argv[1], argv[i]);//key, name of files

	hhelp(argv[1]);
	version(argv[1]);*/

	
	
return 0;	
}
