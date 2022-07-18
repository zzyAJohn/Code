package src.dome;

public class Item {
    protected String title;
    protected int playingTime;
    protected boolean gotIt;
    protected String comment;

    public Item() {

    }

    public Item(String title, int playingTime,boolean gotIt, String comment) {
        super();
        this.title = title;
        this.playingTime = playingTime;
        this.gotIt = gotIt;
        this.comment = comment;
    }

    // public static void 

    public void print() {
        System.out.println(title);
    }
}
