package castle;

import java.util.HashMap;
import java.util.Scanner;

public class Game {
    private Room currentRoom;//当前房间
    private HashMap<String, Handler> handlers = new HashMap<String, Handler>();
    

    public Game()
    {
        handlers.put("go", new HandlerGo(this));
        handlers.put("bye", new HandlerBye(this));
        handlers.put("help", new HandlerHelp(this));
        createRooms();
    }

    //初始化房间
    private void createRooms() {
        Room outside, pub, florist, memorialStore, store, syntheticPlatform;
        Room fish, hotel, catherine, blacksmith ,fengShenStatue;

        outside = new Room("城堡外");
        pub = new Room("天使的馈赠");
        florist = new Room("花店");
        memorialStore = new Room("荣光之风");//玛乔丽<荣光之风店主>
        store = new Room("布兰琪<蒙德百货售货员>");
        syntheticPlatform = new Room("炼金");//提玛乌斯<炼金学者>
        fish = new Room("钓鱼协会");
        hotel = new Room("猎鹿人");//莎拉<猎鹿人侍应生>
        catherine = new Room("冒险家协会");//凯瑟琳<冒险家协会接待员>
        blacksmith = new Room("铁匠铺");//瓦格纳<铁匠老板>
        fengShenStatue = new Room("风神像");

        outside.setExits("north" , memorialStore);
        memorialStore.setExits(blacksmith, florist, store, outside);
        store.setExits(catherine, pub, syntheticPlatform, memorialStore);
        blacksmith.setExits(null, memorialStore, catherine, null);
        florist.setExits(memorialStore, null, pub, null);
        pub.setExits(store, null, fish, florist);
        catherine.setExits(null, store, hotel, blacksmith);
        hotel.setExits(null, syntheticPlatform, null, catherine);
        syntheticPlatform.setExits(hotel, fish, fengShenStatue, store);
        fish.setExits(syntheticPlatform, null, null, pub);

        currentRoom = outside;
    }

    //开头语
    private void printWelcome() {
        System.out.println();
        showComputer();
        System.out.println("亲爱的旅行者，欢迎来到AJohn原神小游戏！");
        showComputer();
        System.out.println("支持的指令有：go map help");
        System.out.println("前往某地：go 方向");
        System.out.println("打开地图：map");
        System.out.println("寻求帮助：help");
        System.out.println("------------------------");
        showComputer();
        System.out.println("现在你在"+currentRoom);
        showComputer();
        System.out.println("出口有:");
        showComputer();
        showPrompt();
        System.out.println("------------------------");
    }

    // //回复help
    // private void printHelp() {
        
    // }

    //前往房间
    public void goRoom(String direction) {
        Room nextRoom = currentRoom.getExits(direction);
        if(nextRoom == null) {
            showComputer();
            System.out.println("前面的区域，以后再来探索吧！");
            System.out.println("------------------------");
        }
        else {
            currentRoom = nextRoom;
            showComputer();
            System.out.println("你在"+currentRoom);
            showComputer();
            System.out.print("出口有:");
            showPrompt();
            System.out.println("------------------------");
        }
    }

    //显示附近房间
    public void showPrompt() {
        System.out.print(currentRoom.getExitDesc());//减少耦合度
            System.out.println();
    }
    
    public static void showComputer() {
        System.out.print("派蒙:");
    }

    //回复map
    public void showMap() {
        System.out.println("门面招租\t教堂\t\t门面招租");
        System.out.println("门面招租\t风神像\t\t声望");
        System.out.println("猎鹿人餐馆\t合成台\t\t钓鱼协会");
        System.out.println("委托处\t\t商店\t\t酒吧");
        System.out.println("铁匠铺\t\t纪念商店\t花店");
        System.out.println("门面招租\t城堡外\t\t门面招租");
        System.out.println("你在"+currentRoom);
        System.out.println("------------------------");
    }

    //开始游戏
    public void play() {
        Scanner in = new Scanner(System.in);
        while(true) {
            String line = in.nextLine();
            String[] words = line.split(" ");
            Handler handler = handlers.get(words[0]);
            String value = " ";
            if(words.length > 1)
                value = words[1];
            if(handler != null) {
                handler.doCmd(value);
                if(handler.isBye()) 
                    break;
                //这里break要加括号，检错好半天
            }
            // if(words[0].equals("help")) {
            //     game.printHelp();
            // }
            // else if(words[0].equals("go")) {
            //     game.goRoom(words[1]);
            // }
            // else if(words[0].equals("map")) {
            //     game.showMap();
            // }
            // else if(words[0].equals("bye")) {
            //     break;
            // }
        }
        in.close();
    }

    public static void main(String[] args) {
        
        Game game = new Game();
        game.printWelcome();
        game.play();
        showComputer();
        System.out.println("ありがとうございます");
        showComputer();
        System.out.println("Goodbye!");
        
    }
}