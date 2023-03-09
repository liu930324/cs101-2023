#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fp;
    int arr_write[5] = {1,2,3,4,5};
    int arr_read[5]
    if((fp=fopen("a.bin","wb+"))==NULL){
        printf("Cannot open the file...");
        exit(1);
    }
    if (fwrite(arr_write,sizeof(arr_write),1,fp)!=1){
        printf("File write erro...\n");
    }
    fseek(fp,0,SEEK_SET);
    
    if(fread(arr_write,sizeof(arr_write),1,fp)!=1){
        printf("File read reeo...\n");
    }
    
    return 0;
}
