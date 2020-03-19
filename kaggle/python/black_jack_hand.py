def blackjack_hand_greater_than(hand1,hand2):
	def sumhand(hand):
		sum = 0
		count = 0
		for card in hand:
			if card =='K' or card == 'Q' or card == 'J':
				sum = sum + 10
			elif card == 'A':
				count = count +1 
			else :
				sum = sum + int(card)
		for i in range(count):
				sum = (sum +11) if sum+11 <=21 else (sum +1) 
		return sum 
	sum_hand1 = sumhand(hand1)
	sum_hand2 = sumhand(hand2)
	return True if sum_hand1 <=21 and (sum_hand1 > sum_hand2) else False
	
	
	
print(blackjack_hand_greater_than(['K'],['3', '4']))
print(blackjack_hand_greater_than(['10'],['K','K','2']))
print(blackjack_hand_greater_than(['A', 'A', '9'],['A', 'A', '9', '3']))

