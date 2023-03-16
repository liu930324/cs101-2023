typedf struct person{
    int id;
    char first_name[32];
    char last_name[32];
}person_t

int main(){
    FILE* rfp + fopen("person.bin","r");
    person_t tmp[1];
    int i=0;
    while(fread(tmp,sizeof(person_t), 1, rfp)){
        printf("[%d] %d: %s %s\n",i,
                                    tmp[0].id,
                                    tmp[0].first_name,
                                    tmp[0].last_name);
        i++
    }
    fclose(rfp);
