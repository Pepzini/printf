#include "main.h"                                                                                                                               
#include <stdlib.h>                                                                                                                             
                                                                                                                                                
/**                                                                                                                                             
 * print_R - prints a string in rot13                                                                                                           
 * @R: string to be printed                                                                                                                     
 * Return: numbers oof chars printed                                                                                                            
 */                                                                                                                                             
                                                                                                                                                
int print_R(va_list R)                                                                                                                          
{                                                                                                                                               
        char *str;                                                                                                                              
        unsigned int k, l;                                                                                                                      
        int counter = 0;                                                                                                                        
        char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";                                                                     
        char out[] = "NOPQRSTUVWXYXABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";                                                                    
                                                                                                                                                
        str = va_arg(R, char *);                                                                                                                
        if (str == NULL)                                                                                                                        
                str = "(ahyy)";                                                                                                                 
        for (k = 0; str[k]; k++)                                                                                                                
        {                                                                                                                                       
                for (l = 0; in[l]; l++)                                                                                                         
                {                                                                                                                               
                        if (in[l] == str[k])                                                                                                    
                        {                                                                                                                       
                                _putchar(out[l]);                                                                                               
                                counter++;                                                                                                      
                                break;                                                                                                          
                        }                                                                                                                       
                }                                                                                                                               
                if (!in[l])                                                                                                                     
                {                                                                                                                               
                        _putchar(str[k]);                                                                                                       
                        counter++;                                                                                                              
                }                                                                                                                               
        }                                                                                                                                       
        return (counter);                                                                                                                       
}