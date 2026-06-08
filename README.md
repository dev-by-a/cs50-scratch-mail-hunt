# Mail Hunt 📬

A catch-and-dodge arcade game built in Scratch as my Week 0 project for Harvard's **CS50: Introduction to Computer Science**.

## 🎮 About the Game

You control an inbox tray at the bottom of the screen and must catch incoming good emails while dodging spam. It's a lighthearted nod to my background in email marketing — turned into a game about keeping your inbox clean.

## 🕹️ How to Play

- Press the **green flag** to load the start screen
- Press the **spacebar** to begin
- Use the **left and right arrow keys** to move your inbox tray
- **Catch good emails** (blue envelopes) to score points — each one is worth +1
- **Avoid spam** (red "no spam" signs) — each hit costs you a life
- You start with **3 lives**. Lose all three and it's **Game Over**
- Reach a score of **10** to **Win!**
- The game speeds up as your score climbs, so stay sharp

## 🛠️ Concepts Demonstrated

This project applies several core computer science concepts introduced in CS50 Week 0:

- **Variables & state management** — tracking score, lives, and game state across multiple sprites
- **Conditionals** — collision detection, win/lose logic, and boundary checks
- **Loops** — continuous movement, spawning, and falling animation
- **Custom blocks (abstraction)** — a reusable `loseLife` block that takes an input parameter, encapsulating the "lose a life" logic
- **Events** — using flag-clicked, key-press, and backdrop-switch triggers to coordinate game flow
- **Difficulty scaling** — fall speed increases dynamically as the score rises

## 🚀 Running the Project

1. Download `Mail Hunt.sb3` from this repository
2. Go to [scratch.mit.edu](https://scratch.mit.edu)
3. Select **File → Load from your computer** and choose the `.sb3` file
4. Click the green flag to play

## 📚 Course

Built for [CS50x 2026](https://cs50.harvard.edu/x/), Problem Set 0.
