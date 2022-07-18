package castle;

public class HandlerHelp extends Handler {
    public HandlerHelp(Game game) {
        super(game);
    }

    @Override
    public void doCmd(String word) {
        castle.Game.showComputer();
        System.out.println("迷路了么?你可以输入: go map bye help命令");
        castle.Game.showComputer();
        System.out.println("such as:\t\tgo east");
    }

    @Override
    public boolean isBye() {
        return true;
    }
    
}
