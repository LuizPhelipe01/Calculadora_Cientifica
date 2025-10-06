#include <stdio.h>
#include <math.h> //biblioteca de operações matemáticas.
#include <stdlib.h> // biblioteca para limpar o terminal.

int main() {
    int escolha, termos, numero_fatorial = 1, quantidade;
    float numero1, numero2, soma = 0, resultado;
    double euler = 0.0;
    long long resultado_fatorial = 1;

    do {
        //IF usado para detectar se o computador é windows ou linux, o system("cls") é pra windows e o system("clear") para linux.
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        
        printf("\n");
        printf("=====================================\n");
        printf("   BEM-VINDO À CALCULADORA BÁSICA\n");
        printf("=====================================\n");
        printf("0  - Sair\n");
        printf("1  - Adicao\n");
        printf("2  - Subtracao\n");
        printf("3  - Multiplicacao\n");
        printf("4  - Divisao\n");
        printf("5  - Expoente\n");
        printf("6  - Raiz Quadrada\n");
        printf("7  - Raiz Cúbica\n");
        printf("8  - Seno\n");
        printf("9  - Coseno\n");
        printf("10 - Tangente\n");
        printf("11 - Arcoseno\n");
        printf("12 - Arcocosseno\n");
        printf("13 - Arcotangente\n");
        printf("14 - Logaritmo Decimal\n");
        printf("15 - Logaritmo Natural\n");
        printf("16 - Constante de Euler\n");
        printf("17 - Fatorial\n");
        printf("18 - Media aritmetica\n");
        printf("19 - Probabilidade\n");
        printf("20 - Valor Absoluto\n");
        printf("21 - Hipotenusa\n");
        printf("22 - Potencia de 10\n");
        printf("23 - Função Hiperbólica Seno\n");
        printf("24 - Função Hiperbólica Cosseno\n");
        printf("25 - Função Hiperbólica Tangente\n");
        printf("-------------------------------------\n");
        printf("Escolha a operacao: ");
        scanf("%d", &escolha);

        
        resultado_fatorial = 1;
        numero_fatorial = 1;
        euler = 0.0;
        soma = 0;

        switch (escolha) {
            case 0:
                printf("\nSaindo...\n");
                break;
            
            case 1:
			    printf("\n");
			    printf("Voce escolheu a funcao de Soma.\n");
			    printf("\n");
			    
				printf("Digite o primeiro numero: ");
				scanf("%f",&numero1);
				printf("");
				
				printf("Digite o segundo numero: ");
				scanf("%f",&numero2);
				printf("");
				
				resultado = numero1 + numero2;
				printf("\n");
				printf("resultado da soma: %.2f",resultado);
				break;
			
			case 2:
			    printf("\n");
			    printf("Voce escolheu a funcao de subtracao.\n");
			    printf("\n");
			    
				printf("Digite o primeiro numero: ");
				scanf("%f",&numero1);
				printf("");
				
				printf("Digite o segundo numero: ");
				scanf("%f",&numero2);
				printf("");
				
				resultado = numero1 - numero2;
				printf("\n");
				printf("resultado da subtracao: %.2f",resultado);
				break;
			
			case 3:
			    printf("\n");
			    printf("Voce escolheu a funcao de multiplicacao.\n");
			    printf("\n");
			    
				printf("Digite o primeiro numero: ");
				scanf("%f",&numero1);
				printf("");
				
				printf("Digite o segundo numero: ");
				scanf("%f",&numero2);
				printf("");
				
				resultado = numero1 * numero2;
				printf("\n");
	            printf("resultado da multiplicacao: %.2f", resultado);
	            break;

			
			case 4:
			    printf("\n");
			    printf("Voce escolheu a funcao de divisao.\n");
			    printf("\n");
			    
				printf("Digite o primeiro numero: ");
				scanf("%f",&numero1);
				printf("");
				
				printf("Digite o segundo numero: ");
				scanf("%f",&numero2);
				printf("");
				
				if (numero2 == 0){
				    printf("\n");
					printf("nao e possivel divir por 0, digite um numero maior que 0");
				}
				else{
					resultado = numero1 / numero2;
					printf("\n");
					printf("resultado da divisao: %.2f",resultado);
				}
				break;
				
			case 5:
			    printf("\n");
			    printf("Voce escolheu a funcao de expoente.\n");
			    printf("\n");
			    
	    		printf("Digite a base: ");
	    		scanf("%f", &numero1);
	    		printf("");
	    		
	    		printf("Digite o Expoente: ");
	    		scanf("%f", &numero2);
	    		printf("");
	    		
	    		resultado = pow(numero1, numero2);
	    		printf("\n");
	    		printf("Resultado de %.2f elevado a %.2f: %.2f",numero1,numero2,resultado);
	    		break;
			    
			    
			case 6:
			    printf("\n");
			    printf("Voce escolheu a funcao de raiz quadrada.\n");
			    printf("\n");
			    
			    printf("Qual numero voce deseja saber a raiz quadrada?: ");
			    scanf("%f",&numero1);
			    
			    resultado = sqrt(numero1);
			    printf("\n");
			    printf("Raiz quadrada de %.2f é igual a: %.2f \n", numero1, resultado);
			    break;
			    
		    case 7:
			    printf("\n");
			    printf("Voce escolheu a funcao de raiz cubica.\n");
			    printf("\n");
			    
			    printf("Qual numero voce deseja saber a raiz cubica?: ");
			    scanf("%f",&numero1);
			    
			    resultado = cbrt(numero1);
			    printf("\n");
	            printf("Raiz cubica de %.2f é igual a: %.2f \n", numero1, resultado);
			    break;
		    
		    case 8:
		        printf("\n");
		        printf("Voce escolheu a funcao de Seno.\n");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber o Seno?: ");
		        scanf("%f", &numero1);
		        
		        resultado = sin(numero1);
		        printf("\n");
		        printf("Resultado: %f \n", resultado);
		        break;
		        
		    case 9:
		        printf("\n");
		        printf("Voce escolheu a funcao de Cosseno.\n");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber o Coseno?: ");
		        scanf("%f", &numero1);
		        
		        resultado = cos(numero1);
		        printf("\n");
		        printf("Resultado: %f \n", resultado);
		        break;
		        
		    case 10:
		        printf("\n");
		        printf("Voce escolheu a funcao de Tangente.\n");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber a Tangente?: ");
		        scanf("%f", &numero1);
		        
		        resultado = tan(numero1);
		        printf("\n");
		        printf("Resultado da tangente: %f \n", resultado);
		        break;
		    
		    case 11:
		        printf("\n");
		        printf("Voce escolheu a funcao de Arcoseno.");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber o ArcoSeno?: ");
		        scanf("%f", &numero1);
		        
		        if (numero1 <= 1 && numero1 >= -1){
		            resultado = asin(numero1);
		            printf("\n");
		            printf("Resultado de ArcoSeno: %.4f \n", resultado);
		        }
		        else{
		            printf("\n");
		            printf("Nao e possivel saber o arcoseno desse numero.\n");
		        }
		        break;
		        
		    case 12:
		        printf("\n");
		        printf("Voce escolheu a funcao de ArcoCosseno.");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber o ArcoCosseno?: ");
		        scanf("%f", &numero1);
		        
		        if (numero1 <= 1 && numero1 >= -1){
		            resultado = acos(numero1);
		            printf("\n");
		            printf("Resultado de ArcoCosseno: %.4f \n", resultado);
		        }
		        else{
		            printf("\n");
		            printf("Nao e possivel saber o arcoseno desse numero.\n");
		        } 
		        break;
		    
		    case 13:
		        printf("\n");
		        printf("Voce escolheu a funcao de ArcoTangente.");
		        printf("\n");
		        
		        printf("Qual o numero que voce deseja saber o ArcoTangente?: ");
		        scanf("%f", &numero1);
		        
		        resultado = atan(numero1);
		        printf("\n");
	            printf("Resultado de ArcoTangente: %.4f \n", resultado); 
		        break;
		    
		    case 14:
		        printf("\n");
			    printf("Voce escolheu a funcao de Logaritmo Decimal.\n");
			    printf("\n");
			    
			    printf("Logaritmo Decimal de: ");
			    scanf("%f",&numero1);
			    
			    if (numero1 <= 0){
			        printf("\n");
			        printf("Nao e possivel descobrir Logaritmo Decimal de numero negativo ou 0.\n");
			    }
			    else{
			        printf("\n");
			        printf("Resultado: %f", log10(numero1));
			    }
			    break;
			
			case 15:
			    printf("\n");
			    printf("Voce escolheu a funcao de Logaritmo Natural.\n");
			    printf("\n");
			    
			    printf("Logaritmo natural de: ");
			    scanf("%f",&numero1);
			    
			    if (numero1 <= 0){
			        printf("\n");
			        printf("Nao e possivel descobrir Logaritmo natural de numero negativo ou 0.\n");
			    }
			    else{
			        printf("\n");
			        printf("Resultado: %f", log(numero1));
			    }
			    break;
			    
		    case 16:
	            printf("\n");
	            printf("Voce escolheu a funcao de Constante de Euler.\n");
	            printf("\n");
	        
	            printf("Digite quantos termos deseja usar na aproximacao: ");
	            scanf("%d", &termos);
	        
	            for (int i = 0; i < termos; i++) {
	                if (i > 0) numero_fatorial *= i;   
	                euler += 1.0 / numero_fatorial;
	            }
	            printf("\n");
	            printf("Aproximacao da constante de Euler com %d termos: %.15f \n", termos, euler);
	            break;
			    
			case 17:
			    printf("\n");
	            printf("Voce escolheu a funcao Fatorial.\n");
	            printf("\n");
	            
	            printf("Qual numero voce deseja saber o fatorial?: ");
	            scanf("%d", &numero_fatorial);
	        
	            if (numero_fatorial < 0) {
	                printf("\n");
	                printf("Nao existe fatorial de numero negativo.\n");
	            } else {
	                for (int i = 1; i <= numero_fatorial; i++) {
	                    resultado_fatorial *= i;
	                }
	                printf("\n");
	                printf("Fatorial de %d: %lld \n", numero_fatorial, resultado_fatorial);
	            }
	            break;
	            
	        case 18:
	            printf("\n");
	            printf("Voce escolheu a funcao media aritmetica.\n");
	            printf("\n");
	            
	            printf("Qual a quantidade de numeros que voce deseja somar?: ");
	            scanf("%d", &quantidade);
	            
	            if (quantidade <= 0){
	                printf("\n");
	                printf("Digite um numero positivo e maior que 0.\n");
	            }
	            else{
	                for(int i=1; i <= quantidade; i++){
	                    printf("\n");
	                    printf("Digite o %dº numero: ",i);
	                    scanf("%f", &numero1);
	                    soma += numero1;
	                }
	                resultado = soma / quantidade;
	                printf("\n");
	                printf("Media aritmetica: %.2f \n", resultado);
	            }
	            break;
	            
	        case 19:
	            printf("\n");
	            printf("Voce escolheu a funcao de Probabilidade.\n");
	            printf("\n");
	            
	            printf("Digite uma quantidade de de dar certo: ");
	            scanf("%f", &numero1);
	            
	            printf("Digite a quantidade de vezes disponiveis: ");
	            scanf("%f", &numero2);
	            
	            if(numero1 == 0 || numero2 < 0 || numero1 > numero2){
	                printf("\n");
	                printf("Impossivel calcular essa Probabilidade, digite uma Probabilidade correta.\n");
	            }
	            else{
	                resultado = numero1 / numero2;
	                printf("\n");
	                printf("A chance de dar certo e de: %.2f%%", resultado * 100);
	            }
			    break;
			    
		    case 20:
		        printf("\n");
			    printf("Voce escolheu a funcao de Valor Absoluto.\n");
			    printf("\n");
			    
			    printf("Valor Absoluto de: ");
			    scanf("%f",&numero1);
			    
			    resultado = fabs(numero1);
			    printf("\n");
	            printf("Valor absoluto de %.2f é %.2f\n", numero1, resultado);
			    break;
			    
		    case 21:
		        printf("\n");
		        printf("Voce escolheu a funcao de Hipotenusa.\n");
		        printf("\n");
		        
		        printf("Digite o 1º cateto: ");
		        scanf("%f", &numero1);
		        
		        printf("Digite o 2º cateto: ");
		        scanf("%f", &numero2);
		        
		        resultado = sqrt(pow(numero1,2)+pow(numero2,2));
		        printf("\n");
		        printf("Hipotenusa: %.2f", resultado);
		        break;
		        
		    case 22:
		        printf("\n");
		        printf("Voce escolheu a funcao potencia de 10.\n");
		        printf("\n");
		        
		        printf("Digite o expoente: ");
		        scanf("%f", &numero1);
		        
		        resultado = pow(10,numero1);
		        printf("\n");
		        printf("10 elevado a %.2f e igual a: %.2f", numero1, resultado);
		        break;
		        
		    case 23:
	            printf("\n");
	            printf("Voce escolheu a funcao Hiperbolica Seno.\n");
	            printf("\n");
	            
	            printf("Digite o numero: ");
	            scanf("%f", &numero1);
	            
	            resultado = sinh(numero1);
	            printf("\n");
	            printf("Hiperbolica do Seno %.2f= %.4f\n", numero1, resultado);
	            break;
	        
	        case 24:
	            printf("\n");
	            printf("Voce escolheu a funcao Hiperbolica Cosseno.\n");
	            printf("\n");
	            
	            printf("Digite o numero: ");
	            scanf("%f", &numero1);
	            
	            resultado = cosh(numero1);
	            printf("\n");
	            printf("Hiperbolica do Cosseno %.2f = %.4f\n", numero1, resultado);
	            break;
	        
	        case 25:
	            printf("\n");
	            printf("Voce escolheu a funcao Hiperbolica Tangente.\n");
	            printf("\n");
	            
	            printf("Digite o numero: ");
	            scanf("%f", &numero1);
	            
	            resultado = tanh(numero1);
	            printf("\n");
	            printf("Hiperbolica da Tangente %.2f = %.4f\n", numero1, resultado);
	            break;

            default:
                printf("\n");
                printf("Opcao invalida! Tente novamente.");
                printf("\n");
        }
        printf("\n");
        printf("Pressione ENTER para voltar ao menu...");
        printf("\n");
        getchar(); 
        getchar();

    } while (escolha != 0);

    return 0;
}
