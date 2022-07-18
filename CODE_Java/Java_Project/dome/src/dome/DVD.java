package src.dome;

public class DVD extends Item {
    private String director;

    public DVD(String title, int playingTime, boolean gotIt, String comment, String director) {
        super(title, playingTime, false, comment);
        this.director = director;
    }

    public static void main(String[] args) {

    }

    public void print() {
        System.out.println("DVD标题:"+title+" "+"导演:"+director);
    }
}