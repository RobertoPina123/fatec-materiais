#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define DIAMONDS  "♦"
#define CLUBS     "♣"
#define SPADES    "♠"
#define HEARTS    "♥"

const string suits[] = { DIAMONDS, CLUBS, SPADES, HEARTS };
const string labels[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

int encode_label(const string &label) {
  for (int i = 0; i < 13; i++) {
    if (labels[i] == label) {
      return i;
    }
  }
  return -1;
}

int encode_suit(const string &suit) {
  for (int i = 0; i < 4; i++) {
    if (suits[i] == suit) {
      return i;
    }
  }
  return -1;
}

string decode_label(int code) {
  return labels[code/10-1];
}

string decode_suit(int code) {
  return suits[code%10];
}

int get_code_card(int code) {
  return code / 10;
}

int get_code_suit(int code) {
  return code % 10;
}

void create_deck(int deck[]) {
  for (int s = 0, q = 0; s < 4; s++) {
    for (int i = 1; i <= 13; i++) {
      deck[q++] = i*10+s;
    }
  }
}

void shuffle_deck(int deck[]) {
  srand(time(NULL));
  for (int i = 0; i < 30; i++) {
    swap(deck[rand()%52], deck[rand()%52]); 
  }
}

string get_color_from_suit(const string &suit) {
  if (suit == DIAMONDS || suit == HEARTS) {
    return "red";
  } else if (suit == SPADES || suit == CLUBS) {
    return "black";
  }
  return "";
}

string get_color_from_scode(int idx) {
  string ss = decode_suit(idx);
  return get_color_from_suit(ss);
}

void show_deck(const int deck[], int n=52) {
  for (int i = 0; i < n; i++) {
    cout << decode_label(deck[i]) << decode_suit(deck[i]) << ", ";
  }
  cout << endl;
}

void bb_sort(int deck[]) {
  for (int i = 51; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (deck[j] > deck[j+1]) {
        swap(deck[j], deck[j+1]);
      }
    }
  }
}

void bb_sort_suit(int deck[]) {
  for (int i = 51; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (deck[j] > deck[j+1]) {
        swap(deck[j], deck[j+1]);
      }
    }
  }
}

void desafio_a() {
  int deck[52], reds[26], blacks[26];
  int r = 0, b = 0;

  create_deck(deck);
  shuffle_deck(deck);
  for (int i = 0; i < 52; i++) {
    string suit = decode_suit(deck[i]);
    if (get_color_from_suit(suit) == "red") {
      reds[r] = deck[i];
      r++;
    } else {
      blacks[b] = deck[i];
      b++;
    }
  }
  cout << "Red suit: "; 
  show_deck(reds, r); 
  cout << endl;
  cout << "Black suit: ";
  show_deck(blacks, b);
  cout << endl;
}

void desafio_b() {
  int deck[52];

  create_deck(deck);
  shuffle_deck(deck);
  show_deck(deck);
  int idx = 0;
  while (deck[idx] % 2 == 0) {
    idx++;
  }
  for (int i = idx+1; i < 52; i++) {
    if (get_code_card(deck[i]) % 2 == 0) {
      swap(deck[idx], deck[i]);
      idx++;
    }
  }
  show_deck(deck);
}

void desafio_c() {
  int deck[52];

  create_deck(deck);
  show_deck(deck);
  for (int i = 0; i < 26; i++) {
    swap(deck[i], deck[51-i]);
  }
  show_deck(deck);
}

void desafio_d() {
  int deck[52];

  create_deck(deck);
  shuffle_deck(deck);
  int n_suit[] = { 0, 0, 0, 0};
  for (int i = 0; i < 52; i++) {
    n_suit[deck[i]%10]++;
  }
  for (int i = 0; i < 4; i++) {
    cout << suits[i] << ": " << n_suit[i] << endl; 
  }
}

int main (int argc, const char *argv[]) {
  desafio_d();
  return 0;
}
