package handlerr;

import game.Game;

public class HandlerHelp extends Handler {
    public HandlerHelp(Game game) {
        super(game);
    }

    @Override
    public void doCmd(String word) {
        game.showComputer();
        System.out.println("迷路了么?你可以输入: go map bye help命令");
        game.showComputer();
        System.out.println("such as:\t\tgo east");
    }

    @Override
    public boolean isQuit() {
        return true;
    }
    
}
