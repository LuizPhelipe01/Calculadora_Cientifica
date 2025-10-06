```
											   _______________________
											  |  _________________  |
											  | | JO           0. | |
											  | |_________________| |
											  |  ___ ___ ___   ___  |
											  | | 7 | 8 | 9 | | + | |
											  | |___|___|___| |___| |
											  | | 4 | 5 | 6 | | - | |
											  | |___|___|___| |___| |
											  | | 1 | 2 | 3 | | x | |
											  | |___|___|___| |___| |
											  | | . | 0 | = | | ÷ | |
											  | |___|___|___| |___| |
											  |_____________________|
```

# 🧮 Calculadora Científica

![C](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c)
![GDB Online](https://img.shields.io/badge/IDE-GDB%20Online-orange?style=for-the-badge&logo=gnu)

---

## ❓ O que é ❓
> Esta é uma calculadora científica desenvolvida em C que realiza operações básicas e avançadas, como soma, subtração, multiplicação, divisão, potenciação, fatorial, funções trigonométricas e cálculo da constante de Euler.

---

## 👨‍💻 Tecnologias

- Linguagem: C  
- Bibliotecas: `<math.h>`, `<stdlib.h>`, `<stdio.h>`  
- IDE: GDB Online

---

## ⚙️ Como Executar
1. Abra o código no seu compilador C (Dev C++, Code::Blocks ou GDB Online).  
2. Compile o programa:  
```bash
gcc calculadora_cientifica.c -o calculadora -lm
```
3. Execute:
```bash
./calculadora
```
4. Escolha a operação desejada no menu e siga as instruções na tela.

---

## 🔎 Exemplos de Uso 

<p align="center"> <img src="imagens/soma.png" alt="Exemplo calculadora soma" width="400"/> </p> 
<p align="center"> <img src="imagens/potencia_10.png" alt="Exemplo calculadora potência de 10" width="400"/> </p> 
<p align="center"> <img src="imagens/raiz_quadrada.png" alt="Exemplo calculadora raiz quadrada" width="400"/> </p>

---

## 💡 Observações

- O programa utiliza menu interativo, permitindo que o usuário execute múltiplas operações sem reiniciar.
- Funciona em qualquer compilador C que suporte a biblioteca <math.h>.
- Use -lm ao compilar para incluir a biblioteca matemática.
