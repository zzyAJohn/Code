package handlerr;

import game.Game;

public class HandlerQuit extends Handler {
    public HandlerQuit(Game game) {
        super(game);
    }

    @Override
    public boolean isQuit() {
        return true;
    }
    
}
