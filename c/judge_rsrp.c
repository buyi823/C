#include <stdio.h>

int main(){
    int rsrp;
    printf("Please input RSRP value: ");
    scanf("%d",&rsrp);
    
    // switch(rsrp){
    //     case 1:
    //         if(rsrp > -85){
    //             printf("Excellent\n");
    //             break;
    //          }
    //     case 2:
    //         if(rsrp >= -115 && rsrp < -105){
    //             printf("Good\n");
    //             break;
    //         }
        

    // }

/*
1.极好点：RSRP≥-85dBm； SINR>25
2.好点： -85dBm>RSRP≥-95dBm；SINR:16-25
3.中点： -95dBm>RSRP≥-105dBm；SINR:11-15
4.差点：-105dBm>RSRP≥-115dBm；SINR:3-10
5.极差点：RSRP<-115dBm；SINR<3

*/
    if (rsrp>-85)
    {
        printf("Excellent\n");
    }
    else if (rsrp>=-115 && rsrp<-105)
    {
        printf("Good\n");
    }
    else if (rsrp>=-105 && rsrp<-95)
    {
        printf("Medium\n");
    }
    else if (rsrp>=-115 && rsrp<-105)
    {
        printf("Bad\n");
    }
    else
    {
        printf("Very Bad\n");
    }        
}

