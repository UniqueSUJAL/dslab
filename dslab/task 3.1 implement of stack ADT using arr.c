char ** buildArray(int* target, int targetSize, int n, int* returnSize){
    int size=2*n-targetSize;
    int cursor=1;
    int arrcur=0;
    int i=0;
    char** tr=(char**)calloc(size,sizeof(char*));
    
    while(cursor<=n&&i<targetSize){
        tr[arrcur]="Push";
        if(target[i]==cursor){
            cursor+=1;
            arrcur+=1;
            i++;
        }
        else{
            tr[arrcur+1]="Pop";
            cursor+=1;
            arrcur+=2;
        }
    }
    
    *returnSize=arrcur;
    return tr;
}

