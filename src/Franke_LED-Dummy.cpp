//============================================================================
// Name        : Franke_LED-Dummy.cpp
// Author      : Armin 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <cstring>  // memset
#include <stdio.h>  // printf
using namespace std;


#define NUM_LED 80

char gcNumLED[NUM_LED];

void initArray(){
  memset(gcNumLED,'.',sizeof(gcNumLED));

}

void ShiftArraycontent(){
  // Array[0] -> Array[1]
  // Array[1] -> Array[2]
  //...
  // Array[n-1] -> Array[n]
  // Array[n] -> Dieser wert fällt am ende heraus
  // Von hinten beginnend...

  for(int iShift = sizeof(gcNumLED)-1; iShift > 0 ; iShift --) {

    unsigned int uiVorherigesFeld = iShift-1;
    unsigned int uiAktuellesFeld = iShift;

    // TODO: Ich glaube ich habe hier einen Denkfehler gemacht...
    gcNumLED[uiVorherigesFeld] = gcNumLED[uiAktuellesFeld];
    //gcNumLED[uiVorherigesFeld] = gcNumLED[uiAktuellesFeld];
  }

  // TODO: Irgendwas habe ich hier noch vergessen, aber ich weiß nicht was...



}

void PrintArray(){

// TODO: Zeilennummern waeren hier super praktisch
// TODO: Wie wäre es mit einer unterteilung in 10ner oder 5er Bloecke?
  for(unsigned int i= 0; i < sizeof(gcNumLED) ; i++){
    printf("%c",gcNumLED[i]);
  }

  // TODO: Fuer was habe ich nichmal das folgende geschrieben?
  printf("\n");

}


int main() {

  initArray();

  // Was macht diese Zeile?
  gcNumLED[0] = '!';
  // Was macht diese Zeile?
  gcNumLED[sizeof(gcNumLED)-1] = '#';


  // TODO: Ich habe hier einfach mal geraten wie oft ich diese funktion aufgerufen habe...
  for(int i = 40; i > 0 ; i--){

    PrintArray();
    ShiftArraycontent();

  }


	return 0;
}

/*
 * So soll es am Ende aussehen...
 *
!..............................................................................#
.!..............................................................................
..!.............................................................................
...!............................................................................
....!...........................................................................
.....!..........................................................................
......!.........................................................................
.......!........................................................................
........!.......................................................................
.........!......................................................................
..........!.....................................................................
...........!....................................................................
............!...................................................................
.............!..................................................................
..............!.................................................................
...............!................................................................
................!...............................................................
.................!..............................................................
..................!.............................................................
...................!............................................................
....................!...........................................................
.....................!..........................................................
......................!.........................................................
.......................!........................................................
........................!.......................................................
.........................!......................................................
..........................!.....................................................
...........................!....................................................
............................!...................................................
.............................!..................................................
..............................!.................................................
...............................!................................................
................................!...............................................
.................................!..............................................
..................................!.............................................
...................................!............................................
....................................!...........................................
.....................................!..........................................
......................................!.........................................
.......................................!........................................
........................................!.......................................
.........................................!......................................
..........................................!.....................................
...........................................!....................................
............................................!...................................
.............................................!..................................
..............................................!.................................
...............................................!................................
................................................!...............................
.................................................!..............................
..................................................!.............................
...................................................!............................
....................................................!...........................
.....................................................!..........................
......................................................!.........................
.......................................................!........................
........................................................!.......................
.........................................................!......................
..........................................................!.....................
...........................................................!....................
............................................................!...................
.............................................................!..................
..............................................................!.................
...............................................................!................
................................................................!...............
.................................................................!..............
..................................................................!.............
...................................................................!............
....................................................................!...........
.....................................................................!..........
......................................................................!.........
.......................................................................!........
........................................................................!.......
.........................................................................!......
..........................................................................!.....
...........................................................................!....
............................................................................!...
.............................................................................!..
..............................................................................!.
...............................................................................!
*/
