# Arduino_Krmiljenje_ventilacije_prostora

## Navodila projektne naloge

Ob vklopu stikala 1 naj se ventilacija (motorček preko tranzistorja) vključi in obratno. Način delovanja ventilacije pa lahko izbiramo s stikalom 2, in sicer: AVTOMATSKO delovanje glede na višino temperature (višja temperatura - hitrejše vrtenje ventilatorja - uporabite termistor) ter ROČNO upravljanje z zveznim spreminjanjem hitrosti ventilatorja (s potenciometrom). Za preklop med avtomatskim in ročnim delovanjem uporabite stikalo 2; ob izklopu stikala 2 naj deluje ventilacija ročno, sicer pa avtomatsko. Poleg tega dodajte še LED diodi: Rdeča za signalizacijo ROČNO in zelena za AVTOMATSKO. Ob izklopu ventilacije se izklopita obe LED. 

## Kosovnica

 * 1x Arduino UNO
 * 1x Bread board
 * 1x rdeča LED
 * 1x zelena LED
 * 1x potenciometer
 * 1x termistor
 * 1x tipka
 * 1x stikalo
 * 2x 220Ω upor
 * 2x 1kΩ upor
 * 1x motor
 * 1x NPN tranzistor
 * 1x dioda
 

## Uporaba

1. Priredbeni seznam

1.1 Vhodi


| Oznaka v načrtu  | Naslovna operanda | Vrsta kontakta| Opis          |
| ---------------- | ----------------- | ------------- | ------------- |
| Stikalo1         | X1                | N.O.          | Prižge se in ugasne              |
| Stikalo2         | X2                | N.O.          | Menja med avtomatsko in ročno              |
| Termistor        | X3                | / Analogno    | Določa vrtenje motorja glede na temp.              |
| Potenciometer    | X4                | / Analogno    | Ročno upravljanje hitrosti              |


1.2 Izhodi


| Oznaka v načrtu  | Naslovna operanda | Aktiven pri   | Pomen         |
| ---------------- | ----------------- | ------------- | ------------- |
| Motor            | Y1                | 1             | Motor se vrti |
| LED 1            | Y2                | 1             | Rdeča sveti, pomeni ročno             |
| LED 2            | Y3                | 1             | Zelena sveti, pomeni avtomatsko             |



2. Vžig ventilatorja

| Stikalo          |                   |
| ---------------- | ----------------- |
| On               | Motor je prižgan in se vrti glede na nastavitev|
| Off              | Motor je ugasjen in čaka na prižig              |


3. Nastavljanje ročnega ali avtomatičnega ventilatorja
  * Ko vklopimo ventilator imamo opcijo med Ročno in Avtomatsko nastavljanje temparature. Z uporabno stikala lahko premikamo levo in desno, kjer izbiramo med ročno in avtomatsko nastavitev.

4. Nastavljanje temparature
 * Če sveti rdeča LED pomeni, da smo izbrali ROČNO nastavitev, katero upraljamo z potenciometrom in s tem nastavljamo moč motorja in temparaturo,
 * če sveti zelena LED pomeni, da smo izbralni AVTOMATSKO nastavitev, katera se samodejno upravlja z uporabo termistorja, kjer glede na temparaturo nastavlja moč ventilatorja in temparaturo.


5. Fritzing skematika in breadboard 

![Screenshot_2022-06-08_at_12 00 43](https://user-images.githubusercontent.com/83011636/173894484-e0905f02-1b4c-46c7-b808-402e930cdcde.png)
![Screenshot_2022-06-08_at_11 29 35](https://user-images.githubusercontent.com/83011636/173894492-ecda2833-286b-4223-b37a-82e27f5f0ef5.png)


6.  Video

https://user-images.githubusercontent.com/83011636/173894519-7c3810bd-5cf2-4146-b037-c60caeef03f3.mp4

7. Komentarji, pripombe in izoljšava
 * Termistor ni najbolj natančen saj je najbolj osnoven a za uporabo je delujoč,
 * Najbolje bi bilo, če bi dodali LCD zaslon, kjer bi se izpisovala temparatura in katero nastavitev smo izbrali.

8. Avtorja in mentor
* Dominik Janc
* Mark Uranič
* Mentor: Vasja Markič
         
