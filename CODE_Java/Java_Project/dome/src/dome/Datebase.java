package src.dome;

import java.util.ArrayList;

public class Datebase {
    // private ArrayList<CD> listCD = new ArrayList<>();
    // private ArrayList<DVD> listDVD = new ArrayList<>();
    private ArrayList<Item> listItem = new ArrayList<>();

    // public void add(CD cd) {
    //     listCD.add(cd);
    // }
    // public void add(DVD dvd) {
    //     listDVD.add(dvd);
    // }
    public void add(Item item) {
        listItem.add(item);
    }
    
    // public void list() {
    //     for(CD cd : listCD) {
    //         cd.print();
    //     }
    //     for(DVD dvd : listDVD) {
    //         dvd.print();
    //     }
    // }
    public void list() {
        for(Item item : listItem) {
            item.print();
        }
    }
   
    public static void main(String[] args) {
        Datebase db = new Datebase();
        db.add(new CD("童年",60,false,null,"周杰伦",10));
        db.add(new DVD("你的名字", 120, false, null, "新海诚"));
        db.list();
    }
}
