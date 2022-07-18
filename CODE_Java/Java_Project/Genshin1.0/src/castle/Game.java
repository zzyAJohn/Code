package castle;

import java.util.Scanner;

public class Game {
    private Room currentRoom;

    public Game()
    {
        createRooms();
    }

    //初始化房间
    private void createRooms() {
        Room outside, lobby, pub, study, bedroom;

        outside = new Room("城堡外");
        lobby = new Room("大堂");
        pub = new Room("小酒吧");
        study = new Room("书房");
        bedroom = new Room("卧室");

        outside.setExits("east" , lobby);
        outside.setExits("south" , study);
        outside.setExits("west" , pub);
        lobby.setExits("west",outside);
        pub.setExits("east", outside);
        study.setExits("north", outside);
        study.setExits("east", bedroom);
        bedroom.setExits("west", study);
        lobby.setExits("up", pub);
        pub.setExits("down", lobby);
        currentRoom = outside;
    }

    //开头语
    private void printWelcome() {
        System.out.println();
        showComputer();
        System.out.println("欢迎━(*｀∀´*)ノ亻!来到城堡！");
        showComputer();
        System.out.println("这可能有些无聊哈哈");
        showComputer();
        System.out.println("if you want any help,please input 'help'");
        System.out.println();
        showComputer();
        System.out.println("现在你在"+currentRoom);
        showComputer();
        System.out.println("出口有:");
        showComputer();
        showPrompt();
    }

    //回复help
    private void printHelp() {
        showComputer();
        System.out.println("迷路了么?你可以输入: go map bye help命令");
        showComputer();
        System.out.println("such as:\tgo east");
    }

    //前往房间
    private void goRoom(String direction) {
        Room nextRoom = currentRoom.getExits(direction);
        if(nextRoom == null) {
            showComputer();
            System.out.println("那里没有门!");
        }
        else {
            currentRoom = nextRoom;
            showComputer();
            System.out.println("你在"+currentRoom);
            showComputer();
            System.out.print("出口有:");
            showPrompt();
        }
    }

    //显示附近房间
    public void showPrompt() {
        System.out.print(currentRoom.getExitDesc());//减少耦合度
            System.out.println();
    }
    
    public static void showComputer() {
        System.out.print("computer:");
    }

    //回复map
    public void showMap() {
        System.out.println("小酒吧，城堡外，大堂");
        System.out.println("空，书房，卧室");
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Game game = new Game();
        game.printWelcome();

        while(true) {
            String line = in.nextLine();
            String[] words = line.split(" ");
            if(words[0].equals("help")) {
                game.printHelp();
            }
            else if(words[0].equals("go")) {
                game.goRoom(words[1]);
            }
            else if(words[0].equals("map")) {
                game.showMap();
            }
            else if(words[0].equals("bye")) {
                break;
            }
        }
        showComputer();
        System.out.println("ありがとうございます");
        showComputer();
        System.out.println("Goodbye!");
        in.close();
    }
}