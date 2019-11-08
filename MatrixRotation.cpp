#include<iostream>
using namespace std;

void PrintTwoWayArray (int ** arr, int size){
    for(int i = 0; i< size*size ;i++){        
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void RorateOneFourth (int ** oldarr, int ** newarr, int size){
    PrintTwoWayArray(oldarr,size);
    for(int i= 0; i < size; i++){
        for(int j =0; j <size ;j++){
            newarr[i*(size)+j]= oldarr[(size-1-j)*(size)+i];            
        }
    }
    PrintTwoWayArray(newarr,size);    
}

void RorateTwoFourth(int ** oldarr, int ** newarr, int size){
    PrintTwoWayArray(oldarr,size);
       for(int i= 0; i < size; i++){
        for(int j =0; j <size ;j++){
            newarr[i*(size)+j]= oldarr[(size-1-i)*(size)+size-j-1];             
        }
    }
    PrintTwoWayArray(newarr,size); 
}

void RotateThreeFourth(int ** oldarr, int ** newarr, int size){
        PrintTwoWayArray(oldarr,size);
       for(int i= 0; i < size; i++){
        for(int j =0; j <size ;j++){
            newarr[i*(size)+j]= oldarr[(j)*(size)+size-1-i];                      
        }
    }
    PrintTwoWayArray(newarr,size);     
}

int main(){
    int a[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    int b[3][3];
    RorateOneFourth((int **)a,(int **)b,3);
    RorateTwoFourth((int **)a,(int **)b,3);
    RotateThreeFourth((int **)a,(int **)b,3);
    system("pause");
    return 0;
}