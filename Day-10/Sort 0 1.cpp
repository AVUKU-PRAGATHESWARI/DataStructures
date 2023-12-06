void sortZeroesAndOne(int input[], int size)
{
    int l=0,r=size-1;
    while(l<r){
        if(input[l]==0){
            l+=1;
        }
        else if(input[r]==1){
            r-=1;
        }
        if(input[l]==1 && input[r]==0){
            int temp = input[l];
            input[l]=input[r];
            input[r]=temp;
        }
    }
}