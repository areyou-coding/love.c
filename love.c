                                                                                                                     
                #include<stdio.h>                                                                                    
                                                                                    #include<time.h>                 
                                                                                                                     
                                                                                                                     
                  const struct                                                       timespec T0,TX;                 
                const unsigned long                                              long NS = 0x3b9aca00;               
               const unsigned char *                                         FMTS[2] = {"\033[38;5;232"              
            "m\033[48;5;232m%x\033[0m"                                      ,"\033[38;5;124m\033[48;5;124"           
            "m%x\033[0m"}; unsigned char*                                  ends[2] = {"", "\n"}; int main(           
           int argc,char* argv[]){ unsigned                               long long tpf = NS * (60.0/125.0)          
          , B [100]; unsigned char C [164643];                           setvbuf(stdout, C, _IOFBF, 164643);         
          memset(B,0ULL,800); unsigned long long                       i, j, b, l, sl, ls[2]; unsigned short         
         eolf = 0, eolc = 0, h = 6, w = 13, ih = 0                    , iw = 0, ci,  cj, cc; FILE* fh = fopen        
        ("love.c","r"); fseek(fh, 0, SEEK_END); int                  flen = ftell(fh); unsigned char cs[flen];       
        cs[flen - 1] = 0; fseek(fh, 0, SEEK_SET); for               (i = 0; i < flen; i++) {cs[i] = fgetc(fh);       
        eolc +=(!eolf && (cs[i] == 13 || cs[i] == 10));           eolf |= cs[i] == 10; iw +=!eolf && (cs[i] !=       
         13); ih +=  cs[i] == 10;} ih += cs[i - 1] != 10;       fclose(fh); h = ih  / h; w = iw / w; printf (        
          "\033[2J\033[?25l\033[H"); fflush(stdout); clock_gettime(CLOCK_MONOTONIC, &T0); for (i = 0; i < 6;         
           i++) { memset(ls, 0ULL, 16); for(j = 0; j < 13; j++){ cc = 0; for(ci = 0; ci < h; ci++) for(cj =          
            0; cj< w; cj++){ cc += cs[((i*h) + ci) * (iw+eolc) + j*w + cj] != 32;} b = cc >= h*w*0.4; ls[j           
             > 6] |= b << (((j<7) * 7)|((j> 6) * 71)) - (j + 1); } B[44 + (i<<1)] = ls[0]; B[45 + (i<<1)]            
              = ls[1]; } for(i = 2; i < 98; i++) { for(j = 63; j > 0; j--) printf(FMTS[(B[i] >> j) & 1],             
                 (B[i] >> j) & 1); ends[0] = FMTS[B[i] & 1]; printf(ends[i & 1], B[i] & 1);} for(;;){                
                    clock_gettime(CLOCK_MONOTONIC, &TX); struct timespec dt={(tpf/NS) - (T0.tv_sec                   
                       -TX.tv_sec), (tpf % NS) - (TX.tv_nsec - T0.tv_nsec)}; nanosleep(&dt, 0);                      
                        clock_gettime(CLOCK_MONOTONIC,&T0); printf("\033[H"); memset(ls, 0ULL,                       
                          16); for(i = 2; i < 98; i++) { sl = B[i - 1 + ((i & 1 ^ 1) << 1)];                         
                             b = 0x4000000000000000; l = ((B[i - 2] >> 1 & b) + (B[i + 2]                            
                               >> 1 & b) + (sl << 62 & b) + (B[i] & b) & b) << 1; for(;                              
                                  b > 1; b >>= 1){ printf(FMTS[(b << 1 & l) > 0], (b                                 
                                    << 1 & l) > 0); l |=(B[i - 2] & b) + (B[i + 2]                                   
                                      & b) + (B[i] >> 1 & b) + (B[i] << 1 & b) &                                     
                                        b; } printf(FMTS[l >> 1 & 1], l >> 1 &                                       
                                          1); l |= (B[i - 2] & 1) + (B[i + 2                                         
                                             ] & 1) + (B[i] >> 1 & 1) + (                                            
                                              sl >> 63 & 1) & 1; ends[0]                                             
                                                = FMTS[l & 1]; printf(                                               
                                                 ends[i & 1], l & 1);                                                
                                                   B[i-2]= ls[i&1];                                                  
                                                     ls[i&1]=l; }                                                    
                                                     B[i-2] =ls[0                                                    
                                                      ]; B[i-1]=                                                     
                                                        ls[1];                                                       
                                                          }}                                                         
                                                                                                                     
                                                                                                                     
                                                                                                                     