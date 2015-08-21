#include <stdio.h>
#include <unistd.h>
#include <string.h>

main(){
	FILE *fp;
	fp = popen("/sbin/ifconfig eth0", "r");
	char returnData[64];
	char *token;
	int i=1;

	while (fgets(returnData, 64, fp) != NULL){
		if(i == 2){
			token = strtok (returnData, ":");
			token = strtok (NULL, " ");
			printf("%s\n", token);
			break;
		}
		i++;
	}
	
	pclose(fp);
}
