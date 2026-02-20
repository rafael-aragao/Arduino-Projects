🚦 Semáforo Inclusivo – Sistema Inteligente de Travessia com Sinal Sonoro (Arduino)

O Semáforo Inclusivo é um sistema inteligente de sinalização para pedestres desenvolvido com Arduino que utiliza sinalização luminosa (LEDs) e sinalização sonora (buzzer) para auxiliar especialmente pessoas com deficiência visual na travessia segura de vias públicas.

O sistema reproduz o funcionamento de um semáforo real, acrescentando alertas sonoros diferenciados para cada estado do sinal, promovendo acessibilidade, inclusão e segurança urbana.

📌 Descrição

O sistema é composto por três LEDs (vermelho, amarelo e verde) que representam os estados tradicionais do semáforo, associados a um buzzer, responsável por emitir sinais sonoros específicos.

Durante o funcionamento:

No sinal vermelho, o sistema permanece em silêncio, indicando parada.

No sinal amarelo, o buzzer emite bipes lentos, alertando sobre a transição.

No sinal verde, o buzzer emite bipes rápidos, indicando que o pedestre pode atravessar a via com segurança.

Essa abordagem permite que pessoas com deficiência visual identifiquem o estado do semáforo apenas pelo som, tornando o sistema inclusivo.

O projeto possui caráter educacional, social e demonstrativo, sendo ideal para aplicações em robótica educacional, cidadania digital, acessibilidade urbana e projetos alinhados à BNCC.

🎯 Objetivo

Desenvolver um semáforo inclusivo com sinalização sonora

Auxiliar pessoas com deficiência visual na travessia de ruas

Trabalhar conceitos de:

Automação com Arduino

Sinalização luminosa e sonora

Lógica sequencial e temporização

Acessibilidade e tecnologia assistiva

Cidadania e inclusão social

🌍 Objetivos de Desenvolvimento Sustentável (ODS)

Este projeto está alinhado aos seguintes Objetivos de Desenvolvimento Sustentável da ONU:

♿ ODS 3 – Saúde e Bem-Estar

Promove segurança e prevenção de acidentes no trânsito.

🏙️ ODS 11 – Cidades e Comunidades Sustentáveis

Contribui para o desenvolvimento de cidades mais acessíveis e inclusivas.

🏗️ ODS 9 – Indústria, Inovação e Infraestrutura

Utiliza tecnologia simples e acessível para solucionar problemas urbanos reais.

🧰 Componentes Utilizados

Arduino Uno ou Arduino Nano

LED Vermelho

LED Amarelo

LED Verde

Buzzer

Resistores (220Ω)

Jumpers

Protoboard

🔌 Esquema de Conexões
LEDs

LED Vermelho → Pino D8 (via resistor)

LED Amarelo → Pino D9 (via resistor)

LED Verde → Pino D10 (via resistor)

Atuador Sonoro

Buzzer → Pino D11

Todos os GND → GND do Arduino

⚙️ Funcionamento

O Arduino inicia o sistema e configura os pinos.

O LED vermelho é acionado, indicando parada.

O sistema muda para o LED amarelo, emitindo bipes lentos.

O LED verde é acionado, emitindo bipes rápidos, indicando travessia liberada.

O ciclo se repete continuamente.

As mensagens de estado são exibidas no Monitor Serial.

▶️ Como Executar

Monte o circuito conforme o esquema de conexões

Abra o arquivo .ino na Arduino IDE

Selecione:

Placa: Arduino Uno ou Arduino Nano

Processador: ATmega328P (se Nano)

Conecte o Arduino ao computador

Faça o upload do código

Abra o Monitor Serial (9600 baud)

Observe os LEDs e os sinais sonoros

Teste a identificação do semáforo apenas pelo som

🧠 Possíveis Aplicações

Educação para o trânsito

Robótica educacional inclusiva

Projetos de acessibilidade urbana

Maquetes de cidades inteligentes

Feiras de ciência e tecnologia

Itinerários formativos (BNCC)

🚀 Possíveis Melhorias

Botão de pedestre

Sons diferenciados usando tone()

Ajuste automático do tempo de travessia

Modo noturno

Display informativo

Integração com sensores de presença

👨‍🏫 Autor

Rafael Aragão
Professor de Robótica Educacional

🔗 LinkedIn: https://www.linkedin.com/in/aragao-rafael/
