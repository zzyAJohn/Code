package handlerr;

import game.Game;

public class Handler {
    protected Game game;

    public Handler(Game game) {
        this.game = game;
    }
    
    public void doCmd(String word) {}

    public boolean isQuit() {
        return false;
    }

    public boolean isMap() {
        return false;
    }

    public boolean isHi() {
        return false;
    }
    
}
