# Lista de 44 questões na Linguagem C


Essas questões foram parte de uma tarefa da faculdade.

<ul>
    <li>Começa pelo básico desde criar uma variável e saber trocar os valores delas.
    <li>Estrutura de Seleção e Operadores Relacionais.
    <li>Seleção Aninhada ou Concatenada.
    <li>Operadores Lógicos
</ul>
O enunciado de todas as questões ficaram aqui. 

1. Implemente em C a seguinte instrução:

   A <- 10

   B <- 20

   Escrever B

   B<- 5

   Escrever A, B

   

2. Implemente em C a seguinte instrução:

   A<- 30

   B<- 20

   C<- A + B

   Escrever C

   B<- 10

   Escrever B, C

   C<- A + B

   Escrever A, B, C

   

3. Implemente em C a seguinte instrução:

​       A<- 10

​       B<-20

​	   C<- A

​       B<- C

​       A<- B

​       Escrever A, B, C



   4. Implemente em C a seguinte instrução:

      A<- 10

      B<- A + 1

      A<- B + 1

      B<- A + 1

      Escrever A

      A<- B + 1

      Escrever A, B

      

5.  Implemente em C a seguinte instrução:

     A<- 10

     B<- 5

     C<- A + B

     B<- 20

     A<-10

     Escrever A, B, C

   

6. Implemente em C a seguinte instrução:

   X<- 1

     Y<- 2

     Z<- Y - X

     Escrever Z

     X<- 5

     Y<- X + Z

     Escrever X, Y, Z

   

7. Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B. A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas variáveis.

   

8. Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor. 

   

9. Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo. 

   

10. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

    

11. Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores. 

    

12. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. 

    

13. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

    

14. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

    

15. Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na fórmula abaixo):

        C/5 = (F-32)/9
        
           Observação: para testar se a sua resposta está correta saiba que 100C = 212F
    
16. Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é: 

​        mediafinal= (n1 *  + n2 * 3 + n3 * 5) / 10

### Estrutura de Seleção e Operadores Relacionais 

17. Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10! 

    

18. Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo). 

    

19. Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada. 

    

20. Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu).

    

21. Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.

     

22. Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente. 

    

23. Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.

    

24. A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).

    

25. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.

    

26. Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'. 

    

27. Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual a quantidade média escrever a mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.



###  Seleção Aninhada ou Concatenada 

28. Ler um valor e escrever se é positivo, negativo ou zero. 

    

29. Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles. 

    

30. Ler 3 valores (considere que não serão informados valores iguais) e escrevê-los em ordem crescente. 

    

31. Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.

    

32. Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE. 

    

33. Ler dois valores e imprimir uma das três mensagens a seguir: ‘Números iguais’, caso os números sejam iguais ‘Primeiro é maior’, caso o primeiro seja maior que o segundo; ‘Segundo maior’, caso o segundo seja maior que o primeiro. 

    

34. Implemente em C o seguinte algoritmo:

    <pre>início


    ler x

    ​		ler y

    ​		z <- (x * y)  +  5

    ​		se z <= 0 então

    ​			resposta <- 'A'

    ​		senão

    ​			se z <= 100 então

    ​					reposta <- 'B'

    ​			senão

    ​					resposta <- 'C'

    ​			fim_se

    ​		fim_se

    ​		escrever z, resposta

    fim</pre>

    

35. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 

    #### Álcool 

    - Até 20 litros, desconto de 3% por litro.
    - Acima de 20 litros, desconto de 5% por litro.

    #### Gasolina

    - Até 20 litros, desconto de 4% por litro

    - Acima de 20 litros, desconto de 6% por litro

      

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90. 



36. Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha. 

    

37. Uma fruteira está vendendo frutas com a seguinte tabela de preços: Até 5 Kg Acima de 5 Kg Morango R$ 2,50 por Kg R$ 2,20 por Kg Maçã R$ 1,80 por Kg R$ 1,50 por Kg Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente. 

    

38. Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a mensagem ‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’. 



### Operadores Lógicos

39. Para A = V, B = V e C = F, qual o resultado da avaliação das seguintes expressões: 

a) (A e B) ou (A xou B) 

b) (A ou B) e (A e C) 

c) A ou C e B xou A e não B



40. Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e escrever o total (total = quantidade adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total - desconto), sabendo-se que: 

\-Se quantidade <= 5 o desconto será de 2% 

-Se quantidade > 5 e quantidade <=10 o desconto será de 3% 

-Se quantidade > 10 o desconto será de 5% 



41. Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever o conceito do aluno de acordo com a tabela de conceitos mais abaixo: 

    

Média_de_Apropveitamento= (N1 + N2 * 2 + N3 * 3 + Média_dos_Exercícios) / 7



#### A atribuição de conceitos obedece a tabela abaixo:

##### Média de Aproveitamento 

maior ou igual a 9,0 -> CONCEITO: A

maior ou igual a 7,5 e menor que 9,0 -> CONCEITO: B​                       

maior ou igual a 6,0 e menor que 7,5 -> CONCEITO: C          

menor que 6,0 ->  CONCEITO:D                                      



42. Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito: - Ter no mínimo 65 anos de idade. - Ter trabalhado no mínimo 30 anos. - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'. 



###  Questões que esqueci de por na lista:

- Estrutura de Seleção e Operadores Relacionais

43. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra.



- Seleção Aninhada ou Concatenada

44. Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores. 

