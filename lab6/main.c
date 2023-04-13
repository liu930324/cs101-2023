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
    if(i==1){
        multi(i,j);
        printf("\n");
        return 0;
    }else{
    multi_2(i-1,j);
    multi(i,j);
    printf("\n");
    }
}
int main()
{
    multi_2(9,9);
    return 0;
}
