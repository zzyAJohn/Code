package handlerr;

import game.Game;

public class HandlerMap extends Handler {
    public HandlerMap(Game game) {
        super(game);
    }

    @Override
    public void doCmd(String word) {
        game.showComputer();
        System.out.println();
        System.out.println("门面招租\t教堂\t\t门面招租");
        System.out.println("门面招租\t风神像\t\t声望");
        System.out.println("猎鹿人餐馆\t炼金\t\t钓鱼协会");
        System.out.println("冒险家协会\t\t商店\t\t天使的馈赠");
        System.out.println("铁匠铺\t\t荣光之风\t花店");
        System.out.println("门面招租\t城堡外\t\t门面招租");
        System.out.println("你在"+game.currentRoom);
        System.out.println("------------------------");
    }

    @Override
    public boolean isMap() {
        return true;
    }
}
