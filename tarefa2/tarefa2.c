#include <stdio.h>
#include "pico/stdlib.h"

#define LED_VERMELHO 13
#define LED_VERDE 11
#define LED_AZUL 12

#define BUZZER 21

void iniciar_Leds(){
  gpio_init(LED_VERMELHO);
  gpio_init(LED_VERDE);
  gpio_init(LED_AZUL);

  gpio_set_dir(LED_VERMELHO, GPIO_OUT);
  gpio_set_dir(LED_VERDE, GPIO_OUT);
  gpio_set_dir(LED_AZUL, GPIO_OUT);
}

void iniciar_buzzer(){
  gpio_init(BUZZER);
  gpio_set_dir(BUZZER, GPIO_OUT);
}


// Função para gerar som com uma frequência específica
void tocar_som(uint buzzer_pin, uint frequencia, uint duracao_ms) {
    uint periodo_us = 1000000 / frequencia; // Período em microssegundos

    uint metade_periodo = periodo_us / 2;   // Meio período para alternar o estado
    uint ciclos = (frequencia * duracao_ms) / 1000; // Quantos ciclos gerar no tempo

    for (uint i = 0; i < ciclos; i++) {
        gpio_put(buzzer_pin, 1); // Liga o buzzer
        sleep_us(metade_periodo);

        gpio_put(buzzer_pin, 0); // Desliga o buzzer
        sleep_us(metade_periodo);
    }
}


void desligar_todos_leds() {
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_VERDE, 0);
    gpio_put(LED_AZUL, 0);
}


void ligar_led_por_tempo(uint led_pin, uint tempo_ms) {
    gpio_put(led_pin, 1);  // Liga o LED
    sleep_ms(tempo_ms);    // Aguarda pelo tempo especificado
    gpio_put(led_pin, 0);  // Desliga o LED
}


int main() {
  stdio_init_all();
  iniciar_Leds();
  iniciar_buzzer();

  char entrada;
  printf("\nControle de LEDs e Buzzer\n");
  printf("Entradas:\n");
  printf("'v' - Ligar LED vermelho\n");
  printf("'g' - Ligar LED verde\n");
  printf("'a' - Ligar LED azul\n");
  printf("'t' - Ligar todos os LEDs\n");
  printf("'o' - Desligar todos os LEDs\n");
  printf("'s' - Tocar som no buzzer\n");



  while (true) {
    
    printf("Digite alguma entrada: ");
    entrada = getchar();
    getchar(); 
    switch (entrada) {
      case 'v':
          ligar_led_por_tempo(LED_VERMELHO, 1000); // Liga o LED por 1 segundo
          printf("LED vermelho ligado\n");
          break;
      case 'g':
          ligar_led_por_tempo(LED_VERDE, 1000); // Liga o LED por 1 segundo
          printf("LED verde ligado\n");
          break;
      case 'a':
          ligar_led_por_tempo(LED_AZUL, 1000); // Liga o LED por 1 segundo
          printf("LED azul ligado\n");
          break;
      case 't':
          gpio_put(LED_VERMELHO, 1);
          gpio_put(LED_VERDE, 1);
          gpio_put(LED_AZUL, 1);
          printf("Todos os LEDs ligados\n");
          break;
      case 'o':
          desligar_todos_leds();
          printf("Todos os LEDs desligados\n");
          break;
      case 's':
          printf("Tocando som no buzzer\n");
          tocar_som(BUZZER, 1000, 2000); // 1000 Hz por 500 ms
          break;
      default:
          printf("Entrada invalida\n");
      }
    sleep_ms(100);
  }
  return 0;
}