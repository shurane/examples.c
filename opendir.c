#include <stdio.h>
#include <dirent.h>

int main(void){
	DIR * d = opendir(".");
	// printf("value of d: %s\n", d);
	struct dirent *current, *ent;
	current = readdir(d);
	printf("Current: d_name:%s d_ino:%llu\n", 
		current->d_name, 
		current->d_ino);
	while ((ent = readdir(d)) != NULL){
		printf("%s\n", ent->d_name);
	}
}
