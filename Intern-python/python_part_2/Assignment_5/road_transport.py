'''
The road transport corporation (RTC) of a city wants to know whether a particular bus-route is running on profit or loss.

Assume that the following information are given:
Price per litre of fuel = 70
Mileage of the bus in km/litre of fuel = 10
Price(Rs) per ticket = 80

The bus runs on multiple routes having different distance in kms and number of passengers.
Write a function to calculate and return the profit earned (Rs) in each route. Return -1 in case of loss.
'''
#lex_auth_012693816779112448160

def calculate(distance,no_of_passengers):
    #pass
    #Remove pass and write your logic here
    
    gain=no_of_passengers*80
    loss=distance*7 # distance/10(milage) * 70(price per litr fuel)
    profit=gain-loss
    
    if loss<=gain:
        return profit
    else:
        return -1



#Provide different values for distance, no_of_passenger and test your program
distance=20
no_of_passengers=50
print(calculate(distance,no_of_passengers))