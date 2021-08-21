# lampada_magica
ARDUINO:  fa lampeggiare i 3 led se tocchi il sensore capacitivo per più di 3 secondi

## Schema circuito

![schema](https://github.com/bugster86/lampada_magica/blob/main/lampada%20magica.png)

## Lista materiale
![schema](https://github.com/bugster86/lampada_magica/blob/main/lista%20materiali.png)

## Collegamenti con arduino

- Dal pin GND di arduino collegare un filo fino alla prima colonna "-" (meno della breadboard) .
- Dalla prima colonna "-" (meno) della breadboard collegare la seconda colonna "-" (meno) .
- Dal pin digitale 10 di arduino collegare un filo in posizione 10a
- Dal pin digitale 11 di arduino collegare un filo in posizione 6a
- dal pin digitale 12 di arduino collegare un filo in posuzione 2a
- collocare il led blu in posizione 2g/1g (anodo in 2g)
- collocare il led rosso in posizione 6g/5g (anodo in 6g)
- collocare il led verde in posizione 10g/9g (anodo in 9g)
- collegare la posizione 1j a GND
- collegare la posizione 5j a GND
- collegare la posizione 9j a GND
- collegare un resistore da 220Ω tra le posizioni 2b/2f
- collegare un resistore da 220Ω tra le posizioni 6b/6f
- collegare un resistore da 220Ω tra le posizioni 10b/10f
- collegare un resistore da 1MΩ tra le posizioni 21b/25b
- collegare un filo dal pin digitale 2 arduino alla posizione 25c
- collegare un filo dal pin digitale 4 arduino alla posizione 21c
- collegare un filo dalla posizione 25e e collegarlo ad un pezzo di alluminio (nello schema è indicato un connettore ad 8 pin ma è solo per far vedere la presenza del filo)