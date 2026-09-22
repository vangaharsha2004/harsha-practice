#ifndef TWENTY_H
#define TWENTY_H

extern int my_string(char *str){
	int count = 0;
	while(str[count]!='\0'){
		count++;
	}
	return count;
}

#endif
