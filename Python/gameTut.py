import pygame

x = pygame.init()

# Creating Window
gameWindow = pygame.display.set_mode((500, 500))
pygame.display.set_caption("My First Python Game")

# Game Specific Window
exit_game = False
game_over = False

# Creating the game loop
while not exit_game:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit_game = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                print("You have pressed Right Arrow Key")

pygame.quit()
quit()
