# Diedrich-trabalho-03

Trabalho de PEE

## Projeto - Convesão Binário para 7 segmentos

Conversor de uma entrada do usuário de 0 a 9 e resposta em char (Binario representando os 7 segmentos)

### Desenvolvimento

Utilizando os mapas de karnaugh do laboratório de ELODIG, escrever um código em C que converta a entrada de 0 a 9 em saida de 7 segmentos.

Pegar um bit da entrada:

```
char A = in&0x01?1:0;
```

Validação de um segmento:

```
a = B|!A&!C|B&C^A&C|D;
```

