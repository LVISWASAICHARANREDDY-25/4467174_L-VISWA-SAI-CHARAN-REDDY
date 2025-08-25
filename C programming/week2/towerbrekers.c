int towerBreakers(int n, int m) {
    if (m == 1) {
        return 2; // no moves possible, player 2 wins
    }
    if (n % 2 == 0) {
        return 2; // player 2 mirrors and wins
    }
    return 1; // player 1 wins
}

