#include<stdio.h>
#include<string.h>

struct music{

	char song[50];
	char name[50];
	char album[50];
};

int main(){

	struct music m;
	FILE *fp;
	int n;

	fp = fopen("music.txt","w");

	if(fp == NULL){
		printf("unable to open file\n");
		return 0;
	}

	printf("enter number of songs : ");
	scanf("%d",&n);
	
	getchar();

	for(int i=0;i<n;i++){
		printf("song %d\n",i+1);

		printf("Enter song name: ");
        	fgets(m.song, sizeof(m.song), stdin);
        	m.song[strcspn(m.song, "\n")] = '\0';

        	printf("Enter artist name: ");
        	fgets(m.name, sizeof(m.name), stdin);
        	m.name[strcspn(m.name, "\n")] = '\0';

        	printf("Enter album name: ");
        	fgets(m.album, sizeof(m.album), stdin);
        	m.album[strcspn(m.album, "\n")] = '\0';

		fprintf(fp,"song    : %s\n",m.song);
		fprintf(fp,"artist  : %s\n",m.name);
		fprintf(fp,"album    : %s\n",m.album);
	}
	fclose(fp);

	printf("music library saved successfully in music txt.file\n");
	return 0;
}
