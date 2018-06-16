ИМЯ      
head - вывести первые строки        
ОБЗОР      
head [ОПЦИЯ]... [ФАЙЛ]...        
ОПИСАНИЕ      
Печатает первые 10 строк каждого ФАЙЛА на стандартный вывод. Если задано несколько ФАЙЛОВ, сначала печатает заголовок с именем файла.       
Если ФАЙЛ не задан или задан как -, читает стандартный ввод.       

Обязательные аргументы, используемые для длинных опций, обязательны также и для коротких опций.      

-c, --bytes=[-]N вывод первыx N байт каждого файла; с предваряющим символом '-' вывод последних N байт каждого файла      
-n, --lines=[-]N вывод первыx N строк каждого файла вместо первых 10; с предваряющим символом '-' вывод последних N строк каждого файла      
-q, --quiet, --silent не печатать заголовки, содержащие имена файлов      
-v, --verbose всегда печатать заголовки, содержащие имена файлов      
--help вывести справку и закончить работу      
--version вывести информацию о версии и закончить работу      
