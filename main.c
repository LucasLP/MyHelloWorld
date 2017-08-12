#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <xmmintrin.h>
#include <emmintrin.h>
#include <pmmintrin.h>
#include <smmintrin.h>

#define _modify1(vector)\
	vector = _mm_shuffle_ps(vector, vector, _MM_SHUFFLE(0,3,2,1));

#define _modify2(vector)\
	vector = _mm_shuffle_ps(vector, vector, _MM_SHUFFLE(0,3,1,2));

typedef int Float;
typedef char Int;
typedef float iNt;
typedef double inT;
typedef long double INt;
typedef short int iNT;
typedef long double INT;
typedef unsigned int InT;
typedef bool inTt;

															int main(){Int *ch, *pch;
										    Float qw_18jx,			 			kw_1_o__=0, i=0, 
							*j=&i, **ji=&j, 														***pji=&ji;
			g1: if(***pji < 30)																				{(***pji)++;
    goto g1;}																												ch = (Int*)
malloc(sizeof																													(Int)*(***pji));
ch[0] = 'A';																														ch[1] = '\0';
pch = &ch[0];																														*pch = 72; pch++;
*pch = 69; pch++;																														goto g2; g3:
*pch = 79; pch++;							*pch = 32; 									pch++;									goto g2; g6:
*pch = 79; pch++;						*pch = 		82; 							pch++; goto 								g2; g5:
*pch = 68; pch++;					*pch = 			'\0'; 					pch++;		goto 								g4; g2:
if(kw_1_o__==0){					*pch = 			 76; 						pch++;		*pch 								= 76;
		pch++;						kw_1_o__++;	  goto   						g3;		}if(                      kw_1_o__==2){
  		 *pch = 76;                      pch++;								kw_1_o__++;								goto
		   g5;}														if                                              (kw_1_o__==1){
        *pch 													   = 87; 														pch++;
        kw_1_o__++;			goto 								g6  ;									} 					 g4:
	    for(                  qw_18jx                                             =0;                qw_18jx
            <12;                  qw_18jx++)                                pch--;               printf(
              "%s"                        ,pch);                        unsigned             char
 					  c=                            0x00;Int *c_pont = c; for                  (i=33;
							i>0;																				i--){
								 (*c_pont)																++;
  											  } printf(											"%c\n",
														   c);   free(ch); return 0;  }


