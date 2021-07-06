# push_swap

\[ITA\]
Dopo aver letto un (bel) pò di documentazione su algoritmi di ordinamento, molti approcci di risoluzione del problema,
aver riscritto diverse volte molte funzioni, ho deciso di strutturare l'algoritmo in modo che potesse rispondere perfettamente alle
richieste della correzzione, andandomi a gestire i diversi casi:
- Per 3 elementi confronto in modo diretto tre numeri e poi decido le mosse per metterli nelle posizioni corrette.
- per 5 elementi, rimuovo i primi due elementi nello stack_b, svolgo l'ordimaneto per 3 elementi per poi reinserire nella posizione
  corretta i due elementi che avevo rimosso.
- per 100 numeri, vado ad ordinare lo stack per intervalli, nello specifico tre, ovvero seleziono l'intervallo di numeri più basso,
  lo metto nello stack_b e poi in base alla posizione del più grande e del più piccolo elemento che si trova in stack_b, l'algoritmo 
  sposta quello che richiede meno mose da spostare. A causa delle molte mosse di scorrimento dello stack per andare a prendere gli
  elementi di stack_a e metterli in stack_b, l'algoritmo richiede parecchie mosse, tra le 700 e le 850, non ottenendo dunque il 
  punteggio massimo.
- per 500 elementi svolgo lo stesso algoritmo per l'ordimaneto di 100 valori, andando a selezionare invece 5 intervalli. Anche in
  questo caso il numero di mosse (tra le 6500 e le 7500) non permette di prendere il punteggio massimo.

\[Post_Evaluation\] la valutazione di [Damiano](https://github.com/demian2435) è stata molto d'aiuto, perchè mi ha permesso di capire come non devessi gestire l'ordinamento
con le mosse singoli, ma che il progetto era da impostare con le mosse doppie, perche in tal modo avrei dimezzato direttamnte il 
numero di mosse impiegate.

\[ENG\]
This repo contains my work on the 42's project about the sorting of a stack. You can find more detail in the file subject.

After reading a lot on sorting algoritm and stacks, it seemed more natural sort the stack by ranges. So for the 100 number, 
I determine 3 ranges and for 500 number or more 6 ranges. I push the range of number that has to be sorted in the stack_b,
search for the smallest and the highest position and find out which one is better to be push back to stack_a, and do this for
all the ranges.
