// vowel or consonant using switch case.
#include<stdio.h>
int main(){
	char t;
	printf("\n enter your alphabet :");
    scanf("%c",&t); 
    switch(t)
    {
    	case 'a':
    		{
    		printf("it's vowel\n");
    		break;
			}
		case 'e':
			{
			printf("it's vowel\n");
    		break;	
			}
		case 'i':
			{
			printf("it's vowel\n");
    		break;	
			}
		case 'o':
			{
			printf("it's vowel\n");
    		break;	
			}
    	case'u' :
        {
            printf("it's vowel\n");
            break;
        }
        default :
        {
            printf("it's consonant'\n");
            break;
        }
	}
}
