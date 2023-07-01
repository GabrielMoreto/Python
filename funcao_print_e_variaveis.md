# Função print()

> Função print()

A função "print()" serve para imprimir uma mensagem. Por exemplo:

```
print("Olá, mundo!")
```

O resultado será: 

```
Olá, mundo!
```

> Função help()

A função "help()" é uma função de ajuda. Por exemplo, para saber mais sobre a função print digite o seguinte código:

```
help(print)
```

Após executar o código, repare que a função print pode receber os seguintes valores: 

`value`

É o valor que queremos imprimir, a função pode receber mais de um valor, basta separá-los por vírgula.

`sep` 

É o separador entre os valores, por padrão o separador é um espaço em branco.

`end`

É o que acontecerá ao final da função, por padrão há uma quebra de linha, uma nova linha (\n).

>Testando a função print()

De volta ao console, execute a função print com os valores que vimos:

```
print("Brasil", "ganhou", 5, "titulos mundiais", sep="-")
print("Brasil", "ganhou", 5, "titulos mundiais", end="")
```

O resultado será: 

```
Brasil-ganhou-5-titulos mundiais
Brasil ganhou 5 titulos mundiais
```

# Variáveis

Para definir uma variável siga os exemplos abaixo:

```
pais = "Italia"
quantidade = 4
```

Com as variáveis definidas, podemos refazer a função print, só que dessa vez passando as variáveis no lugar dos antigos valores:

```
print(pais, "ganhou", quantidade, "titulos mundiais")
```

O resultado será:

```
Italia ganhou 4 titulos mundiais
```
Para saber mais sobre os tipos de variáveis acesse [Tipos de variáveis].

[Tipos de variáveis]: https://github.com/GabrielMoreto/Python/blob/c5cc2d7991a4b00320461a93f070a14fa003d3ab/tipagem_de_variaveis.py




