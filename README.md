# Controle-de-Pinos-no-BitDogLab


Este projeto implementa um programa em C para controlar LEDs e um buzzer conectados a uma Raspberry Pi Pico. O código utiliza a biblioteca pico/stdlib.h para manipular os pinos GPIO, permitindo o acionamento de LEDs de diferentes cores e a geração de sons no buzzer.
# Funcionalidades
O programa oferece as seguintes funcionalidades:

  - Controle de LEDs:
    - Acionar LEDs individuais: vermelho, verde e azul.
    - Ligar todos os LEDs simultaneamente.
    - Desligar todos os LEDs.
  - Controle do buzzer:
    - Gerar som com frequência e duração especificadas.
# Hardware Necessário
Raspberry Pi Pico.
- LEDs:
  - Vermelho conectado ao pino GPIO 13.
  - Verde conectado ao pino GPIO 11.
  - Azul conectado ao pino GPIO 12.
  - Buzzer conectado ao pino GPIO 21.
  - Resistores para os LEDs.

# Ferramentas e Tecnologias Utilizadas
Para o desenvolvimento e execução deste projeto, utilizamos as seguintes ferramentas e tecnologias:

- Linguagem C: Utilizei a linguagem C porque era um dos requisitos da tarefa e por ela ser uma linguagem eficiente e integração direta com o hardware da Raspberry Pi Pico.
- VS Code (Visual Studio Code): escolhi o VsCode como ambiente de desenvolvimento porque ele é poderoso e personalizável, podendo ser  usado para escrever, editar e compilar o código do projeto. E tem suporte adicional com extensões que foram importantes para completar essa tarefa.
- Simulador Wokwi: Ferramenta de simulação de hardware que permite testar o funcionamento do código sem a necessidade de um hardware físico, agilizando o processo de prototipagem.
- PuTTY: Um cliente de terminal usado para comunicação serial com a Raspberry Pi Pico, permitindo o monitoramento em tempo real, testes interativos e depuração do programa diretamente no hardware.
- Biblioteca pico/stdlib.h: Utilizada para manipulação dos pinos GPIO da Raspberry Pi Pico, fornecendo suporte para a inicialização e controle de dispositivos conectados, como LEDs e buzzer.
Combinando essas ferramentas, foi possível criar um ambiente de desenvolvimento robusto, que permitiu tanto a simulação quanto a interação direta com o hardware real.
