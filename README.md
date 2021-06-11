# push_swap

[ITA]
Dopo aver letto un (bel) pò di documentazione su algoritmi di ordinamento, molti approcci di risoluzione del problema,
aver riscritto diverse volte molte funzioni, ho deciso di seguire la linea di pensiero comune a molti ragionamenti di risoluzione,
ovvero gestire caso per caso, in base al numero di elementi dati in input. In fase di correzione si evince infatti che sono ammessi
un numero massimo di mosse per alcuni casi:
- 3 mosse per 3 elementi;
- 12 mosse per 5 elementi;
- tra 700 e 1500 mosse per 100 elementi;
- tra 5500 e 11500 mosse per 500 elementi;

Perciò ho deciso di getire diversamente le 4 casistiche.
- Per 3 elementi confronto i tre numeri tra loro e da ciò deriva lo spostamento che devo applicare
- per 5 elementi, rimuovo i primi due elementi nello stack_b, svolgo l'ordimaneto per 3 elementi per poi reinserire nella posizione
  corretta i due elementi che avevo rimosso.
- per 100 numeri, vado ad ordinare lo stack per intervalli, nello specifico tre, ovvero seleziono l'intervallo di numeri più basso,
  lo metto nello stack_b e poi in base alla posizione del più grande e del più piccolo elemento che si trova in stack_b, l'algoritmo 
  sposta quello che richiede meno mose da spostare. A causa delle molte mosse di scorrimento dello stack per andare a prendere gli
  elementi di stack_a e metterli in stack_b, l'algoritmo richiede parecchie mosse, tra le 700 e le 850, non ottenendo dunque il 
  punteggio massimo.
- per 500 elementi svolgo lo stesso algoritmo per l'ordimaneto di 100 valori, andando a selezionare invece 5 intervalli. Anche in
  questo caso il numero di mosse (tra le 6500 e le 7500) non permette di prendere il punteggio massimo.

Date le premesse, prevedo che il mio progetto, ad oggi non ancora consegnato, non riuscirebbe a totalizzare il 100$, ma qualcosa in meno.


[ENG]
This repo contains my work on the 42's project about the sorting of a stack. You can find more detail in the file subject.

After reading a lot on sorting algoritm and stacks, it seemed more natural sort the stack by ranges. So for the 100 number, 
I determine 3 ranges and for 500 number or more 6 ranges. I push the range of number that has to be sorted in the stack_b,
search for the smallest and the highest position and find out which one is better to be push back to stack_a, and do this for
all the ranges.

My project has not been rated yet, but reading the evaluation I think that will not take the 100%, due to the excessive number of moves.
