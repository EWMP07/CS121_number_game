# CS121_number_game
#Algorithm for guesser game 

'''
    main(): 
        make 20-length character array userName
        make an integer called guess initialize -999
        make an integer called correct will be randomly generated 
        make an integer called turns, initialize to 0 
        make an integer (boolean) called keepGoing start true (-1)

        seed random number generator 
        generate random number between 1 and 100 put in correct 
        ask user name put in userName 
        greet user with name 

        while keepGoing is true: 
            increment turns
        ask user for a number put it in guess
            if guess < correct: 
                tell them  "Too low" 
            elif guess > correct:
                tell them "Too high" 
            else: 
                tell them "You win!" 
            set keepGoing to false
    
        evaluate the performance 
            if turns < 7:
                say "That's great"
            elif turns  > 7: 
                say "You could do better" 
            else:
                say "Good job" 
''' 