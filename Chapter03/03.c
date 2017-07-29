/*
* This program breaks down an ISBN entered by the user.
*/

#include <stdio.h>

int main()
{
    int gsi, groupId, pubCode, itemNum, checkDig;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gsi,&groupId,&pubCode,&itemNum,&checkDig);

    printf("GSI prefix: %d\n",gsi);
    printf("Group identifier: %d\n",groupId);
    printf("Publisher code: %d\n",pubCode);
    printf("Item number: %d\n",itemNum);
    printf("Check digit: %d\n",checkDig);
    return 0;
}
