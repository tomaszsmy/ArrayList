# ArrayList
Generyczna implementacja ArrayList

# Konstruktory
`
ArrayList()   
`    tworzy pustą listę o pojemności początkowej 10,

`
ArrayList(int factor)  
` 
 tworzy listę o podanej pojemności, minimum 1, <br>
 
 `
ArrayList(int factor, T value)  
` 
 tworzy listę o podanej pojemności, minimum 1, wypełnioną wartoścami typu T <br>
 
 `
ArrayList(const ArrayList &copy) 
` 
 konstruktor kopiujący.

# Metody 

 `
void add(T value) 
` 
 dodanie wartości typu T do listy,
 
  `
bool set(int index, T value)
` 
zmiana wartości pod indeksem, indeks musi mieścic się w zakresie od 0 do (rozmiar-1),

 `
int Size()
` 
zwraca rozmiar listy,

 `
T get(int index)
` 
zwraca wartość typu T z podanego indeksu,

 `
bool remove(int index)
` 
usuwa wartość spod podanego indeksu,

 `
void clear()
` 
usuwa wszystkie elementy z listy,

 `
bool isEmpty()
` 
sprawdza czy lista jest pusta

 `
T *toArray()
` 
zwraca tablicę typu T,

 `
void shuffle()
` 
ustawia elementy listy w losowej kolejności,

`
void reverse()
` 
odwraca kolejność elementów w liście,

`
bool removeRange(int start, int stop)
` 
usuwa elementy z podanego zakresu,

`
int searchElement(T value)
` 
zwraca indeks pod jakim znajduje się dana wartość/obiekt,

`
bool contains(T value)
` 
sprawdza czy wartość znajduje się w liście,

`
void removeDuplicates()
` 
usuwa duplikaty z listy.

