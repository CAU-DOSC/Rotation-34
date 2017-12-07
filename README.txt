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
Enter Test Size(string size = 1024*2^(n - 1)) : 10
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
1024         514                :  1          0          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
2048         1538               :  7          0          0	    0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
4096         3586               :  31         0          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
8192         -510               :  9          0          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
16384        7682               :  272        0          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
32768        -8708              :  659        1          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
65536        24052              :  4076       1          0          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
131072       89530              :  26251      2          1          1
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
262144       220230             :  132163     3          2          1
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (단위 : ms)
524288       480538             :  554436     6          3          3

추론 : 
우리조가 코딩한 Trivial 알고리즘을 사용하여 rotate를 할 경우 문자열의 한 문자를 다른 위치로 옮기는 과정을 n * |d|번 반복한다. 그러므로 시간복잡도는 O(n * |d|)라 할 수 있다. (1< d < n)
STR length가 16384인 경우가 32768보다 오래 걸린 이유는 d의 절대값의 크기가 훨 컸기 때문이라고 할 수 있다.

우리조가 코딩한Juggling 알고리즘을 사용하여 rotate를 할 경우 문자열의 한 문자를 다른 위치로 옮기는 과정을 n번 반복한다. 그러므로 시간복잡도는 O(n)라 할 수 있다.
왜나하면 각 문자들을 몇칸 옮길것인가를 최대공약수를 이용하여 계산한 뒤 옮기기 때문이다.

우리조가 코딩한 Reverse 알고리즘은 한 char변수에 저장된 문자를 다른 곳에 옮겨 저장하는 과정을 3/2d + 3/2(n - d) + 3/2n = 3/2n + 3/2n = 3n번 거치므로 시간복잡도는 O(n)라 할 수 있다.

우리조가 코딩한 Block Swop 알고리즘 역시 시간 복잡도는 O(n) 이라 할 수 있다. (array 자체를 나누워 swap하는 과정을 거쳐 rotation 하였음으로)

그러므로 Trivial 알고리즘이 가장 오래 걸리는 이유와 증가 폭이 가장 비슷한 이유를 이로 설명할 수 있으며,
마찬가지로 나머지 세 알고리즘의 증가폭이 비슷한 이유 역시 설명할 수 있다고 추론하였다.
