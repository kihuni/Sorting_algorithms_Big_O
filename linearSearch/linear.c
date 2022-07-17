#include <stdio.h>
#include <stdlib.h>

int main()
{ 
        int nums[4] = {4,2,6,8};

        for(int i = 0; i<4; i++)
        { 
              if (nums[i] == 6)
              {
                printf("found\n ");
                return 0;
              }
                
        }
printf("not found\n ");
return 1;

}

}
