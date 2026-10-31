1) No exercício 2, por que dobra consegue alterar o vetor do main sem return? Pois dobra utiliza ponteiros, que em vez de fazerem cópias dos dados, utilizam os endereços de onde estão aqueles dados, então os valores também são alterados e acessíveis na main.

2)No exercício 5, Cole dois endereços consecutivos de int e mostre a diferença em bytes:
Em um vetor int a diferença entre dois endereços consecutivos será de 4 bytes, cada elemento na memória ocupa 4 bytes, ou seja, sizeof(int) = 4.
Ex.:0x1000
    0x1004

3) No exercício 6, explique em uma frase o que o AddressSanitizer detectou e por que, sem ele, o erro poderia passar despercebido:
Ele detectou um acesso fora dos limites do vetor, o programa tentou acessar v[10] que está fora do vetor. C não verifica automaticamente os limites, e isso pode causar problemas sérios ao programa como o encerramento dele mesmo.
