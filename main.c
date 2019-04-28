#include <stdio.h>

//Create Menu
int main () 
{
  int choice;
 
 //print menu
  printf("=========================\n");
  printf("          MENU           \n");
  printf("=========================\n");
  
  printf("1. Rotation Cypher Encryption Given Plain Text and Key\n");
  printf("2. Rotation Cypher Decryption Given Plain Text and Key\n");
  printf("3. Substitution Cypher Encrption Given Plain Text and Key\n");
  printf("4. Substitution Cypher Decryption Given Cypher Text and Key\n");
  
  
  printf("\nEnter Choice Number In The Input File >>\n");
  scanf("%d", &choice);
  
  switch(choice){
        case 1:  
            printf("\nRotation Cypher Encryption Given Plain Text and Key:\n");
    
        //printf("\nPlease Enter Plain Text To Encrypt In The Input File\n");
        
        //Read and store Plain Text

        int newText[100],i=0,n; 
        int key = 1; //Declare rotation key
        char plainText[100]="ATTACK AT SUNRISE "; // Store plaintext
        while(plainText[i]!='\0' ); // While loop reads plainText until null
        {
        newText[i]= (plainText[i] - 65 + key) % 26 + 65; //Create a loop to manipulate each ASCII letter (to encrypt) in plainText to then produce newText ie the encrypted text
        i++; 
        }
        for(n=0; n<i-1; n++) // Create a loop to print each associated ASCII letter in character form
            printf("%c" ,newText[n]);
        
        return 0;
            break;
            
        case 2:
            printf("\nRotation Cypher Decryption Given Plain Text and Key:\n");
           
        int newText2[100],i2=0,n2;
        int key2 = 1; // declare roation key
        char plainText2[100]="ATTACK  "; // Store plainText
        while(plainText2[i2]!='\0' ); //While loop reads until plainText is null
        {
        newText2[i2]= (plainText2[i2] - 65 - key2) % 26 + 65; // create a loop to manipulate each ASCII letter (to decrypt) in plainText to then produce newText2 ie the decrypted text 
        i2++;
        }
        for(n2=0; n2<i2-1; n2++) // Create a loop to print each associated ASCII letter in character form
            printf("%c" ,newText2[n2]);
        
        return 0;
            break;
      
        case 3:
            printf("\nSubstitution Cypher Encrption Given Plain Text and Key:\n");
            break;
            
        case 4:
            printf("\nSubstitution Cypher Decryption Given Cypher Text and Key:\n");
            break;
        default:
            printf("\nInvalid Input\n");
            break;
            
                }

      return 0;
}
    
