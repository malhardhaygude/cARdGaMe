#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    printf("\nKeep any one number in your mind?\n");

    int a[8], b[8], c[8];
    int i = 0;

    for(int j = i; j < 8; j++,i+=3){
        a[j]=arr[i];
        b[j]=arr[i+1];
        c[j]=arr[i+2];
        
    }
 
    for(int i = 0; i < 8; i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%d ",b[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%d ",c[i]);
    }
 
int terminate = 2;
while(terminate--){
    printf("\nThe number in your mind is present in which array?");
    int arr_number;
    scanf("%d",&arr_number);

    switch(arr_number){
        case 1:
        // select and shuffle
         int arr_2[24];
         for(int i=0; i<8; i++){
            arr_2[i]=b[i];
         }
         for(int i=0; i<8; i++){
            arr_2[i+8]=a[i];
         }
         for(int i=0; i<8; i++){
            arr_2[i+16]=c[i];
         }
         
         for(int i = 0; i < len; i++){
          printf("%d ",arr_2[i]);
         }
        
        // Split
        int i = 0;
         for(int j = i; j < 8; j++,i+=3){
            a[j]=arr_2[i];
            b[j]=arr_2[i+1];
            c[j]=arr_2[i+2];
        
            }
        printf("\n");
            for(int i = 0; i < 8; i++){
                printf("%d ",a[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",b[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",c[i]);
            }

        break;
        
        case 2:
        int arr_3[24];
         for(int i=0; i<8; i++){
            arr_3[i]=a[i];
         }
         for(int i=0; i<8; i++){
            arr_3[i+8]=b[i];
         }
         for(int i=0; i<8; i++){
            arr_3[i+16]=c[i];
         }
         
         for(int i = 0; i < len; i++){
          printf("%d ",arr_3[i]);
         }


          // Split
        int k = 0;
         for(int j = k; j < 8; j++,k+=3){
            a[j]=arr_3[k];
            b[j]=arr_3[k+1];
            c[j]=arr_3[k+2];
        
            }
        printf("\n");
            for(int i = 0; i < 8; i++){
                printf("%d ",a[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",b[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",c[i]);
            }

        break;
        
        case 3:
        int arr_4[24];
         for(int i=0; i<8; i++){
            arr_4[i]=a[i];
         }
         for(int i=0; i<8; i++){
            arr_4[i+8]=c[i];
         }
         for(int i=0; i<8; i++){
            arr_4[i+16]=b[i];
         }
         
         for(int i = 0; i < len; i++){
          printf("%d ",arr_4[i]);
         }


          // Split
        int m = 0;
         for(int j = m; j < 8; j++,m+=3){
            a[j]=arr_4[m];
            b[j]=arr_4[m+1];
            c[j]=arr_4[m+2];
        
            }
        printf("\n");
            for(int i = 0; i < 8; i++){
                printf("%d ",a[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",b[i]);
            }

            printf("\n");

            for(int i = 0; i < 8; i++){
                printf("%d ",c[i]);
            }
        break;
        
    }
}
    printf("\nThe number in your mind is present in which array?");
    int arr_number_0;
    scanf("%d",&arr_number_0);
    switch(arr_number_0){
        case 1:
        printf("answer: %d",a[4]);
        break;
        case 2:
        printf("answer: %d",b[4]);
        break;
        case 3:
        printf("answer: %d",c[3]);
        break;
    }
    
 return 0;
}