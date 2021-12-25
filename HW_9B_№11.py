#Homework Iliyan Gavrilov 9B #11
class Card:
    def __init__(self, value, suit):
        self.value = value
        self.suit = suit

    def __str__(self):
        symbol = {"hearts":"♥",\
                  "diamonds":"♦",\
                  "clubs":"♣",\
                  "spades":"♠"}[self.suit]
        letter_values = {11: "J", 12: "Q", 13: "K", 14: "A"}                  
        val = self.value
        if self.value > 10:
          val = letter_values[val]
        return "%s%s" % (val, symbol)

class Deck:
    def __init__(self):
        self.initCards()
        self.shuffle()

    def initCards(self):
        self.cards = []
        for suit in ("hearts","diamonds","clubs","spades"):
          for value in range(2,15):
            self.cards.append(Card(value, suit))

    def shuffle(self):
        self.initCards()
        from random import shuffle
        shuffle(self.cards)

    def draw(self):
        return self.cards.pop()

class Hand:
    def __init__(self, deck, count):
        self.count = count
        self.cards = []
        for _ in range(count):
            self.cards.append(deck.draw())
        self.cards.sort(key=lambda x: x.value)

    def __str__(self):
        result = "Hand("
        for card in self.cards:
            result += str(card)
            result += " "
        result += ")"
        return result

    def eval(self):
        first_card=self.cards[0]
        same_suit=True
        for card in self.cards:
            if card.suit != first_card.suit:
                same_suit=False
                break

        if same_suit:
            if self.cards[0].value==10:
                print("Royal Flush!")
            else:
                consecutive=True
                for i in range(0, self.count-1):
                    if self.cards[i].value+1!=self.cards[i+1].value:
                        consecutive=False
                        break
                if consecutive:
                    print("Straight Flush!")
                else:
                    print("Flush!")
        else:
            consecutive=True
            for i in range(0, self.count-1):
                if self.cards[i].value+1!=self.cards[i+1].value:
                    consecutive=False
                    break
            if consecutive:
                print("Straight!")
            else:
                arr = []
                for i in range(15):
                    arr.append(0)
                for card in self.cards:
                    arr[card.value]+=1
                for i in range(2, 15):
                    if arr[i] == 4:
                        print("Four Of A Kind!")
                        break
                    elif arr[i] == 3:
                      full_house = False
                      for j in range(2, 15):
                        if arr[j] == 2:
                          full_house = True
                          print("Full House!")
                          break
                      if not full_house:
                        print("Three Of A Kind!")
                      break
                    elif arr[i] == 2:
                      full_house = False
                      for j in range(2, 15):
                        if arr[j] == 3:
                          full_house = True
                          print("Full House!")
                          break
                      if full_house:
                        break
                      two_pair = False
                      for j in range(i+1, 15):
                          if arr[j] == 2:
                              two_pair = True
                              print("Two Pair!")
                              break
                      if two_pair:
                        break
                      else:
                        print("Pair!")                 
                      
deck=Deck()
hand=Hand(deck,5)
print(hand.__str__())
hand.eval()
