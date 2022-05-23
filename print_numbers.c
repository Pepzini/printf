#include "main.h"                                                                                                                               
                                                                                                                                                
/**                                                                                                                                             
 * print_i - prints an integer                                                                                                                  
 * @i: integer to print                                                                                                                         
 * Return: number of chars and digits printed                                                                                                   
 */                                                                                                                                             
                                                                                                                                                
int print_i(va_list i)                                                                                                                          
{                                                                                                                                               
        int a[0];                                                                                                                               
        int p, q, r, sum, counter;                                                                                                              
                                                                                                                                                
        r = va_arg(i, int);                                                                                                                     
        counter = 0;                                                                                                                            
        q = 1000000000;                                                                                                                         
        a[0] = r / q;                                                                                                                           
                                                                                                                                                
        for (p = 1; p < 10; p++)                                                                                                                
        {                                                                                                                                       
                q /= 10;                                                                                                                        
                a[p] = (r / q) % 10;                                                                                                            
        }                                                                                                                                       
        if (n < 0)                                                                                                                              
        {                                                                                                                                       
                _putchar('-');                                                                                                                  
                counter++;                                                                                                                      
                for (p = 0; p < 10; p++)                                                                                                        
                        a[p] *= -1;                                                                                                             
        }                                                                                                                                       
        for (p = 0, sum = 0; p < 10; p++)                                                                                                       
        {                                                                                                                                       
                sum += a[p];                                                                                                                    
                if (sum != 0 || p == 9)                                                                                                         
                {                                                                                                                               
                        _putchar('0' + a[p]);                                                                                                   
                        counter++;                                                                                                              
                }                                                                                                                               
        }                                                                                                                                       
        return (counter);                                                                                                                       
}                                                                                                                                               
                                                                                                                                                
/**                                                                                                                                             
 * print_d - prints a decimal                                                                                                                   
 * @d: decimal to bee printed                                                                                                                   
 * Return: number of characters and digits printed                                                                                              
 */
int print_d(valist f)                                                                                                                           
{                                                                                                                                               
        int a[10];                                                                                                                              
        int x, y, z, sum, counter;                                                                                                              
                                                                                                                                                
        z = va_arg(f, int);                                                                                                                     
        counter = 0;                                                                                                                            
        m = 1000000000;                                                                                                                         
        a[0] = z / y;                                                                                                                           
                                                                                                                                                
        for (x = 1; x < 10; x++)                                                                                                                
        {                                                                                                                                       
                y /= 10;                                                                                                                        
                a[x] = (z / y) % 10;                                                                                                            
        }                                                                                                                                       
        if (z < 0)                                                                                                                              
        {                                                                                                                                       
                putchar('');                                                                                                                  
                counter++;                                                                                                                      
                for (x = 0; x < 10; x++)                                                                                                        
                        a[x] *= -1;                                                                                                             
        }                                                                                                                                       
        for (x = 0, sum = 0; x < 10; x++)                                                                                                       
        {                                                                                                                                       
                sum += a[x];                                                                                                                    
                if (sum != 0 || x == 9)                                                                                                         
                {                                                                                                                               
                        _putchar('0' + a[x]);                                                                                                   
                        counter++;                                                                                                              
                }                                                                                                                               
        }                                                                                                                                       
        return (counter);                                                                                                                       
}
