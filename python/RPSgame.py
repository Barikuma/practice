from random import choice

class Game:
    def __init__(self):
        self.user_score = 0
        self.comp_score = 0
        self.actions = ['rock', 'paper', 'scissors']

        def gameplay():
            self.user_action = ""
            while self.user_action != 'q':
                self.action = choice(self.actions)
                self.user_action = input("Rock, Paper or Scissors(Enter q to quit or r to refresh scores "
                                         "or s to show scores)?: ").lower()

                if self.action == self.user_action:
                    print(self.action)
                    self.user_score = self.user_score
                    self.comp_score = self.comp_score

                # Computer score generator
                elif (self.action == 'paper' and self.user_action == 'rock') \
                        or (self.action == 'scissors' and self.user_action == 'paper') \
                        or (self.action == 'rock' and self.user_action == 'scissors'):
                    print(self.action)
                    self.comp_score += 1

                # User score generator
                elif (self.user_action == 'paper' and self.action == 'rock') \
                        or (self.user_action == 'scissors' and self.action == 'paper')\
                        or (self.user_action == 'rock' and self.action == 'scissors'):
                    print(self.action)
                    self.user_score += 1

                # Reset score
                if self.user_action == 'r':
                    refresh()
                    # Show scores
                if self.user_action == 's':
                    print(f"your score {self.user_score}, my score {self.comp_score}")
            print(f"your score {self.user_score}, my score {self.comp_score}")


        def refresh():
            self.user_score = 0
            self.comp_score = 0
        gameplay()


if __name__ == '__main__':
    Game()
