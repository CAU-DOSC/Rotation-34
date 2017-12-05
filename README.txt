# Rotation-34

README.txt
This file is for describing a string - operation program we made for class in CAU
----------------------------------------------------------------------------------------------------------------
The code(.c .h) files are in Rotation-34\Rotarion

Ownership description :

README.txt 		김영기(kimyoungi99)
main.c			김영기(kimyoungi99)
Gen_data.c		김영기(kimyoungi99)
Vector_Rotation.c 	강창훈
Jugling_Algo.c		한윤진(holoquew)
Reverse.c		이상묵
blockswap.c		채린  

Function description :
main : 

For handling I/O and measuring lead time
(각 sting function에 같은 string을 인자로 전달해 준뒤 연산에 걸리는 시간을 측정하여 출력하였습니다.)



Vector_rotation : 
char *Vector_rotation(char *ary, int d, int n);

A string function that rotates sting n times(one at a time) and returns a pointer that points result string 



Juggling :
char *Juggling(char arr[], int n, int k)

A string function that rotates sting using juggling method and returns a pointer that points result string 



Reverse :
char *Reverse(char *str, int d, int n)

A string functiong that reverse sting



Generate_array :
char *Generate_array(int length);

A funcion that generates string that has length of value length



Generate_d :
int Generate_d(void);

A funcion that generate random value d

----------------------------------------------------------------------------------------------------------------
팀플 방식 :
1. 협업을 편하게 하기 위해 visual studio 솔루션을 git으로 같이 관리해 clone이나 pull한 직후 따로 프로젝트를 만들지 않아도 compile, debugging할 수 있도록 하였습니다.
2. 필요한 함수를 각자 하나씩 맡아서 하기로 하여 각 함수마다 파일을 따로 만들어 Owner를 정하고 코드 작성 - 관리하였습니다.
----------------------------------------------------------------------------------------------------------------
출력 결과 : 







