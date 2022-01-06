
//  Created by Kuba Makowiecki on 06/11/2021.
//
#include <iostream>
#include <cstring>
#include <cstdio>
 
int main(int argc, const char * argv[]) {

    
    //wczytanie ilości zestawów
            int t;
            std::scanf("%d",&t);
 
 //pętla wykonująca się t razy - jest minimalnie szybsza od for(int i=t; i>0; i--)
    while(t--)
        {
            char queue[1000000];
            std::scanf("%s", &queue);
            
            //std::strlen(); mierzy długość ciągu <cstring>;
            int size = std::strlen(queue);
            
            //ostatnia szufladka w tablicy
            int max = queue[size-1];
 
            //pętla wykonująca się OD TYŁU tzn. od ostatniej szufladki [size-1] poniewaz liczymy od 0;
            for(int i = size - 1; i > 0; i-- )
            {
                //jeśli znak leżący na lewo od ostatniej szufladki jest mniejszy od wartości ostatniej szufladki przypisujemy mu wartośc 0, w domyśle usuwamy;
                if(queue[i-1] < max)
                    queue[i-1]=0;
 
                //jeśli znak na lewo od ostatniej szufladki jest większy od wartości ostatniej szufladki jest to zgodne z założeniem sortowania, więc zostawiamy na miejscu znak w ostatniej szufladce, a kolejne znaki na lewo będziemy już porównywać z nowym, większym znakiem -> i-1;
                else if ( queue[i-1] > max)
                    max = queue[i-1];
            }
            
            //wyświetlanie finalnej kolejki
                for(int x=0; x < size; x++)
                {
                    //jest pomijany gdy queue[x] ma wartosc 0, chcemy pominąć 0 podczas wyświetlania, ponieważ wcześniej zamienialiśmy wartości szufladek mniejszych na 0;
                    if(queue[x])
                    std::printf("%c", queue[x]);
 
                }
            std::printf("\n");
 
        }
 
        return 0;
    }
//program działa i jest akceptowany na SPOJu z wykorzystaniem scanf(); i printf();, z użyciem cin/cout oraz wyłączeniem synchronizacji strumieni przekracza limit czasu;
