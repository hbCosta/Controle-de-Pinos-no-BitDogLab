# Controle-de-Pinos-no-BitDogLab


Este projeto implementa um programa em C para controlar LEDs e um buzzer conectados a uma Raspberry Pi Pico. O código utiliza a biblioteca pico/stdlib.h para manipular os pinos GPIO, permitindo o acionamento de LEDs de diferentes cores e a geração de sons no buzzer.
## Funcionalidades
O programa oferece as seguintes funcionalidades:

  - Controle de LEDs:
    - Acionar LEDs individuais: vermelho, verde e azul.
    - Ligar todos os LEDs simultaneamente.
    - Desligar todos os LEDs.
  - Controle do buzzer:
    - Gerar som com frequência e duração especificadas.
## Hardware Necessário
Raspberry Pi Pico.
- LEDs:
  - Vermelho conectado ao pino GPIO 13.
  - Verde conectado ao pino GPIO 11.
  - Azul conectado ao pino GPIO 12.
  - Buzzer conectado ao pino GPIO 21.
  - Resistores para os LEDs.

## Ferramentas e Tecnologias Utilizadas
Para o desenvolvimento e execução deste projeto, utilizamos as seguintes ferramentas e tecnologias:

- Linguagem C: Utilizei a linguagem C porque era um dos requisitos da tarefa e por ela ser uma linguagem eficiente e integração direta com o hardware da Raspberry Pi Pico.
- VS Code (Visual Studio Code): escolhi o VsCode como ambiente de desenvolvimento porque ele é poderoso e personalizável, podendo ser  usado para escrever, editar e compilar o código do projeto. E tem suporte adicional com extensões que foram importantes para completar essa tarefa.
- Simulador Wokwi: Ferramenta de simulação de hardware que permite testar o funcionamento do código sem a necessidade de um hardware físico, agilizando o processo de prototipagem.
- PuTTY: Um cliente de terminal usado para comunicação serial com a Raspberry Pi Pico, permitindo o monitoramento em tempo real, testes interativos e depuração do programa diretamente no hardware.
- Biblioteca pico/stdlib.h: Utilizada para manipulação dos pinos GPIO da Raspberry Pi Pico, fornecendo suporte para a inicialização e controle de dispositivos conectados, como LEDs e buzzer.
Combinando essas ferramentas, foi possível criar um ambiente de desenvolvimento robusto, que permitiu tanto a simulação quanto a interação direta com o hardware real.

## Instruções de Uso

### 1. Clonar o Repositório

Primeiro, clone o repositório para sua máquina utilizando o seguinte comando:

```bash
git clone https://github.com/hbCosta/Controle-de-Pinos-no-BitDogLab.git
```

### 2. Abrir o Projeto no VSCode com Extensão Raspberry Pi Pico

1. Abra o Visual Studio Code.
2. Instale a **extensão Raspberry Pi Pico** no VSCode, caso ainda não tenha feito isso. Para isso:
   - Vá até a aba de extensões do VSCode (ícone de quadrado no painel lateral esquerdo).
   - Pesquise por "**Raspberry Pi Pico**" e instale a extensão oficial.
   
3. Após instalar a extensão, abra o projeto clonado:
   - Vá em **File > Open Folder...** e selecione a pasta do projeto clonado.

### 3. Compilar o Projeto

1. Com o projeto aberto, localize o botão "Compile" na parte inferior da tela do VSCode (onde está o terminal).
2. Clique em **Compile** para compilar o código. O VSCode irá processar o código e gerar o arquivo `.uf2`.

### 4. Transferir o Arquivo `.uf2` para a Raspberry Pi Pico

1. No explorador de arquivos da sua máquina, navegue até a pasta onde o arquivo `.uf2` foi gerado após a compilação.
2. Conecte sua Raspberry Pi Pico ao computador. Ela aparecerá como um dispositivo de armazenamento removível.
3. Arraste o arquivo `.uf2` gerado para a pasta da Raspberry Pi Pico (ela aparecerá como um dispositivo de armazenamento no seu sistema).
   
   - A Raspberry Pi Pico será reiniciada automaticamente após a transferência do arquivo.

### 5. Utilizar o Projeto com PuTTY

1. Abra o **PuTTY** em seu computador.
2. Conecte-se à Raspberry Pi Pico utilizando a porta serial correspondente (por exemplo,  `COMx` no Windows).
4. Após a conexão ser estabelecida, você verá o terminal no PuTTY. Agora, você pode usar o terminal para interagir com o projeto, controlando os LEDs e o buzzer conforme as entradas fornecidas (ver comandos no README).

### Comandos de Controle:

- **'v'**: Ligar LED vermelho por 1 segundo.
- **'g'**: Ligar LED verde por 1 segundo.
- **'a'**: Ligar LED azul por 1 segundo.
- **'t'**: Ligar todos os LEDs.
- **'o'**: Desligar todos os LEDs.
- **'s'**: Tocar som no buzzer.

### Pronto!

Agora você pode controlar os LEDs e o buzzer na sua Raspberry Pi Pico diretamente do terminal usando o PuTTY.
