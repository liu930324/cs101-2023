int multi(int i, int j){
    if(j==1){
    printf("%d*%d=%d ",i,j,i*j);
    return 0;
    } else{
    multi(i,j-1);
    printf("%d*%d=%d ",i,j,i*j);
    }
}
int multi_2(int i,int j){
    if(i==j){
        multi(i,j);
        printf("\n");
        return 0;
    }else{
    multi_2(i,j);
    multi(i,j);
    printf("\n");
    }
}
int main()
{
    multi_2(1,9);
    return 0;
}
