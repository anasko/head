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

int show(char *key, char *name){
	
	char mass[80];
	int i=0,h=0;
	FILE *fp=fopen(name, "r");
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
		printf("error3 \n");
	
return 0;	
}

int main(int argc, char *argv[]){

	int i=0, g=argc-2;
	
	printf("count files= %d \n",g);
	for(i; i<argc; i++){
		printf(" %d = %s \n", i, argv[i]);
	}


	hhelp(argv[1]);
	version(argv[1]);
	
	for(i=2; i<=g+1;i++)
	show(argv[1], argv[i]);//key, name of files
	
	
return 0;	
}
