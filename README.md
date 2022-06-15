# Arduino_Krmiljenje_ventilacije_prostora

## Navodila projektne naloge

Ob vklopu stikala 1 naj se ventilacija (motorček preko tranzistorja) vključi in obratno. Način delovanja ventilacije pa lahko izbiramo s stikalom 2, in sicer: AVTOMATSKO delovanje glede na višino temperature (višja temperatura - hitrejše vrtenje ventilatorja - uporabite termistor) ter ROČNO upravljanje z zveznim spreminjanjem hitrosti ventilatorja (s potenciometrom). Za preklop med avtomatskim in ročnim delovanjem uporabite stikalo 2; ob izklopu stikala 2 naj deluje ventilacija ročno, sicer pa avtomatsko. Poleg tega dodajte še LED diodi: Rdeča za signalizacijo ROČNO in zelena za AVTOMATSKO. Ob izklopu ventilacije se izklopita obe LED. 

## Kosovnica

 ```javascript
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
 ```

## Uporaba

```javascript
1. Priredbeni seznam

2. Vžig ventilatorja

3. Nastavljanje ročnega ali avtomatičnega ventilatorja
  * Ko vklopimo ventilator imamo opcijo med Ročno in Avtomatsko nastavljanje temparature. Z uporabno stikala lahko premikamo levo in desno, kjer izbiramo med ročno in avtomatsko nastavitev.

4. Nastavljanje temparature
* Če sveti rdeča LED pomeni, da smo izbrali ROČNO nastavitev, katero upraljamo z potenciometrom in s tem nastavljamo moč motorja in temparaturo,
* če sveti zelena LED pomeni, da smo izbralni AVTOMATSKO nastavitev, katera se samodejno upravlja z uporabo termistorja, kjer glede na temparaturo nastavlja moč ventilatorja in temparaturo.

5. Fritzing skematika in breadboard 

6. Fotografije in video


7. Komentarji, pripombe in izoljšava
* Termistor ni najbolj natančen saj je najbolj osnoven a za uporabo je delujoč,
* Najbolje bi bilo, če bi dodali LCD zaslon, kjer bi se izpisovala temparatura in katero nastavitev smo izbrali.
```
         
